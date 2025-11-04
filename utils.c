/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:58:22 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/11/03 18:00:28 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
        len++;
    return (len);
}

int   putchar_count(char c)
{
    return (write(1, &c, 1));
}

int putstr_count(char *str)
{
    if (!str)
        str = "(null)";
    return (write(1, str, ft_strlen(str)));
}

// int putstr_count(char *str)
// {
//     if (!str)
//         str = "(null)";
//     if (write(1, str, ft_strlen(str)) < 0)
//         return (-1);
//     return (ft_strlen(str));
// }

