/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 14:28:55 by thlefebv          #+#    #+#             */
/*   Updated: 2023/08/03 14:28:56 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	stack3(t_list **stack_a, t_list **stack_b)
{
	int	p;

	while (lst_size(*stack_a) > 3)
	{
		p = vmin(*stack_a);
		if (p == 0)
			do_pb(stack_a, stack_b);
		else if (p >= 1 && p <= 2)
			do_ra(stack_a, 0);
		else if (p >= 3)
			do_rra(stack_a, 0);
	}
}

void	algo3(t_list **stack_a)
{
	t_list	*mid;
	t_list	*last;

	mid = (*stack_a)->nxt;
	if (lst_size(*stack_a) == 2 && (*stack_a)->values > mid-> values)
		write(1, "sa\n", 3);
	last = *stack_a;
	while (last->nxt)
		last = last->nxt;
	if ((*stack_a)->values > mid->values && mid->values > last->values)
		write(1, "sa\nrra\n", 7);
	else if (mid->values > last->values && last->values > (*stack_a)->values)
		write(1, "rra\nsa\n", 7);
	else if (mid->values > (*stack_a)->values
		&& (*stack_a)->values > last->values)
		write(1, "rra\n", 3);
	else if (last->values > (*stack_a)->values
		&& (*stack_a)->values > mid->values)
		write(1, "sa\n", 3);
	else if ((*stack_a)->values > last->values && last->values > mid->values)
		write(1, "ra\n", 3);
}

void	algo_5(t_list **stack_a, t_list **stack_b)
{
	stack3(stack_a, stack_b);
	algo3(stack_a);
	if (sort(*stack_b) == 1)
		do_rb(stack_b, 0);
	while (lst_size(*stack_b) > 0)
		do_pa(stack_a, stack_b);
}
