/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 12:00:51 by aoshinth          #+#    #+#             */
/*   Updated: 2024/08/22 12:00:51 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static long ft_atol(const char *str)
{
    long    num;
    int     isneg;
    int     i;

    num = 0;
    isneg = 1;
    i = 0;
    while (str[i] && (str[i] == 32 || (str[i] >= 9 && str[i] <= 13)))
        i++;
    if (str[i] == '+')
        i++;
    else if (str[i] == '-')
    {
        isneg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    return (num * isneg);
}

void    stack_int(t_stack_node **a, char **av, bool flag_ac_2)
{
    long    nbr;
    int     i;

    i = 0;
    while (av[i])
    {
        if (error_syntax(av[i]))
            error_free(a, av, flag_ac_2);
        nbr = ft_atol(av[i]);
        if (nbr > INT_MAX || nbr < INT_MIN)
            error_free(a, av, flag_ac_2);
        if (error_repetition(*a, (int)nbr))
            error_free(a, av, flag_ac_2);
        append_node(a, (int)nbr);
        ++i;
    }
    if (flag_ac_2)
        free_matrix(av);
}