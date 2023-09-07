/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 11:31:54 by thlefebv          #+#    #+#             */
/*   Updated: 2023/06/15 11:31:56 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	long int	values;
	void		*nxt;
}		t_list;

t_list		*last_value(t_list *pile);
long int	ft_atoil(const char *nptr);
int			lst_size(t_list *pile);
int			sort(t_list *pile_a);
int			vmin(t_list *pile);
int			vmax(t_list *pile);
int			run(int i, int min, int max, t_list *pile);
void		stack(t_list **pile, int newvalue);
void		afficher(t_list *pile);
void		check(char **tab);
void		do_pa(t_list **pile_a, t_list **pile_b);
void		do_pb(t_list **pile_a, t_list **pile_b);
void		do_sa(t_list **pile_a, int i);
void		do_sb(t_list **pile_b, int i);
void		do_ss(t_list **pile_a, t_list **pile_b);
void		do_ra(t_list **pile_a, int i);
void		do_rb(t_list **pile_b, int i);
void		do_rr(t_list **pile_a, t_list **pile_b);
void		do_rra(t_list **pile_a, int i);
void		do_rrb(t_list **pile_b, int i);
void		do_rrr(t_list **pile_a, t_list **pile_b);
void		doubles(char **tab);
void		verification(int arg, char **tab);
void		algo2(t_list **pile_a);
void		algo3(t_list **pile_a);
void		algo_5(t_list **pile_a, t_list **pile_b);
void		algo100(t_list **pile_a, t_list **pile_b, int stacks);
void		pile_de_3(t_list **pile_a, t_list **pile_b);
void		pile20(t_list **pile_a, t_list **pile_b, int min, int max);
void		free_stack(t_list *pile);

#endif
