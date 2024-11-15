/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 11:24:41 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/11/07 14:54:19 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_basic_formats(const char format, va_list args)
{
	if (format == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (format == 's')
		return (ft_pt_str(va_arg(args, char *)));
	else if (format == 'd' || format == 'i')
		return (ft_pt_int(va_arg(args, int)));
	else if (format == 'u')
		return (ft_pt_unsigned(va_arg(args, unsigned int)));
	else if (format == '%')
		return (ft_putchar('%'));
	return (0);
}

static int	handle_hex_pointer(const char format, va_list args)
{
	if (format == 'x')
		return (ft_pt_hex(va_arg(args, unsigned int), 0));
	else if (format == 'X')
		return (ft_pt_hex(va_arg(args, unsigned int), 1));
	else if (format == 'p')
		return (ft_pt_ptr(va_arg(args, void *)));
	return (0);
}

static int	is_formated_chr(const char format, va_list args)
{
	int	print_len;

	print_len = handle_basic_formats(format, args);
	print_len += handle_hex_pointer(format, args);
	return (print_len);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		print_len;

	if (!str)
		return (0);
	i = 0;
	print_len = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
			print_len += is_formated_chr(str[++i], args);
		else
			print_len += write(1, &str[i], 1);
		i++;
	}
	va_end(args);
	return (print_len);
}
