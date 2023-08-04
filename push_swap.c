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
		pile_b->values = ft_atoil(tab[1]);
		while(i != arg)
		{
			empiler(&pile_a, ft_atoil(tab[i]));
			empiler(&pile_b, ft_atoil(tab[i]));
			i++;
		}
		verifier(arg, tab);
		printf("affichage pile_a : \n");
		afficher(pile_a);
		afficher(pile_b);
		printf("//////\n");
		do_pa(&pile_a, &pile_b);
		afficher(pile_a);
		afficher(pile_b);
	}
}
