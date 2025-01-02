/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 19:30:34 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/10/02 10:38:41 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*u_dest;
	const unsigned char	*u_src;

	if (n == 0)
		return (dest);
	if (!dest || !src)
		return (NULL);
	u_dest = (unsigned char *)dest;
	u_src = (const unsigned char *)src;
	while (n--)
		*u_dest++ = *u_src++;
	return (dest);
}

// #include <stdio.h>
// #include <string.h>
// int main() {
// 	char src[] = "Hello, World!";
// 	char dest[20];
// 	memcpy(dest, src, 13);
// 	printf("Source: %s\n", src);
// 	printf("Destination: %s\n", dest);
// 	char my_src[] = "Hello, World!";
// 	char my_dest[20];
// 	ft_memcpy(my_dest, my_src, 13);
// 	printf("Source: %s\n", my_src);
// 	printf("Destination: %s\n", my_dest);
// }