/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhamdou <ayhamdou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:02:49 by ayhamdou          #+#    #+#             */
/*   Updated: 2023/11/26 18:17:40 by ayhamdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int 	len;
	va_list	args;

	if (!str)
		return (0);
	i = 0;
	va_start(args, str);
	len = 0;

	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd' || str[i] == 'i')
				len += ft_putnbr(va_arg(args, int));
			else if (str[i] == 'c')
				len += ft_putchar(va_arg(args, int));
			else if (str[i] == 's')
				len += ft_putstr(va_arg(args, char *));
			else if (str[i] == 'x' || str[i] == 'X')
				len += ft_puthex(va_arg(args, unsigned int), str[i]);
			else if (str[i] == 'p')
			{
				len += ft_putstr("0x");
				len += ft_putptr(va_arg(args, unsigned long));
			}
			else if (str[i] == 'u')
				len += ft_putunbr(va_arg(args, unsigned int));
			else if (str[i] == '%')
				len += ft_putchar('%');
		}
		else
		{
			len += ft_putchar(str[i]);
		}
		i++;
	}

	va_end(args);
	return (len);
}
