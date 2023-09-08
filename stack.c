/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                             :+:      :+:    :+:  */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:43:20 by thlefebv          #+#    #+#             */
/*   Updated: 2023/06/29 14:43:22 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	stack(t_list **stack, int newvalue)
{
	t_list	*newstack;
	t_list	*temp;

	newstack = malloc(sizeof * newstack);
	newstack->values = newvalue;
	newstack->nxt = NULL;
	if (stack == NULL)
		return ;
	else
	{
		temp = (*stack);
		while (temp->nxt != NULL)
			temp = temp->nxt;
		temp->nxt = newstack;
	}
	stack = (*stack)->nxt;
}

void	display(t_list *stack)
{
	t_list	*actuel;

	actuel = stack;
	while (actuel != NULL)
	{
		printf("%ld\n", actuel->values);
		actuel = actuel->nxt;
	}
	write(1, "\n", 1);
}

int	sort(t_list *stack_a)
{
	t_list	*swp;

	while (stack_a && stack_a->nxt)
	{
		swp = stack_a->nxt;
		if (swp->values < stack_a->values)
			return (0);
		stack_a = stack_a->nxt;
	}
	return (1);
}
