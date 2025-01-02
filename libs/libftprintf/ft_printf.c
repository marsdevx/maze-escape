/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marksylaiev <marksylaiev@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 20:09:11 by marksylaiev       #+#    #+#             */
/*   Updated: 2024/12/15 20:10:29 by marksylaiev      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	put_char(char c, int a)
{
	static int	char_count = 0;
	int			count;

	if (a == 1)
	{
		if (c == '\0')
			write(1, "\0", 1);
		else
			write(1, &c, 1);
		char_count++;
	}
	else if (a == 0)
	{
		count = char_count;
		char_count = 0;
		return (count);
	}
	return (char_count);
}

void	print_str(char *p)
{
	int	i;

	if (p == NULL)
	{
		print_str("(null)");
		return ;
	}
	i = 0;
	while (p[i])
	{
		put_char(p[i], 1);
		i++;
	}
}

void	format_func(char b, va_list *args)
{
	if (b == 'c')
		put_char((char)va_arg(*args, int), 1);
	else if (b == 's')
		print_str(va_arg(*args, char *));
	else if (b == 'd' || b == 'i')
		ft_putnbr(va_arg(*args, long int), 10, "0123456789", 0);
	else if (b == 'u')
		ft_putnbr(va_arg(*args, long int), 10, "0123456789", 1);
	else if (b == 'x')
		ft_putnbr(va_arg(*args, long int), 16, "0123456789abcdef", 1);
	else if (b == 'X')
		ft_putnbr(va_arg(*args, long int), 16, "0123456789ABCDEF", 1);
	else if (b == 'p')
		print_pointer(va_arg(*args, unsigned long));
	else if (b == '%')
		put_char('%', 1);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	va_list	args;

	i = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			format_func(format[i], &args);
			i++;
			continue ;
		}
		put_char(format[i], 1);
		i++;
	}
	va_end(args);
	return (put_char(0, 0));
}
