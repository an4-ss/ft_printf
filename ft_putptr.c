/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 14:26:34 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/06 17:13:27 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_puthex(size_t n)
{
	char	c;
	char	*p;
	int		count;

	p = "0123456789abcdef";
	count = 0;
	if (n >= 16)
	{
		count += ft_puthex (n / 16);
	}
	else
	{
		c = p[n];
		write (1, &c, 1);
		count++;
	}
	return (count);
}

int	ft_putptr(size_t ptr)
{
	int	count;

	count = write(1, "0x", 2);
	count += ft_puthex(ptr);
	return (count);
}
