/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtakiyos <mtakiyos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:42:57 by mtakiyos          #+#    #+#             */
/*   Updated: 2025/09/02 15:15:51 by mtakiyos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int	ft_printhex(unsigned int n, int flag);
int	ft_printunl(int base, char *basestr, unsigned long n);
int	ft_printptr(unsigned long ptr);
int	ft_printuns(unsigned int base, char *basestr, unsigned int n);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);

#endif
