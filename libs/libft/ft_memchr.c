/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:36:24 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:08:20 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return (((unsigned char *)s) + i);
		}
		i++;
	}
	return (NULL);
}

// #include <string.h>
// #include <stdio.h>
// int main() {
// 	char *str = "Hello";
// 	char *result_std = memchr(str, 'e', 5);
// 	if (result_std != NULL) {
// 			printf(" character: %c  position: %ld\n", *result_std, result_std
// 				- str);
// 	} else {
// 			printf("Standard memchr did not find the character.\n");
// 	}
// 	char *result_custom = ft_memchr(str, 'e', 5);
// 	if (result_custom != NULL) {
// 			printf(" character: %c  position: %ld\n", *result_custom,
// 				result_custom - str);
// 	} else {
// 			printf("Custom ft_memchr did not find the character.\n");
// 	}
// 	return (0);
// }
