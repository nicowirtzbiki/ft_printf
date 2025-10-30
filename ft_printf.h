/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 16:24:39 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/10/30 17:59:19 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINT_H

# include <stdarg.h> // va_start, va_arg, va_copy, va_end
# include <limits.h> // SIZE_MAX
# include <unistd.h> // para write
# include <stddef.h> // para size_t

int ft_printf(const char *, ...);

/* utils */


#endif



