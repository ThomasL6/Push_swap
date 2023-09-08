/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrotate.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 10:49:05 by thlefebv          #+#    #+#             */
/*   Updated: 2023/06/24 10:49:07 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_rra(t_list **stack_a, int i)
{
	t_list	*temp;
	t_list	*cell;

	temp = *stack_a;
	cell = (*stack_a)->nxt;
	while (cell->nxt)
	{
		cell = cell->nxt;
		temp = temp->nxt;
	}
	temp->nxt = NULL;
	cell->nxt = *stack_a;
	*stack_a = cell;
	if (i == 0)
		write(1, "rra\n", 4);
}

void	do_rrb(t_list **stack_b, int i)
{
	t_list	*temp;
	t_list	*cell;

	temp = *stack_b;
	cell = (*stack_b)->nxt;
	while (cell->nxt)
	{
		cell = cell->nxt;
		temp = temp->nxt;
	}
	temp->nxt = NULL;
	cell->nxt = *stack_b;
	*stack_b = cell;
	if (i == 0)
		write(1, "rrb\n", 4);
}

void	do_rrr(t_list **stack_a, t_list **stack_b)
{
	do_rra(stack_a, 1);
	do_rrb(stack_b, 1);
	write(1, "rrr\n", 4);
}
