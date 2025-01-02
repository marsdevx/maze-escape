/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:17:22 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:09:28 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	i_2;

	i = 0;
	i_2 = 0;
	if (needle == NULL || needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < n)
	{
		if (haystack[i] == needle[i_2])
		{
			while (haystack[i + i_2] == needle[i_2] && i + i_2 < n)
			{
				if (needle[i_2 + 1] == '\0')
					return ((char *)haystack + i);
				i_2++;
			}
			i_2 = 0;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int main(void)
// {
// 	// Test cases
// 	const char *haystack = "Hello, World!";
// 	const char *needle1 = "World";
// 	const char *needle2 = "lo";
// 	const char *needle3 = "42";
// 	const char *needle4 = "";

// 	char *result = ft_strnstr(haystack, needle1, 12);
// 	if (result != NULL)
// 			printf("Found '%s' in '%s': %s\n", needle1, haystack, result);
// 	else
// 			printf("'%s' not found in '%s'\n", needle1, haystack);

// 	result = ft_strnstr(haystack, needle3, 12);
// 	if (result != NULL)
// 			printf("Found '%s' in '%s': %s\n", needle3, haystack, result);
// 	else
// 			printf("'%s' not found in '%s'\n", needle3, haystack);

// 	result = ft_strnstr(haystack, needle4, 12);
// 	if (result != NULL)
// 			printf("Empty needle returns the whole haystack: %s\n", result);
// 	else
// 			printf("Empty needle case failed\n");

// 	return 0;
// }