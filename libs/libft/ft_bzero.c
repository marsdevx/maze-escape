/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:09:06 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:07:47 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

// #include <strings.h>
// #include <stdio.h>
// int main() {
// 	char buffer[10];
// 	char my_buffer[10];
// 	bzero(buffer, sizeof(buffer));
// 	for (int i = 0; i < 10; i++) {
// 			printf("%d ", buffer[i]);
// 	}
// 	printf("\n");
// 	ft_bzero(my_buffer, sizeof(my_buffer));
// 	for (int i = 0; i < 10; i++) {
// 			printf("%d ", my_buffer[i]);
// 	}
// }
