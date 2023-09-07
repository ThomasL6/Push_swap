/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 09:36:57 by thlefebv          #+#    #+#             */
/*   Updated: 2023/09/07 09:37:01 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	vmin(t_list *pile)
{
	int		p;
	int		min;
	int		i;
	t_list	*tmp;

	tmp = pile;
	p = 0;
	i = 0;
	min = tmp->values;
	while (tmp)
	{
		if (tmp->values < min)
		{
			min = tmp->values;
			p = i;
		}
		tmp = tmp->nxt;
		i++;
	}
	return (p);
}

void	free_stack(t_list *pile)
{
	t_list	*tmp;

	tmp = pile;
	while (pile)
	{
		tmp = pile->nxt;
		free(pile);
		pile = tmp;
	}
}

int	vmax(t_list *pile)
{
	int		p;
	int		max;
	int		i;
	t_list	*tmp;

	tmp = pile;
	p = 0;
	i = 0;
	max = tmp->values;
	while (tmp)
	{
		if (tmp->values > max)
		{
			max = tmp->values;
			p = i;
		}
		tmp = tmp->nxt;
		i++;
	}
	return (p);
}

t_list	*last_value(t_list *pile)
{
	t_list	*swap;

	swap = pile;
	while (swap && swap->nxt)
	{
		swap = swap->nxt;
	}
	return (swap);
}