/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 11:37:10 by thlefebv          #+#    #+#             */
/*   Updated: 2023/06/30 11:37:12 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int  main(int arg, char **tab)
{
	int i;

	i = 2;
	t_list  *pile_a;
	t_list  *pile_b;
	if(arg == 1)
	       return(0);
	else
	{
		pile_a = malloc(sizeof (t_list));
		pile_b = malloc(sizeof (t_list));
		pile_a->values = ft_atoil(tab[1]);
		pile_b = NULL;
		while(i != arg)
		{
			stack(&pile_a, ft_atoil(tab[i]));
			i++;
		}
		verification(arg, tab);
		
		if (lst_size(pile_a) == 2)
			algo2(&pile_a);
		else if(lst_size(pile_a) == 3)
			algo3(&pile_a);
		else if(lst_size(pile_a) <= 5)
			algo_5(&pile_a, &pile_b);
		// do_pb(&pile_a, &pile_b);
		// afficher(pile_a);
		// printf("\n");
		// afficher(pile_b);
	}
}
