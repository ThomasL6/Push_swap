/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/04 10:02:35 by thlefebv          #+#    #+#             */
/*   Updated: 2023/09/04 10:02:36 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

int  run(int i, int min, int max, t_list *pile)
{
    int j;
    t_list  *temp;

    j = 0;
    temp = pile;
    while(j < i)
        j++;
    if(temp->values >= min && temp->values <= max)
        return(1);
    return(0);
}

void    pile20(t_list **pile_a, t_list **pile_b, int min, int max)
{
    int p;
    int i;
    int j;
   
    p = 0;
    while(p < (max - min))
    {
        i = 0;
        j = lst_size(*pile_a);
        while(1)
        {
            if(run(i, min, max, *pile_a) == 1)
            {
                while(i > 0)
                {
                    do_ra(pile_a, 0);
                    i--;
                }
                do_pb(pile_a, pile_b);
                break;
            }
            else if(run(j, min, max, *pile_a) == 1)
            {
                while(j < lst_size(*pile_a))
                {
                    do_rra(pile_a, 0);
                    j++;
                }
                do_pb(pile_a, pile_b);
                break;
            }
            i++;
            j--;
        }
        p++;
    }
}


void    algo100(t_list **pile_a, t_list **pile_b)
{
    while (lst_size(*pile_a) > 0)
    {
        while(pile_a > 1)
        ;
    }
}

// creer 5 stacks dans la pile A