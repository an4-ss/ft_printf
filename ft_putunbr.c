/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:23:16 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/06 17:13:32 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	char	c;
	int		count;

	count = 0;
	if (n <= 9)
	{
		c = n + '0';
		write (1, &c, 1);
		count++;
	}
	else
	{
		count += ft_putunbr (n / 10);
		count += ft_putunbr (n % 10);
	}
	return (count);
}
