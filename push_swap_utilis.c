/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utilis.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 17:50:56 by thlefebv          #+#    #+#             */
/*   Updated: 2023/06/15 17:50:57 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int	ft_atoil(const char *nptr)
{
	int	i;
	long int	nb;
	int	mu;

	mu = 1;
	i = 0;
	nb = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
		i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
		{
			mu *= -1;
		}
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
		nb = (nb * 10) + (nptr[i++] - '0');
	nb *= mu;
	return (nb);
}

void	doubles(char **tab)
{
	int i;
	int j;

	i = 1;
	while(tab[i])
	{
		j = i + 1;
		while(tab[j])
		{
			if(ft_atoil(tab[i]) == ft_atoil(tab[j]))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			j++;
		}
		i++;
	}
}

void	verifier(int arg, char **tab)
{
	int i;
	int j;

	j = 1;
	doubles(tab);
	while(j < arg)
	{
		i = 0;
		while(tab[j][i])
		{
			if(tab[j][i] != '-'  && tab[j][i] != '+'
				&& !(tab[j][i] >= '0' && tab[j][i] <= '9'))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			i++;
		}
		if(ft_atoil(tab[j]) < -2147483648 || ft_atoil(tab[j]) > 2147483647)
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		j++;
	}
}


int	lst_size(t_list *pile)
{
	int		i;
	t_list	*tmp;

	tmp = pile;
	i = 0;
	while (tmp)
	{
		tmp = tmp->nxt;
		i++;
	}
	return (i);
}