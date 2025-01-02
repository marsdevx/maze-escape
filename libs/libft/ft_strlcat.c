/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:54:17 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:09:11 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	len_dst;
	size_t	len_src;
	size_t	i;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	if (dstsize <= len_dst)
	{
		return (dstsize + len_src);
	}
	while (src[i] && (len_dst + i) < (dstsize - 1))
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
// 	char dest[20] = "Hello, ";
// 	const char *src = "world!";
// 	size_t dest_size = sizeof(dest);
// 	size_t result;

// 	result = strlcat(dest, src, dest_size);

// 	printf("Destination buffer after strlcat: '%s'\n", dest);
// 	printf("Total length of the string it tried to create: %zu\n", result);

// 	char my_dest[20] = "Hello, ";
// 	const char *my_src = "world!";
// 	size_t my_dest_size = sizeof(dest);
// 	size_t my_result;

// 	my_result = ft_strlcat(my_dest, my_src, my_dest_size);

// 	printf("Destination buffer after strlcat: '%s'\n", my_dest);
// 	printf("Total length of the string it tried to create: %zu\n", my_result);
// }