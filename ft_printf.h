/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:24:39 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/11/03 18:08:07 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> // va_start, va_arg, va_copy, va_end
# include <limits.h> // SIZE_MAX
# include <unistd.h> // para write
# include <stddef.h> // para size_t

int ft_printf(const char *, ...);

/* utils */
int putchar_count(char c);
int putstr_count(char *str);

/*numbers*/
int putnbr_count(int nbr);

#endif



