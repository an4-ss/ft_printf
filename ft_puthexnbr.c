/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:24:44 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/11 16:32:08 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexnbr(unsigned int n)
{
	int			count;
	const char	*p;

	p = "0123456789abcdef";
	count = 0;
	if (n > 15)
	{
		count += ft_puthexnbr(n / 16);
		count += ft_puthexnbr(n % 16);
	}
	else
		count += ft_putchar(p[n]);
	return (count);
}
