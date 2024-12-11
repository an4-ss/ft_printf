/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putupperhexnbr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 11:52:04 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/11 16:32:14 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putupperhexnbr(unsigned int n)
{
	int			count;
	const char	*p;

	p = "0123456789ABCDEF";
	count = 0;
	if (n > 15)
	{
		count += ft_putupperhexnbr(n / 16);
		count += ft_putupperhexnbr(n % 16);
	}
	else
		count += ft_putchar(p[n]);
	return (count);
}
