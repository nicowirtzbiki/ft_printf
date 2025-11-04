/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:37:31 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/11/03 18:33:55 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int handle_conversion (char c, va_list *args)
{
    if (c == 'c') //char
        return (putchar_count((char)va_arg(*args, int)));
    if (c == 's') //char *
        return (putstr_count(va_arg(*args, char *)));
    if (c == 'p') //void *
        return (0); // provisorio
    if (c == 'd' || c == 'i') //int
        return (putnbr_count(va_arg(*args, int)));
    if (c == 'u') // unsigned int
        return (0); // provisorio
    if (c == 'x') // unsigned int
        return (0); // provisorio
    if (c == 'X') // unsigned int
        return (0); // provisorio
    if (c == '%') //char 
        return (putchar_count('%'));
    return (0);
}

int ft_printf(const char *format, ...)
{
    va_list args;
    int total = 0; //contador para bytes printados
    int tmp; //variavel temporaria para checar erros

    if (!format)
        return (-1);

    va_start(args, format);

    while (*format)
    {
        if (*format == '%')
        {
            format++;
            if (!*format)
                break;
            tmp = handle_conversion(*format, &args);
            if (tmp < 0)
            {
                va_end(args);
                return (-1);
            }
            total += tmp;
        }
        else 
            total += putchar_count(*format);
        format++;
    }
    return (total);
}