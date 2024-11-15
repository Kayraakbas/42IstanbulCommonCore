/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pt_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 18:54:03 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/11/07 14:12:13 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pt_ptr(void *ptr)
{
	int	len;

	if (ptr == NULL)
		return (write(1, "(nil)", 5));
	len = 0;
	len += ft_pt_str("0x");
	len += ft_pt_hex((unsigned long )ptr, 0);
	return (len);
}
