/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhamdou <ayhamdou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:02:49 by ayhamdou          #+#    #+#             */
/*   Updated: 2023/12/10 17:44:43 by ayhamdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	args;

	if (!str)
		return (0);
	if (write(1, NULL, 0) == -1)
		return (-1);
	i = 0;
	va_start(args, str);
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			checker(str, args, &len, i);
		}
		else
			len += ft_putchar(str[i]);
		i++;
	}
	va_end(args);
	return (len);
}
