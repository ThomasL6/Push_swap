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

void	pile_de_3(t_list **pile_a, t_list **pile_b)
{
	t_list	*list;

	while (trier(*pile_a) == 1|| (*pile_b))
	{
		last_element = list_size(*pile_a);
		if (list->values < 4)
			do_rra(*pile_a);
		if ((*pile_a)->values < 4)
			do_pb(*pile_a, *pile_b);
		else
			do_ra(*pile_a);
		if (list_size(*pile_b) == 3)
			break;
	}
}

void    algo3(t_list **pile_a)
{
	t_list  *mid;
	t_list  *last;

	mid = (*pile_a)->nxt;
	if(list_size(*pile_a) == 2 && (*pile_a)->values > mid-> values)
		write(1, "sa\n", 3);
	last = *pile_a;
	while(last->nxt)
		last = last->nxt;
	if((*pile_a)->values > mid->values && mid->values > last->values)
		write(1, "sa\nrra\n", 7);
	else if(mid->values > last->values && last->values > (*pile_a)->values)
		write(1, "rra\nsa\n", 7);
	else if(mid->values > (*pile_a)->values && (*pile_a)->values > last->values)
		write(1, "rra\n", 3);
	else if(last->values > (*pile_a)->values && (*pile_a)->values > mid->values)
		write(1, "sa\n", 3);
	else if((*pile_a)->values > last->values && last->values > mid->values)
		write(1, "ra\n", 3);
}

void    algo3_b(t_list *pile_b)
{
	t_list  *mid;
	t_list  *last;

	mid = pile_b->nxt;
	last = pile_b;
	while (last->nxt)
		last = last->nxt;
	if (b->values > last->values && last->values > mid->values)
		write(1, "rrb\nsb\n", 7);
	else if (mid->values > last->values && last->values > b->values)
		write(1, "rb\n", 3);
	else if (mid->values > b->values && b->values > last->values)
		write(1, "sb\n", 3);
	else if (last->values > mid->values && mid->values > b->values)
		write(1, "sb\nrrb\n", 7);
	else if (last->values > b->values && b->values > mid->values)
		write(1, "rrb\n", 4);
}

void	algo_6(t_list **pile_a, t_list **pile_b)
{
	pile_de_3(pile_a, pile_b);
	if(trier(*pile_a) == 0 && !(*pile_b))
		return;
	if((*pile_a)->nxt)
	{
		algo3(pile_a);
		algo3_b(pile_b);
		write(1, "pa\npa\npa\n", 9);
	}
}