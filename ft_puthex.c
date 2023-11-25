/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhamdou <ayhamdou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:20:04 by ayhamdou          #+#    #+#             */
/*   Updated: 2023/11/25 18:26:18 by ayhamdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, int s)
{
	int		len;
	char	c;
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
		if (s == 1)
			len += ft_putchar(hex[n]);
		else
			len += ft_putchar(hex_up[n]);
	}
	return (len);
}
