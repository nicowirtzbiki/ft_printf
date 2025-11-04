/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwirtzbi <nwirtzbi@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 12:28:09 by nwirtzbi          #+#    #+#             */
/*   Updated: 2025/11/04 14:40:36 by nwirtzbi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main(void)
{
int a;
    void *ptr = &a; // ponteiro de teste

    printf("### My ft_printf:\n");
    a = ft_printf(
        "char: %c\n"
        "string: %s\n"
        "pointer: %p\n"
        "decimal (%%d): %d\n"
        "integer (%%i): %i\n"
        "unsigned: %u\n"
        "hex lowercase: %x\n"
        "hex uppercase: %X\n"
        "percent sign: %%\n",
        'A',               // %c
        "Nicole",          // %s
        ptr,               // %p
        -42,               // %d
        42,                // %i
        42,                // %u
        255,               // %x
        255                // %X
    );
    printf("ft_printf returned: %d\n\n", a);

    printf("### Compare with printf:\n");
    a = printf(
        "char: %c\n"
        "string: %s\n"
        "pointer: %p\n"
        "decimal (%%d): %d\n"
        "integer (%%i): %i\n"
        "unsigned: %u\n"
        "hex lowercase: %x\n"
        "hex uppercase: %X\n"
        "percent sign: %%\n",
        'A',
        "Nicole",
        ptr,
        -42,
        42,
        42,
        255,
        255
    );
    printf("printf returned: %d\n", a);

    return 0;
}