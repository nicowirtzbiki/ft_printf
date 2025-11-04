/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:37:31 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/11/04 14:48:31 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	handle_conversion(char c, va_list *args)
{
	if (c == 'c')
		return (putchar_count((char)va_arg(*args, int)));
	if (c == 's')
		return (putstr_count(va_arg(*args, char *)));
	if (c == 'p')
		return (putptr(va_arg(*args, void *)));
	if (c == 'd' || c == 'i')
		return (putnbr_count(va_arg(*args, int)));
	if (c == 'u')
		return (putunbr_count(va_arg(*args, unsigned int)));
	if (c == 'x')
		return (puthex_count(va_arg(*args, unsigned int), 0));
	if (c == 'X')
		return (puthex_count(va_arg(*args, unsigned int), 1));
	if (c == '%')
		return (putchar_count('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list		args;
	int			total;
	int			tmp;

	total = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			tmp = handle_conversion(*format, &args);
			if (tmp < 0)
				return (va_end(args), -1);
			total += tmp;
		}
		else
			total += putchar_count(*format);
		format++;
	}
	va_end(args);
	return (total);
}
