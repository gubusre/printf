/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gubusque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/25 16:25:58 by gubusque          #+#    #+#             */
/*   Updated: 2025/06/25 17:13:51 by gubusque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_search_hexadecimal(unsigned int num, const char word);
void	ft_search_pointer(unsigned long long ptr);
int		ft_print_character(int character);
int		ft_printf(const char *str, ...);
int		ft_print_string(char *str);
int		ft_print_number(int n);
int		ft_print_unsigned(unsigned int n);
int		ft_print_hexadecimal(unsigned int num, const char word);
int		ft_print_pointer(unsigned long long ptr);
int		ft_length_hexadecimal(unsigned int num);
int		ft_length_pointer(unsigned long long ptr);

#endif
