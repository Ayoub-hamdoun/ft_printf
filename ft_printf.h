/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhamdou <ayhamdou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:14:24 by ayhamdou          #+#    #+#             */
/*   Updated: 2023/12/10 17:45:48 by ayhamdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	checker(const char *str, va_list args, int *len, int i);
int		ft_putchar(char c);
int		ft_putstr(char *str);
int		ft_puthex(unsigned int n, char s);
int		ft_putptr(unsigned long n);
int		ft_putnbr(int n);
int		ft_putunbr(unsigned int n);

#endif