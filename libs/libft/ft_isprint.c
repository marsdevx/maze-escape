/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:22:56 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:08:11 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c <= 126 && c >= 32)
	{
		return (1);
	}
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main() {
// 	printf("%d\n", isprint(31));
// 	printf("%d\n", isprint(126));
// 	printf("%d\n", isprint('A'));
// 	printf("%d\n", isprint('~'));

// 	printf("%d\n", ft_isprint(31));
// 	printf("%d\n", ft_isprint(126));
// 	printf("%d\n", ft_isprint('A'));
// 	printf("%d\n", ft_isprint('~'));
// }
