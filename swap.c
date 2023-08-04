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

void	do_sa(t_list **pile_a, int i)
{
	t_list	*swap;

	if(!*pile_a || !(*pile_a)->nxt)
		return;
	swap = (*pile_a)->nxt;
	(*pile_a)->nxt = swap->nxt;
	swap->nxt = (*pile_a);
	(*pile_a) = swap;
	if(i == 0)
		write(1, "sa\n", 3);
}

void	do_sb(t_list **pile_b, int i)
{
	t_list	*swap;

	if(!*pile_b || !(*pile_b)->nxt)
		return;
	swap = (*pile_b)->nxt;
	(*pile_b)->nxt = swap->nxt;
	swap->nxt = (*pile_b);
	(*pile_b) = swap;
	if(i == 0)
		write(1, "sb\n", 3);
}

void	do_ss(t_list **pile_a, t_list **pile_b)
{
	do_sa(pile_a, 1);
	do_sb(pile_b, 1);
	write(1, "ss\n", 3);
}
