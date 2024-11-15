/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pt_nbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 19:00:07 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/11/06 21:28:17 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	int_digits(int n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
		digits += 1;
	while (n != 0)
	{
		n /= 10;
		digits += 1;
	}
	return (digits);
}

static void	put_int(int n)
{
	static char	digits[] = "0123456789";

	if (n > 9)
		put_int(n / 10);
	write(1, &digits[n % 10], 1);
}

int	ft_pt_int(int n)
{
	int	len;

	if (n == -2147483648)
		return ((write(1, "-2147483648", 11)));
	len = int_digits(n);
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	put_int(n);
	return (len);
}
