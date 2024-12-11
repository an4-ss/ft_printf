/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:26:34 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/11 16:23:18 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex(size_t n)
{
	char	*p;
	int		count;

	p = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_puthex (n / 16);
		count += ft_puthex (n % 16);
	}
	else
		count += ft_putchar(p[n]);
	return (count);
}

int	ft_putptr(size_t ptr)
{
	return (ft_putstr("0x") + ft_puthex(ptr));
}
