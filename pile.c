/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pile.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 14:43:20 by thlefebv          #+#    #+#             */
/*   Updated: 2023/06/29 14:43:22 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void stack(t_list** pile, int newvalue)
{
    t_list *newpile;
    newpile = malloc(sizeof *newpile);
    newpile->values = newvalue;
    newpile->nxt = NULL;
    if(pile == NULL)
            return ;
    else
    {
        t_list  *tempo;
        tempo = (*pile);
        while(tempo->nxt != NULL)
            tempo = tempo->nxt;
        tempo->nxt = newpile;
    }
    pile = (*pile)->nxt;
}

void   afficher(t_list *pile)
{
    t_list  *actuel;
    actuel = pile;
    while(actuel != NULL)
    {
        printf("%ld\n", actuel->values);
        actuel = actuel->nxt;
    }
    write(1, "\n", 1);
}
