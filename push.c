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

void	do_pa(t_list **pile_a, t_list **pile_b)
{
	t_list	*tmp;

	if (!*pile_b)
		return ;
	tmp = (*pile_b)->nxt;
	(*pile_b)->nxt = *pile_a;
	*pile_a = *pile_b;
	*pile_b = tmp;
	write(1, "pa\n", 3);
}

void	do_pb(t_list **pile_a, t_list **pile_b)
{
	t_list	*tmp;

	if (!*pile_a)
		return ;
	tmp = (*pile_a)->nxt;
	(*pile_a)->nxt = *pile_b;
	*pile_b = *pile_a;
	*pile_a = tmp;
	write(1, "pb\n", 3);
}
