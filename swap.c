/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:21:59 by thlefebv          #+#    #+#             */
/*   Updated: 2023/06/23 15:22:01 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_sa(t_list **stack_a, int i)
{
	t_list	*swap;

	if (!*stack_a || !(*stack_a)->nxt)
		return ;
	swap = (*stack_a)->nxt;
	(*stack_a)->nxt = swap->nxt;
	swap->nxt = (*stack_a);
	(*stack_a) = swap;
	if (i == 0)
		write(1, "sa\n", 3);
}

void	do_sb(t_list **stack_b, int i)
{
	t_list	*swap;

	if (!*stack_b || !(*stack_b)->nxt)
		return ;
	swap = (*stack_b)->nxt;
	(*stack_b)->nxt = swap->nxt;
	swap->nxt = (*stack_b);
	(*stack_b) = swap;
	if (i == 0)
		write(1, "sb\n", 3);
}

void	do_ss(t_list **stack_a, t_list **stack_b)
{
	do_sa(stack_a, 1);
	do_sb(stack_b, 1);
	write(1, "ss\n", 3);
}
