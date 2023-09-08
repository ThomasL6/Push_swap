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

t_list		*last_value(t_list *stack);
long int	ft_atoil(const char *nptr);
int			lst_size(t_list *stack);
int			sort(t_list *stack_a);
int			vmin(t_list *stack);
int			vmax(t_list *stack);
int			run(int i, int min, int max, t_list *stack);
void		stack(t_list **stack, int newvalue);
void		display(t_list *stack);
void		check(char **tab);
void		do_pa(t_list **stack_a, t_list **stack_b);
void		do_pb(t_list **stack_a, t_list **stack_b);
void		do_sa(t_list **stack_a, int i);
void		do_sb(t_list **stack_b, int i);
void		do_ss(t_list **stack_a, t_list **stack_b);
void		do_ra(t_list **stack_a, int i);
void		do_rb(t_list **stack_b, int i);
void		do_rr(t_list **stack_a, t_list **stack_b);
void		do_rra(t_list **stack_a, int i);
void		do_rrb(t_list **stack_b, int i);
void		do_rrr(t_list **stack_a, t_list **stack_b);
void		doubles(char **tab);
void		verification(int arg, char **tab);
void		algo2(t_list **stack_a);
void		algo3(t_list **stack_a);
void		algo_5(t_list **stack_a, t_list **stack_b);
void		algo100(t_list **stack_a, t_list **stack_b, int stacks);
void		stack3(t_list **stack_a, t_list **stack_b);
void		stack20(t_list **stack_a, t_list **stack_b, int min, int max);
void		free_stack(t_list *stack);

#endif
