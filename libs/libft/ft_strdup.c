/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:02:22 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/10/02 10:36:55 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = ft_strlen(s);
	str = (char *)malloc(sizeof(*str) * (j + 1));
	if (str == NULL)
		return (NULL);
	while (i < j)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *original = "Hello, 42!";
// 	char *duplicate;

// 	printf("Original string: %s\n", original);
// 	duplicate = ft_strdup(original);
// 	if (duplicate == NULL)
// 	{
// 		printf("Memory allocation failed\n");
// 		return 1;
// 	}

// 	printf("Duplicated string: %s\n", duplicate);

// 	free(duplicate);

// 	return 0;
// }