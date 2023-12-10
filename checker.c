/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhamdou <ayhamdou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 15:13:03 by ayhamdou          #+#    #+#             */
/*   Updated: 2023/12/08 14:45:42 by ayhamdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	checker(const char *str, va_list args, int *len, int i)
{
	if (str[i] == 'd' || str[i] == 'i')
		*len += ft_putnbr(va_arg(args, int));
	else if (str[i] == 'c')
		*len += ft_putchar(va_arg(args, int));
	else if (str[i] == 's')
		*len += ft_putstr(va_arg(args, char *));
	else if (str[i] == 'x' || str[i] == 'X')
		*len += ft_puthex(va_arg(args, unsigned int), str[i]);
	else if (str[i] == 'p')
	{
		*len += ft_putstr("0x");
		*len += ft_putptr(va_arg(args, unsigned long));
	}
	else if (str[i] == 'u')
		*len += ft_putunbr(va_arg(args, unsigned int));
	else if (str[i] == '%')
		*len += ft_putchar('%');
}
