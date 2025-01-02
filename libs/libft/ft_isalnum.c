/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:22:56 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:07:54 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A') || (c <= '9'
			&& c >= '0'))
	{
		return (1);
	}
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main() {
// 	printf("%d\n", isalnum('0'));
// 	printf("%d\n", isalnum('9'));
// 	printf("%d\n", isalnum('A'));
// 	printf("%d\n", isalnum('~'));

// 	printf("%d\n", ft_isalnum('0'));
// 	printf("%d\n", ft_isalnum('9'));
// 	printf("%d\n", ft_isalnum('A'));
// 	printf("%d\n", ft_isalnum('~'));
// }
