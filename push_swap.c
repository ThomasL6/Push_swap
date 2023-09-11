/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:37:10 by thlefebv          #+#    #+#             */
/*   Updated: 2023/06/30 11:37:12 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	alg_other(t_list **stack_a, t_list **stack_b)
{
	int	p;

	while (lst_size(*stack_a) > 0)
		do_pb(stack_a, stack_b);
	while (lst_size(*stack_b) > 0)
	{
		p = vmax(*stack_b);
		if (p == 0)
			do_pa(stack_a, stack_b);
		else if (p <= lst_size(*stack_b) / 2)
		{
			while (p-- > 0)
				do_rb(stack_b, 0);
			do_pa(stack_a, stack_b);
		}
		else
		{
			while (p++ < lst_size(*stack_b))
				do_rrb(stack_b, 0);
			do_pa(stack_a, stack_b);
		}
	}
}

void	algorythm(t_list **stack_a, t_list **stack_b, int len)
{
	if (len == 1)
		return ;
	else if (len == 2)
		algo2(stack_a);
	else if (len == 3)
		algo3(stack_a);
	else if (len <= 5)
		algo_5(stack_a, stack_b);
	else if (len == 100)
		algo100(stack_a, stack_b, 5);
	else if (len == 500)
		algo100(stack_a, stack_b, 11);
	else
	{
		alg_other(stack_a, stack_b);
	}
	free_stack(*stack_a);
}

int	main(int arg, char **tab)
{
	int		i;
	t_list	*stack_a;
	t_list	*stack_b;

	i = 2;
	if (arg == 1)
		return (0);
	else
	{
		verification(arg, tab);
		stack_a = malloc(sizeof (t_list));
		stack_a->values = ft_atoil(tab[1]);
		stack_a->nxt = NULL;
		stack_b = NULL;
		while (i != arg)
			stack(&stack_a, ft_atoil(tab[i++]));
		if (check(tab) == 1)
		{
			free_stack(stack_a);
			return (0);
		}
		algorythm(&stack_a, &stack_b, lst_size(stack_a));
	}
}
