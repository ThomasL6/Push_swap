#include "push_swap.h"

int position(t_list *pile)
{
    int p;
    int min;
    int i;
    t_list *tmp;

    tmp = pile;
    p = 0;
    i = 0;
    min = tmp->values;
    while(tmp)
    {
        if(tmp->values < min)
        {
            min = tmp->values;
            p = i;
        }
        tmp = tmp->nxt;
        i++;
    }
    return(p);
}
void    free_pile(t_list *pile)
{
    t_list *tmp;

    tmp = pile;
    while(pile)
    {
        tmp = pile->nxt;
        free(pile);
        pile = tmp;
    }
}