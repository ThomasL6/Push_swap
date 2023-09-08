/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:53:01 by thlefebv          #+#    #+#             */
/*   Updated: 2023/06/23 15:23:23 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	do_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_b)
		return ;
	tmp = (*stack_b)->nxt;
	(*stack_b)->nxt = *stack_a;
	*stack_a = *stack_b;
	*stack_b = tmp;
	write(1, "pa\n", 3);
}

void	do_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_a)
		return ;
	tmp = (*stack_a)->nxt;
	(*stack_a)->nxt = *stack_b;
	*stack_b = *stack_a;
	*stack_a = tmp;
	write(1, "pb\n", 3);
}
