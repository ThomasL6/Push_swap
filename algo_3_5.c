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
	int	p;

	while (lst_size(*pile_a) > 3)
	{
		p = vmin(*pile_a);
		if (p == 0)
			do_pb(pile_a, pile_b);
		else if (p >= 1 && p <= 2)
			do_ra(pile_a, 0);
		else if (p >= 3)
			do_rra(pile_a, 0);
	}
}

void	algo3(t_list **pile_a)
{
	t_list	*mid;
	t_list	*last;

	mid = (*pile_a)->nxt;
	if (lst_size(*pile_a) == 2 && (*pile_a)->values > mid-> values)
		write(1, "sa\n", 3);
	last = *pile_a;
	while (last->nxt)
		last = last->nxt;
	if ((*pile_a)->values > mid->values && mid->values > last->values)
		write(1, "sa\nrra\n", 7);
	else if (mid->values > last->values && last->values > (*pile_a)->values)
		write(1, "rra\nsa\n", 7);
	else if (mid->values > (*pile_a)->values 
		&& (*pile_a)->values > last->values)
		write(1, "rra\n", 3);
	else if (last->values > (*pile_a)->values 
		&& (*pile_a)->values > mid->values)
		write(1, "sa\n", 3);
	else if ((*pile_a)->values > last->values && last->values > mid->values)
		write(1, "ra\n", 3);
}

void	algo_5(t_list **pile_a, t_list **pile_b)
{
	pile_de_3(pile_a, pile_b);
	algo3(pile_a);
	if (sort(*pile_b) == 1)
		do_rb(pile_b, 0);
	while (lst_size(*pile_b) > 0)
		do_pa(pile_a, pile_b);
}
