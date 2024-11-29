/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aoshinth <aoshinth@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:25:13 by aoshinth          #+#    #+#             */
/*   Updated: 2024/11/29 16:57:23 by aoshinth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	count_words(char *str, char separator)
{
	int		count;
	bool	inside_word;

	count = 0;
	while (*str)
	{
		inside_word = false;
		while (*str == separator && *str)
			++str;
		while (*str != separator && *str)
		{
			if (!inside_word)
			{
				++count;
				inside_word = true;
			}
			++str;
		}
	}
	return (count);
}

static char	*get_next_word(char *str, char separator)
{
	static int	cursor = 0;
	char		*next_str;
	int			len;
	int			i;

	len = 0;
	i = 0;
	while (str[cursor] == separator)
		++cursor;
	while ((str[cursor + len] != separator) && str[cursor + len])
		++len;
	next_str = malloc((size_t)len * sizeof(char) + 1);
	if (NULL == next_str)
		return (NULL);
	while ((str[cursor] != separator) && str[cursor])
		next_str[i++] = str[cursor++];
	next_str[i] = '\0';
	return (next_str);
}

char	**split(char *str, char separator)
{
	int		words_number;
	char	**result_strings;
	int		i;

	i = 0;
	words_number = count_words(str, separator);
	if (!words_number)
		return (0);
	result_strings = malloc(sizeof(char *) * (size_t)(words_number + 2));
	if (NULL == result_strings)
		return (NULL);
	while (words_number-- >= 0)
	{
		if (0 == i)
		{
			result_strings[i] = malloc(sizeof(char));
			if (!result_strings[i])
				return (NULL);
			result_strings[i++][0] = '\0';
			continue ;
		}
		result_strings[i++] = get_next_word(str, separator);
	}
	result_strings[i] = NULL;
	return (result_strings);
}
