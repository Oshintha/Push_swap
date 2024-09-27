/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:11:35 by aoshinth          #+#    #+#             */
/*   Updated: 2024/09/27 11:43:33 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack_node *a;
    t_stack_node *b;

    a = NULL;
    b = NULL;
    if (ac == 1 || (ac == 2 && !av[1][0]))
        return (1);
    else if (ac == 2)
        av = split(av[1], ' ');
    int_stack_a(&a, av + 1);
    if (!stack_sorted(a))
    {
        if (stack_len(a) == 2)
            sa(&a, false);
        else if (stack_len(a) == 3)
            sort_three(&a);
        else 
            sort_stacks(&a,&b);
    }
    free_stack(&a);
    return (0);
}