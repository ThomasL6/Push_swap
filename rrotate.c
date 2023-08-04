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

void	do_rra(t_list **pile_a, int i)
{
	t_list	*temp;
	t_list	*cell;

	temp = *pile_a;
	cell = (*pile_a)->nxt;
	while (cell->nxt)
	{
		cell = cell->nxt;
		temp = temp->nxt;
	}
	temp->nxt = NULL;
	cell->nxt = *pile_a;
	*pile_a = cell;
	if(i == 0)
		write(1, "rra\n", 4);
}

void	do_rrb(t_list **pile_b, int i)
{
	t_list	*temp;
	t_list	*cell;

	temp = *pile_b;
	cell = (*pile_b)->nxt;
	while (cell->nxt)
	{
		cell = cell->nxt;
		temp = temp->nxt;
	}
	temp->nxt = NULL;
	cell->nxt = *pile_b;
	*pile_b = cell;
	if(i == 0)
		write(1, "rrb\n", 4);
}

void	do_rrr(t_list **pile_a, t_list **pile_b)
{
	do_rra(pile_a, 1);
	do_rrb(pile_b, 1);
	write(1, "rrr\n", 4);
}
