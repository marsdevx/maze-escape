/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 18:52:26 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 18:52:32 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_substrings(const char *s, char c)
{
	size_t	count;
	int		in_substring;

	count = 0;
	in_substring = 0;
	while (*s)
	{
		if (*s == c)
			in_substring = 0;
		else if (in_substring == 0)
		{
			in_substring = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static char	**allocate_result(size_t count_c)
{
	char	**result;

	result = malloc(sizeof(char *) * (count_c + 1));
	if (result)
		result[count_c] = NULL;
	return (result);
}

static int	allocate_substrings(const char *s, char c, size_t elements,
		char **result)
{
	size_t	count;
	size_t	index;

	index = 0;
	while (elements--)
	{
		while (*s == c)
			s++;
		count = 0;
		while (*s != c && *s != '\0')
		{
			count++;
			s++;
		}
		if (count > 0)
		{
			result[index] = malloc(sizeof(char) * (count + 1));
			if (!result[index])
				return (0);
			index++;
		}
	}
	return (1);
}

static void	add_substrings(const char *s, char c, char **result)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		j = 0;
		while (*s != c && *s != '\0')
		{
			result[i][j++] = *s++;
		}
		if (j > 0)
			result[i++][j] = '\0';
	}
}

char	**ft_split(char const *s, char c)
{
	size_t	count_c;
	char	**result;

	if (!s)
		return (NULL);
	count_c = count_substrings(s, c);
	result = allocate_result(count_c);
	if (!result || !allocate_substrings(s, c, count_c, result))
	{
		free(result);
		return (NULL);
	}
	add_substrings(s, c, result);
	return (result);
}
