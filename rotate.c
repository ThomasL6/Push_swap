/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:26:45 by thlefebv          #+#    #+#             */
/*   Updated: 2023/06/23 15:26:46 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_ra(t_list **stack_a, int i)
{
	t_list	*temp;
	t_list	*temp2;

	if (!*stack_a || !(*stack_a)->nxt)
		return ;
	temp = (*stack_a);
	temp2 = (*stack_a)->nxt;
	while (temp->nxt)
		temp = temp->nxt;
	temp->nxt = *stack_a;
	(*stack_a)->nxt = NULL;
	*stack_a = temp2;
	if (i == 0)
		write(1, "ra\n", 3);
}

void	do_rb(t_list **stack_b, int i)
{
	t_list	*temp;
	t_list	*temp2;

	if (!*stack_b || !(*stack_b)->nxt)
		return ;
	temp = (*stack_b);
	temp2 = (*stack_b)->nxt;
	while (temp->nxt)
		temp = temp->nxt;
	temp->nxt = *stack_b;
	(*stack_b)->nxt = NULL;
	*stack_b = temp2;
	if (i == 0)
		write(1, "rb\n", 3);
}

void	do_rr(t_list **stack_a, t_list **stack_b)
{
	do_ra(stack_a, 1);
	do_rb(stack_b, 1);
	write(1, "rr\n", 3);
}
