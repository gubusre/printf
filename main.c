/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubusque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/27 16:37:41 by gubusque          #+#    #+#             */
/*   Updated: 2025/06/27 19:54:42 by gubusque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main() {
    int count_ft;
    int count_std;
    char my_char = 'A';
    char *my_string = "Hello, 42 Madrid!";
    char *null_string = NULL;
    int my_int_pos = 42;
    int my_int_neg = -123;
    unsigned int my_unsigned = 98765;
    unsigned int my_hex_val = 255;
    unsigned int my_large_hex_val = 4294967295U;
    void *my_pointer = &my_int_pos;
    void *null_pointer = NULL;

    ft_printf("--- Testing %%c ---\n");
    count_std = printf("Stdio printf: Char: %c\n", my_char);
    count_ft = ft_printf("My ft_printf: Char: %c\n", my_char);
    ft_printf("Stdio count: %d, My count: %d\n\n", count_std, count_ft);

    ft_printf("--- Testing %%s ---\n");
    count_std = printf("Stdio printf: String: %s\n", my_string);
    count_ft = ft_printf("My ft_printf: String: %s\n", my_string);
    ft_printf("Stdio count: %d, My count: %d\n\n", count_std, count_ft);

    count_std = printf("Stdio printf: NULL String: %s\n", null_string);
    count_ft = ft_printf("My ft_printf: NULL String: %s\n", null_string);
    ft_printf("Stdio count: %d, My count: %d\n\n", count_std, count_ft);

    ft_printf("--- Testing %%p ---\n");
    count_std = printf("Stdio printf: Valid Pointer: %p\n", my_pointer);
    count_ft = ft_printf("My ft_printf: Valid Pointer: %p\n", my_pointer);
    ft_printf("Stdio count: %d, My count: %d\n\n", count_std, count_ft);

    count_std = printf("Stdio printf: NULL Pointer: %p\n", null_pointer);
    count_ft = ft_printf("My ft_printf: NULL Pointer: %p\n", null_pointer);
    ft_printf("Stdio count: %d, My count: %d\n\n", count_std, count_ft);

    ft_printf("--- Testing %%d and %%i ---\n");
    count_std = printf("Stdio printf: Positive Int: %d\n", my_int_pos);
    count_ft = ft_printf("My ft_printf: Positive Int: %d\n", my_int_pos);
    ft_printf("Stdio count: %d, My count: %d\n\n", count_std, count_ft);

    count_std = printf("Stdio printf: Negative Int: %i\n", my_int_neg);
    count_ft = ft_printf("My ft_printf: Negative Int: %i\n", my_int_neg);
    ft_printf("Std count: %d, My count: %d\n\n", count_std, count_ft);
    
    count_std = printf("Stdio printf: INT_MIN: %ld\n", -2147483648);
    count_ft = ft_printf("My ft_printf: INT_MIN: %d\n", -2147483648);
    ft_printf("Std count: %d, My count: %d\n\n", count_std, count_ft);


    ft_printf("--- Testing %%u ---\n");
    count_std = printf("Stdio printf: Unsigned Int: %u\n", my_unsigned);
    count_ft = ft_printf("My ft_printf: Unsigned Int: %u\n", my_unsigned);
    ft_printf("Std count: %d, My count: %d\n\n", count_std, count_ft);
    
    count_std = printf("Stdio printf: UINT_MAX: %u\n", 4294967295U);
    count_ft = ft_printf("My ft_printf: UINT_MAX: %u\n", 4294967295U);
    ft_printf("Std count: %d, My count: %d\n\n", count_std, count_ft);


    ft_printf("--- Testing %%x and %%X ---\n");
    count_std = printf("Stdio printf: Hex Lower: %x\n", my_hex_val);
    count_ft = ft_printf("My ft_printf: Hex Lower: %x\n", my_hex_val);
    printf("Std count: %d, My count: %d\n\n", count_std, count_ft);

    count_std = printf("Stdio printf: Hex Upper: %X\n", my_hex_val);
    count_ft = ft_printf("My ft_printf: Hex Upper: %X\n", my_hex_val);
    printf("Std count: %d, My count: %d\n\n", count_std, count_ft);
    
    count_std = printf("Stdio printf: Large Hex Lower: %x\n", my_large_hex_val);
    count_ft = ft_printf("My ft_printf: Large Hex Lower: %x\n", my_large_hex_val);
    printf("Std count: %d, My count: %d\n\n", count_std, count_ft);

    count_std = printf("Stdio printf: Large Hex Upper: %X\n", my_large_hex_val);
    count_ft = ft_printf("My ft_printf: Large Hex Upper: %X\n", my_large_hex_val);
    printf("Std count: %d, My count: %d\n\n", count_std, count_ft);

    printf("--- Testing %%%% ---\n");
    count_std = printf("Stdio printf: Percent: %%\n");
    count_ft = ft_printf("My ft_printf: Percent: %%\n");
    printf("Std count: %d, My count: %d\n\n", count_std, count_ft);

    printf("--- Testing Mixed Formats ---\n");
    count_std = printf("Stdio printf: Char: %c, String: %s, Int: %d, Ptr: %p, Hex: %X\n",
                       'Z', "Mixed Test", -500, main, 12345);
    count_ft = ft_printf("My ft_printf: Char: %c, String: %s, Int: %d, Ptr: %p, Hex: %X\n",
                         'Z', "Mixed Test", -500, main, 12345);
    printf("Std count: %d, My count: %d\n\n", count_std, count_ft);

    printf("All tests completed.\n");

    return 0;
}
