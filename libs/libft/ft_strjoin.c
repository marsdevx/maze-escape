/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 20:00:45 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:09:08 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main(void)
// {
// 	char *str1 = "Hello, ";
// 	char *str2 = "World!";
// 	char *result = ft_strjoin(str1, str2);
// 	if (result == NULL)
// 	{
// 			printf("Memory allocation failed.\n");
// 			return 1;
// 	}
// 	printf("Joined string: %s\n", result);
// 	free(result);
// 	return 0;
// }