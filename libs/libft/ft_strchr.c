/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 16:16:38 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:08:56 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr(s, c, ft_strlen(s) + 1));
}

// #include <string.h>
// #include <stdio.h>
// int main() {
// 	const char *str = "Hello, world!";
// 	char ch = 'o';

// 	char *result = strchr(str, 'o');
// 	char *my_result = ft_strchr(str, 'o');

// 	printf("Character '%c' position: %ld\n", ch, result - str);
// 	printf("Character '%c' position: %ld\n", ch, my_result - str);

// 	return (0);
// }