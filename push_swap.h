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
	long int		values;
	void	*nxt;
}		t_list;

t_list  *last_value(t_list *pile);
int	lst_size(t_list *pile);
int	ft_atoil(const char *nptr);
int	trier(t_list *pile_a);
int position(t_list *pile);
void  empiler(t_list **pile, int newvalue);
void   afficher(t_list *pile);
void	do_pa(t_list **pile_a, t_list **pile_b);
void	do_pb(t_list **pile_a, t_list **pile_b);
void	do_sa(t_list **pile_a, int i);
void	do_sb(t_list **pile_b, int i);
void	do_ss(t_list **pile_a, t_list **pile_b);
void	do_ra(t_list **pile_a, int i);
void	do_rb(t_list **pile_b, int i);
void	do_rr(t_list **pile_a, t_list **pile_b);
void	do_rra(t_list **pile_a, int i);
void	do_rrb(t_list **pile_b, int i);
void	do_rrr(t_list **pile_a, t_list **pile_b);
void	doubles(char **tab);
void	verifier(int arg, char **tab);
void    algo3(t_list **pile_a);
void    algo3_b(t_list *pile_b);
void    algo2(t_list **pile_a);
void	algo_5(t_list **pile_a, t_list **pile_b);
void    free_pile(t_list *pile);
#endif
