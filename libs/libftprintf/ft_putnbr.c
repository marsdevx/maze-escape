/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:09:03 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/12/15 20:09:05 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(long int n, int base_num, char *base_chars, int uns)
{
	if (uns == 0)
		n = (int)n;
	if (uns == 1)
		n = (unsigned long int)(unsigned int)n;
	if (n < 0)
	{
		put_char('-', 1);
		n = -n;
	}
	if (n >= base_num)
		ft_putnbr(n / base_num, base_num, base_chars, uns);
	put_char(base_chars[n % base_num], 1);
}

void	print_pointer(unsigned long ptr)
{
	const char	*hex_digits = "0123456789abcdef";
	char		buffer[16];
	int			i;

	i = 0;
	if (ptr == 0)
	{
		print_str("(nil)");
		return ;
	}
	print_str("0x");
	while (ptr)
	{
		buffer[i++] = hex_digits[ptr % 16];
		ptr /= 16;
	}
	while (--i >= 0)
		put_char(buffer[i], 1);
}
