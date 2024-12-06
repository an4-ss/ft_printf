/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:19:49 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/06 17:13:17 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_and_count(int n)
{
	char	c;

	c = n + '0';
	write(1, &c, 1);
	return (1);
}

int	ft_putnbr(int n)
{
	int	count;

	count = 0;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (n < 0)
	{
		n = -n;
		write(1, "-", 1);
		count++;
	}
	if (n >= 0 && n <= 9)
	{
		count += ft_check_and_count(n);
	}
	else
	{
		count += ft_putnbr(n / 10);
		count += ft_check_and_count(n % 10);
	}
	return (count);
}
