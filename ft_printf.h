/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:24:39 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/11/04 16:22:30 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // va_start, va_arg, va_copy, va_end
# include <limits.h> // SIZE_MAX
# include <unistd.h> // para write
# include <stddef.h> // para size_t

int	ft_printf(const char *format, ...);

/* utils */
int	putchar_count(char c);
int	putstr_count(char *str);
int	ft_toupper(int c);
/*numbers*/
int	putnbr_count(int nbr);
int	putunbr_count(unsigned int nbr);
int	putptr(void *ptr);
int	puthex_count(unsigned long n, int uppercase);

#endif
