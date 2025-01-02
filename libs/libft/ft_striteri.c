/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 19:16:11 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:09:03 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, s + i);
		i++;
	}
}

// #include <stdio.h>
// void my_function(unsigned int i, char *c)
// {
// 	if (*c >= 'a' && *c <= 'z')
// 		*c = *c - 32;
// 	printf("Index: %u, Char: %c\n", i, *c);
// }
// int main(void)
// {
// 	char str[] = "hello world!";
// 	printf("Original string: %s\n", str);
// 	ft_striteri(str, my_function);
// 	printf("Modified string: %s\n", str);
// 	return 0;
// }