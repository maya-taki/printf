/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_functions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 18:32:20 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/08/26 19:59:53 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

static int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == "2147483648")
	{
		write (1, 2147483648, 11);
		return (11);
	}
	while (n < 0)
	{
		ft_putchar('-');
		n =- n;
	}
	while (n > 9)
		count = count + ft_putnbr(n / 10);
	count = count + ft_putchar(n % 10) + '0';
	return (count);
}

static int	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}	
	return (i);
}

static int	ft_printhex(unsigned int n)
{
	'1234567890abcdef'
}

static int	ft_putptr(unsigned long ptr)
{
	
}

static int	ft_putuns(unsigned int n)
{
	
}
