/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 17:13:30 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/09/26 03:08:33 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)b)[i] = (unsigned char)c;
		i++;
	}
	return (b);
}

// #include <stddef.h>
// #include <stdio.h>
// #include <string.h>
// int main() {
// 	char str[10 + 1];
// 	char my_str[10 + 1];

// 	memset(str, 'A', 10);
// 	str[10] = '\0';
// 	printf("character array: %s\n", str);

// 	ft_memset(my_str, 'A', 10);
// 	my_str[10] = '\0';
// 	printf("character array: %s\n", my_str);

// 	int num, my_num;
// 	memset(&num, 0, sizeof(num));
// 	printf("integer: %d\n", num);

// 	ft_memset(&my_num, 0, sizeof(my_num));
// 	printf("integer: %d\n", my_num);

// 	struct MyStruct {
// 			int a;
// 			double b;
// 	};

// 	struct MyStruct s, my_s;

// 	memset(&s, 0, sizeof(s));
// 	printf("struct: a = %d, b = %f\n", s.a, s.b);

// 	ft_memset(&my_s, 0, sizeof(my_s));
// 	printf("struct: a = %d, b = %f\n", my_s.a, my_s.b);

// 	int arr[5], my_arr[5];

// 	memset(arr, -1, sizeof(arr));
// 	printf("integer array: ");
// 	for (int i = 0; i < 5; i++) {
// 			printf("%d ", arr[i]);
// 	}
// 	printf("\n");

// 	ft_memset(my_arr, -1, sizeof(my_arr));
// 	printf("integer array: ");
// 	for (int i = 0; i < 5; i++) {
// 			printf("%d ", my_arr[i]);
// 	}
// 	printf("\n");

// 	return (0);
// }