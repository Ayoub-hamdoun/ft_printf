/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhamdou <ayhamdou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:54:41 by ayhamdou          #+#    #+#             */
/*   Updated: 2023/11/26 18:13:18 by ayhamdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long n)
{
	int		len;
	char	*hex;

	len = 0;
	hex = "0123456789abcdef";
	if (n >= 16)
	{
		len += ft_putptr(n / 16);
		len += ft_putptr(n % 16);
	}
	else
		len += ft_putchar(hex[n]);
	return (len);
}
