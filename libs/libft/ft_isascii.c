/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:22:56 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:08:05 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c <= 127 && c >= 0)
	{
		return (1);
	}
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main() {
// 	printf("%d\n", isascii('0'));
// 	printf("%d\n", isascii(-1));
// 	printf("%d\n", isascii(0177));
// 	printf("%d\n", isascii(190));

// 	printf("%d\n", ft_isascii('0'));
// 	printf("%d\n", ft_isascii(-1));
// 	printf("%d\n", ft_isascii(0177));
// 	printf("%d\n", ft_isascii(190));
// }
