/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhamdou <ayhamdou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:20:04 by ayhamdou          #+#    #+#             */
/*   Updated: 2023/12/01 17:38:10 by ayhamdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char s)
{
	int		len;
	char	*hex;
	char	*hex_up;

	len = 0;
	hex = "0123456789abcdef";
	hex_up = "0123456789ABCDEF";
	if (n >= 16)
	{
		len += ft_puthex(n / 16, s);
		len += ft_puthex(n % 16, s);
	}
	else
	{
		if (s == 'x')
			len += ft_putchar(hex[n]);
		else if (s == 'X')
			len += ft_putchar(hex_up[n]);
	}
	return (len);
}
