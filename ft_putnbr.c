/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayhamdou <ayhamdou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 18:18:27 by ayhamdou          #+#    #+#             */
/*   Updated: 2023/12/01 15:09:19 by ayhamdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int				len;
	unsigned int	nb;
	char			c;

	len = 0;
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		len += ft_putchar('-');
	}
	if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else
	{
		c = nb + '0';
		len += ft_putchar(c);
	}
	return (len);
}
