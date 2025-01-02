/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:42:49 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/10/02 10:33:46 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	last;
	char	*result;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	last = ft_strlen(s1);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while (first < last && ft_strchr(set, s1[last - 1]))
		last--;
	if (last < first)
		return (NULL);
	result = malloc(sizeof(char) * (last - first + 1));
	if (!result)
		return (NULL);
	ft_memcpy(result, s1 + first, last - first);
	result[last - first] = '\0';
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
// 	char s1[] = "   Hello, World!   ";
// 	char set[] = " ";
// 	char *trimmed_str = ft_strtrim(s1, set);

// 	if (trimmed_str) {
// 		printf("Original string: '%s'\n", s1);
// 		printf("Trimmed string: '%s'\n", trimmed_str);
// 		free(trimmed_str);
// 	} else {
// 		printf("Failed to trim the string.\n");
// 	}

// 	return (0);
// }