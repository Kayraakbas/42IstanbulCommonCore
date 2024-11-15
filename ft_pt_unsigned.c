/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pt_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:15:05 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/11/06 22:04:09 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	u_digits(unsigned int n)
{
	size_t	digits;

	digits = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		digits += 1;
	}
	return (digits);
}

static void	prt_unsigned(unsigned int nbr)
{
	static char	digits[] = "0123456789";

	if (nbr > 9)
		prt_unsigned(nbr / 10);
	ft_putchar(digits[nbr % 10]);
}

int	ft_pt_unsigned(unsigned int nbr)
{
	prt_unsigned(nbr);
	return (u_digits(nbr));
}
