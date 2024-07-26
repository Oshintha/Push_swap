/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 10:22:35 by aoshinth          #+#    #+#             */
/*   Updated: 2024/07/26 16:10:42 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SAWP_H

# include <stdbool.h>
# include <limits.h>
# include "libft/libft.h"
# include "libft/ft_printf.h"

typedef struct s_stack_node
{
    int                     nbr;
    int                     index;
    int                     push_cost;
    bool                    above_median;
    bool                    cheapest;
    struct  s_stack_node    *target_node;
    struct  s_stack_node    *next;
    struct  s_stack_node    *prev;    
}    t_stck_node;

#endif