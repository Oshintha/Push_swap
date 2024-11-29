/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 16:11:35 by aoshinth          #+#    #+#             */
/*   Updated: 2024/11/29 18:55:45 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	split_free(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str[i]);
	free(str);
}

int	initialize_stack(int ac, char **av, t_stack_node **a, char ***numbers)
{
	if (ac == 1)
		return (1);
	if (ac == 2 && !av[1][0])
		error();
	if (ac == 2)
		*numbers = split(av[1], ' ');
	if (*numbers != NULL)
		init_stack_a(a, *numbers + 1);
	else
		init_stack_a(a, av + 1);
	return (0);
}

void	process_stack(t_stack_node **a, t_stack_node **b, char **numbers)
{
	if (!stack_sorted(*a))
	{
		if (stack_len(*a) == 2)
			sa(a, false);
		else if (stack_len(*a) == 3)
			sort_three(a);
		else
			sort_stacks(a, b);
	}
	free_stack(a);
	if (numbers != NULL)
		split_free(numbers);
}

int	main(int ac, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;
	char			**numbers;

	a = NULL;
	b = NULL;
	numbers = NULL;
	if (initialize_stack(ac, av, &a, &numbers))
		return (1);
	process_stack(&a, &b, numbers);
	return (0);
}
