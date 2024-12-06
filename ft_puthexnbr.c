/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:24:44 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/06 17:15:05 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_and_count(unsigned int n, const char *format)
{
	char		c;
	const char	*p = "0123456789abcdef";
	const char	*q = "0123456789ABCDEF";
	int			count;

	count = 0;
	if (*format == 'x')
	{
		c = p[n];
		write(1, &c, 1);
		count++;
	}
	else if (*format == 'X')
	{
		c = q[n];
		write(1, &c, 1);
		count++;
	}
	return (count);
}

int	ft_puthexnbr(unsigned int n, const char *format)
{
	int	count;

	count = 0;
	if (n >= 15)
	{
		count += ft_puthexnbr(n / 16, format);
		count += ft_puthexnbr(n % 16, format);
	}
	else
	{
		count += ft_check_and_count(n, format);
	}
	return (count);
}
