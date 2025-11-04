/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nico <nico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:58:16 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/11/03 18:10:15 by nico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %d e %i
int putnbr_count(int nbr)
{
    int count;
    long int n;
    char c;

    n = nbr;
    count = 0;

    if (n < 0)
    {
        count += write (1, "-", 1);
        n = -n;
    }
    if (n >= 10)
    {
        count += putnbr_count(n / 10);
    }
    c = (n % 10) + '0';
    count += write (1, &c, 1);
    return (count);
}