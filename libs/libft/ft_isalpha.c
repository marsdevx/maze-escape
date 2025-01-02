/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:22:56 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:08:02 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
	{
		return (1);
	}
	return (0);
}

// #include <ctype.h>
// #include <stdio.h>
// int main() {
// 	printf("%d\n", isalpha('a'));
// 	printf("%d\n", isalpha('z'));
// 	printf("%d\n", isalpha('A'));
// 	printf("%d\n", isalpha('Z'));

// 	printf("%d\n", ft_isalpha('a'));
// 	printf("%d\n", ft_isalpha('z'));
// 	printf("%d\n", ft_isalpha('A'));
// 	printf("%d\n", ft_isalpha('Z'));
// }
