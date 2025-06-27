/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubusque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:17:40 by gubusque          #+#    #+#             */
/*   Updated: 2025/06/27 21:24:44 by gubusque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_format(va_list argument, const char format)
{
	int	size;

	size = 0;
	if (format == 'c')
		size += ft_print_character(va_arg(argument, int));
	else if (format == 's')
		size += ft_print_string(va_arg(argument, char *));
	else if (format == 'p')
		size += ft_print_pointer(va_arg(argument, unsigned long long));
	else if (format == 'd' || format == 'i')
		size += ft_print_number(va_arg(argument, int));
	else if (format == 'u')
		size += ft_print_unsigned(va_arg(argument, unsigned int));
	else if (format == 'x' || format == 'X')
		size += ft_print_hexadecimal(va_arg(argument, unsigned int), format);
	else
		size += ft_print_character(format);
	return (size);
}

int	ft_print_character(int character)
{
	write(1, &character, 1);
	return (1);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		size;
	va_list	argument;

	i = 0;
	size = 0;
	va_start(argument, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			size += ft_format(argument, str[i + 1]);
			i++;
		}
		else
			size += ft_print_character(str[i]);
		i++;
	}
	va_end(argument);
	return (size);
}
