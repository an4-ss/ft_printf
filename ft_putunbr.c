/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:23:16 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/11 16:26:14 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int		count;

	count = 0;
	if (n <= 9)
		count += ft_putchar(n + '0');
	else
	{
		count += ft_putunbr (n / 10);
		count += ft_putunbr (n % 10);
	}
	return (count);
}
