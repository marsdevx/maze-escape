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

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int		ft_printf(const char *format, ...);
void	format_func(char b, va_list *args);
int		put_char(char c, int a);
void	print_str(char *p);
void	ft_putnbr(long int n, int base_num, char *base_chars, int uns);
void	print_pointer(unsigned long ptr);

#endif