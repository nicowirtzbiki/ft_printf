/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numbers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:58:16 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/11/04 17:41:13 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// %d and %i
int	putnbr_count(int nbr)
{
	int			count;
	long int	n;
	char		c;

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

// %u
int	putunbr_count(unsigned int nbr)
{
	int					count;
	unsigned long int	n;
	char				c;

	n = nbr;
	count = 0;
	if (n >= 10)
	{
		count += putunbr_count(n / 10);
	}
	c = (n % 10) + '0';
	count += write (1, &c, 1);
	return (count);
}

// aux %p, %x and %X
int	puthex_count(unsigned long n, int uppercase)
{
	char	*hex;
	int		count;
	char	c;

	hex = "0123456789abcdef";
	count = 0;
	if (n >= 16)
		count += puthex_count(n / 16, uppercase);
	c = hex[n % 16];
	if (uppercase)
		c = ft_toupper(c);
	count += write (1, &c, 1);
	return (count);
}

// %p
int	putptr(void *ptr)
{
	unsigned long	address;
	int				count;

	if (!ptr)
		return (write(1, "(nil)", 5));
	count = 0;
	address = (unsigned long)ptr;
	count += write(1, "0x", 2);
	count += puthex_count(address, 0);
	return (count);
}
