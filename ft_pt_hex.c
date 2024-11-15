/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pt_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 20:20:05 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/11/06 21:57:12 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned long	ft_hex_len(unsigned long nbr)
{
	unsigned long	len;

	len = 0;
	while (nbr)
	{
		nbr = nbr / 16;
		len++;
	}
	return (len);
}

void	pt_hexa(unsigned long nbr, int is_upper_case)
{
	static char	upper_digits[] = "0123456789ABCDEF";
	static char	lower_digits[] = "0123456789abcdef";

	if (nbr >= 16)
		pt_hexa((nbr / 16), is_upper_case);
	if (is_upper_case)
		write(1, &upper_digits[nbr % 16], 1);
	else
		write(1, &lower_digits[nbr % 16], 1);
}

int	ft_pt_hex(unsigned long nbr, const char case_flag)
{
	if (nbr == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
		pt_hexa(nbr, case_flag);
	return (ft_hex_len(nbr));
}
