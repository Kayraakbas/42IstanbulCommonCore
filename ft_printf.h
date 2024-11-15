/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayraakbas <kayraakbas@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 22:04:59 by kayraakbas        #+#    #+#             */
/*   Updated: 2024/11/06 22:06:25 by kayraakbas       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int				ft_printf(const char *str, ...);
int				ft_putchar(char c);
int				ft_pt_hex(unsigned long nbr, const char case_flag);
unsigned long	ft_hex_len(unsigned long nbr);
void			pt_hexa(unsigned long nbr, int is_upper_case);
int				ft_pt_ptr(void *ptr);
int				ft_pt_int(int n);
int				ft_pt_str(char *str);
int				ft_pt_unsigned(unsigned int nbr);

#endif
