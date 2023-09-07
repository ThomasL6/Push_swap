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

void	algorythm(t_list **pile_a, t_list **pile_b, int len)
{
	len = lst_size(*pile_a);
    if (lst_size(*pile_a) == 1)
        return ;
	else if (lst_size(*pile_a) == 2)
		algo2(pile_a);
	else if (lst_size(*pile_a) == 3)
		algo3(pile_a);
	else if (lst_size(*pile_a) <= 5)
		algo_5(pile_a, pile_b);
	else if (lst_size(*pile_a) <= 100)
		algo100(pile_a, pile_b, 5);
	else
		algo100(pile_a, pile_b, 11);
	free_stack(*pile_a);
}

int	main(int arg, char **tab)
{
	int		i;
	t_list	*pile_a;
	t_list	*pile_b;

	i = 2;
	if (arg == 1)
		return (0);
	else
	{
		pile_a = malloc(sizeof (t_list));
		pile_a->values = ft_atoil(tab[1]);
		pile_a->nxt = NULL;
		pile_b = NULL;
		while (i != arg)
		{
			stack(&pile_a, ft_atoil(tab[i]));
			i++;
		}
		verification(arg, tab);
        check(tab);
		algorythm(&pile_a, &pile_b, lst_size(pile_a));
	}
}
