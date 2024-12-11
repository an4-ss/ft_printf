/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 17:32:00 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/11 16:31:42 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_check(const char *format, va_list args)
{
	int	count;

	count = 0;
	if (*format == 'd' || *format == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (*format == 'u')
		count = ft_putunbr(va_arg(args, unsigned int));
	else if (*format == 'x')
		count = ft_puthexnbr(va_arg(args, unsigned int));
	else if (*format == 'X')
		count = ft_putupperhexnbr(va_arg(args, unsigned int));
	else if (*format == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (*format == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (*format == 'p')
		count = ft_putptr(va_arg(args, size_t));
	else if (*format == '%')
		count = ft_putchar('%');
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		count;

	count = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			count += ft_check(++format, args);
		else
			count += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (count);
}
