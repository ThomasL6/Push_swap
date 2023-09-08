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

void	alg_other(t_list **pile_a, t_list **pile_b)
{
	int	p;

	while (lst_size(*pile_a) > 0)
		do_pb(pile_a, pile_b);
	while (lst_size(*pile_b) > 0)
	{
		p = vmax(*pile_b);
		if (p == 0)
			do_pa(pile_a, pile_b);
		else if (p <= lst_size(*pile_b) / 2)
		{
			while (p-- > 0)
				do_rb(pile_b, 0);
			do_pa(pile_a, pile_b);
		}
		else
		{
			while (p++ < lst_size(*pile_b))
				do_rrb(pile_b, 0);
			do_pa(pile_a, pile_b);
		}
	}
}

void	algorythm(t_list **pile_a, t_list **pile_b, int len)
{
	if (len == 1)
		return ;
	else if (len == 2)
		algo2(pile_a);
	else if (len == 3)
		algo3(pile_a);
	else if (len <= 5)
		algo_5(pile_a, pile_b);
	else if (len == 100)
		algo100(pile_a, pile_b, 5);
	else if (len == 500)
		algo100(pile_a, pile_b, 11);
	else
	{
		alg_other(pile_a, pile_b);
	}
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
		verification(arg, tab);
		pile_a = malloc(sizeof (t_list));
		pile_a->values = ft_atoil(tab[1]);
		pile_a->nxt = NULL;
		pile_b = NULL;
		while (i != arg)
		{
			stack(&pile_a, ft_atoil(tab[i]));
			i++;
		}
		if (check(tab) == 1)
			return (0);
		algorythm(&pile_a, &pile_b, lst_size(pile_a));
	}
}
