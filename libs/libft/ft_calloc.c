/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 13:19:48 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/10/02 10:54:50 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*result;

	if (num != 0 && (num * size) / num != size)
		return (NULL);
	result = malloc(num * size);
	if (result == NULL)
		return (NULL);
	ft_memset(result, 0, num * size);
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>
// int main() {
// 	int n = 5;
// 	int *arr = (int *)calloc(n, sizeof(int));
// 	for (int i = 0; i < n; i++) {
// 			printf("arr[%d] = %d\n", i, arr[i]);
// 	}
// 	free(arr);
// 	int *my_arr = (int *)ft_calloc(n, sizeof(int));
// 	for (int b = 0; b < n; b++) {
// 			printf("arr[%d] = %d\n", b, my_arr[b]);
// 	}
// 	free(my_arr);
// 	return (0);
// }
