/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorythm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 16:01:01 by thlefebv          #+#    #+#             */
/*   Updated: 2023/07/28 16:01:03 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int sort(t_list *pile_a)
{
	t_list *swp;

	while(pile_a && pile_a->nxt)
	{
		swp = pile_a->nxt;
		if(swp->values < pile_a->values)
			return(0);
		pile_a = pile_a->nxt;
	}
	return(1);
}

void	algorythm(t_list **pile_a, t_list **pile_b, int len)
{
	if(sort(*pile_a) == 0)
		return;
	else if (len == 2)
		algo2(pile_a);
	else if (len == 3)
		algo3(pile_a);
	else if (len <= 5)
		algo_5(pile_a, pile_b);
}