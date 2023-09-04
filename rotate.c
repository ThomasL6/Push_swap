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


void	do_ra(t_list **pile_a, int i)
{
	t_list	*temp;
	t_list	*temp2;

	if(!*pile_a || !(*pile_a)->nxt)
		return;
	temp = (*pile_a);
	temp2 = (*pile_a)->nxt;
	while(temp->nxt)
		temp = temp->nxt;
	temp->nxt = *pile_a;
	(*pile_a)->nxt = NULL;
	*pile_a = temp2;
	if(i == 0)
		write(1, "ra\n", 3);
}

void	do_rb(t_list **pile_b, int i)
{
	t_list	*temp;
	t_list	*temp2;

	if(!*pile_b || !(*pile_b)->nxt)
		return;
	temp = (*pile_b);
	temp2 = (*pile_b)->nxt;
	while(temp->nxt)
		temp = temp->nxt;
	temp->nxt = *pile_b;
	(*pile_b)->nxt = NULL;
	*pile_b = temp2;
	if(i == 0)
		write(1, "rb\n", 3);
}

void	do_rr(t_list **pile_a, t_list **pile_b)
{
	do_ra(pile_a, 1);
	do_rb(pile_b, 1);
	write(1, "rr\n", 3);
}
