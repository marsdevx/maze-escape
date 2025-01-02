/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 14:33:15 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:09:18 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	const char *str1 = "Hello, World!";
// 	const char *str2 = "";
// 	const char *str3 = "42 Network";

// 	printf("Length of '%s' is: %zu\n", str1, ft_strlen(str1));
// 	printf("Length of an empty string is: %zu\n", ft_strlen(str2));
// 	printf("Length of '%s' is: %zu\n", str3, ft_strlen(str3));

// 	return 0;
// }