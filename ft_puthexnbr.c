/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:24:44 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/11 11:35:34 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_and_count(unsigned int n)
{
	char		c;
	const char	*p = "0123456789abcdef";
	int			count;

	count = 0;
	c = p[n];
	write(1, &c, 1);
	count++;
	return (count);
}

int	ft_puthexnbr(unsigned int n)
{
	int	count;

	count = 0;
	if (n > 15)
	{
		count += ft_puthexnbr(n / 16);
		count += ft_puthexnbr(n % 16);
	}
	else
	{
		count += ft_check_and_count(n);
	}
	return (count);
}
