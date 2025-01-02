/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 17:04:29 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/10/02 10:42:29 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*last;
	unsigned char	uc;

	if (!s)
		return (NULL);
	last = NULL;
	i = 0;
	uc = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == (char)uc)
			last = (char *)&s[i];
		i++;
	}
	if (uc == '\0')
		return ((char *)&s[i]);
	return (last);
}

// #include <string.h>
// #include <stdio.h>
// int main() {
// 	const char *str = "Hello, world!";
// 	char ch = 'o';

// 	char *result = strrchr(str, 'o');
// 	char *my_result = ft_strrchr(str, 'o');

// 	printf("Character '%c' position: %ld\n", ch, result - str);
// 	printf("Character '%c' position: %ld\n", ch, my_result - str);

// 	return (0);
// }