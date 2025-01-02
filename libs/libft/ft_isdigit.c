/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:22:56 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:08:08 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main() {
// 	printf("%d\n", isdigit('0'));
// 	printf("%d\n", isdigit('9'));
// 	printf("%d\n", isdigit('A'));
// 	printf("%d\n", isdigit('a'));

// 	printf("%d\n", ft_isdigit('0'));
// 	printf("%d\n", ft_isdigit('9'));
// 	printf("%d\n", ft_isdigit('A'));
// 	printf("%d\n", ft_isdigit('a'));
// }
