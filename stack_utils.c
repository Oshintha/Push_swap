/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 15:19:28 by aoshinth          #+#    #+#             */
/*   Updated: 2024/08/22 15:19:28 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node    *find_last_node(t_stack_node *head)
{
    if (head == NULL)
        return (NULL);
    while (head->next)
        head = head->next;
    return (head);
}

void    append_node(t_stack_node **stack, int nbr)
{
    t_stack_node    *node;
    t_stack_node    *last_node;

    if (stack == NULL)
        return;
    node = malloc(sizeof(t_stack_node));
    if (node == NULL)
        return;
    node->next = NULL;
    node->value = nbr;
    if (*stack == NULL)
    {
        *stack = node;
        node->prev = NULL;
    }
    else
    {
        last_node = find_last_node(*stack);
        last_node->next = node;
        node->prev = last_node;
    }
}

t_stack_node    *find_smallest(t_stack_node *stack)
{
    long            smallest;
    t_stack_node    *smallest_node;

    if (stack == NULL)
        return (NULL);
    smallest = LONG_MAX;
    while (stack)
    {
        if (stack->value < smallest)
        {
            smallest = stack->value;
            smallest_node = stack;
        }
        stack = stack->next;
    }
    return (smallest_node);
}

t_stack_node	*return_cheapest(t_stack_node *stack)
{
	if (NULL == stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheapest)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

int	stack_len(t_stack_node *stack)
{
	int	count;

	if (NULL == stack)
		return (0);
	count = 0;
	while (stack)
	{
		++count;
		stack = stack->next;
	}
	return (count);
}