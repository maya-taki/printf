/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 19:33:57 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/08/27 17:01:57 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_printuns(unsigned int base, char *basestr, unsigned int n);
int	ft_printptr(unsigned long ptr);
int	ft_printhex(unsigned int n, int flag);
int	ft_printf(const char *format, ...);
int	ft_printf_args(char c, va_list args);

#endif