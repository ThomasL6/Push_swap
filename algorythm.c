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

void	trier(t_list *pile_a)
{
	t_list	*tri;
	long int	nbr;

	tri = pile_a;
	while(tri->nxt)
	{
		nbr = tri->nxt;
		tri = tri->nxt;
		if(nbr > tri->nxt)
			retunr(1);
	}
	return(0);
}
void	algorythm(**pile_a, **pile_b, int len)
{
	if(trier(pile_a == 0))
		return(pile_a);
}