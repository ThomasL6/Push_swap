/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:02:35 by thlefebv          #+#    #+#             */
/*   Updated: 2023/09/04 10:02:36 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	run(int i, int min, int max, t_list *pile)
{
	int			j;
	t_list		*temp;

	j = 0;
	temp = pile;
	while (j < i)
	{
		temp = temp->nxt;
		j++;
	}
	if (temp->values >= min && temp->values <= max)
		return (1);
	return (0);
}

int	split_stack20(int i, t_list **stack_a, t_list **stack_b, int mod)
{
	if (mod == 0)
	{
		while (i > 0)
		{
			do_ra(stack_a, 0);
			i--;
		}
		do_pb(stack_a, stack_b);
	}
	else
	{
		while (i < lst_size(*stack_a))
		{
			do_rra(stack_a, 0);
			i++;
		}
		do_pb(stack_a, stack_b);
	}
	return (1);
}

void	pile20(t_list **stack_a, t_list **stack_b, int min, int max)
{
	int	p;
	int	i;
	int	j;

	p = 0;
	while (p <= (max - min) && lst_size(*stack_a) > 0)
	{
		i = 0;
		j = lst_size(*stack_a) - 1;
		while (lst_size(*stack_a) > 0)
		{
			if (run(i, min, max, *stack_a) == 1
				&& split_stack20(i, stack_a, stack_b, 0))
				break ;
			if (run(j, min, max, *stack_a) == 1
				&& split_stack20(j, stack_a, stack_b, 1))
				break ;
			i++;
			j--;
		}
		p++;
	}
}

void	algo100_2(t_list **stack_a, t_list **stack_b, int p)
{
	while (lst_size(*stack_b) > 0)
	{
		p = vmax(*stack_b);
		if (p == 0)
			do_pa(stack_a, stack_b);
		else if (p <= lst_size(*stack_b) / 2)
		{
			while (p > 0)
			{
				do_rb(stack_b, 0);
				p--;
			}
			do_pa(stack_a, stack_b);
		}
		else
		{
			while (p < lst_size(*stack_b))
			{
				do_rrb(stack_b, 0);
				p++;
			}
			do_pa(stack_a, stack_b);
		}
	}
}

void	algo100(t_list **stack_a, t_list **stack_b, int stacks)
{
	int	min;
	int	max;

	min = 1;
	max = (lst_size(*stack_a) + lst_size(*stack_b)) / stacks;
	while (lst_size(*stack_a) > 0)
	{
		pile20(stack_a, stack_b, min, max);
		min = min + (lst_size(*stack_a) + lst_size(*stack_b)) / stacks;
		max = max + (lst_size(*stack_a) + lst_size(*stack_b)) / stacks;
	}
	algo100_2(stack_a, stack_b, 0);
}
