/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arokhsi <arokhsi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 15:16:36 by arokhsi           #+#    #+#             */
/*   Updated: 2024/12/06 17:13:41 by arokhsi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_check(const char **format, va_list args);
int	ft_putchar(char c);
int	ft_puthexnbr(unsigned int n, const char *format);
int	ft_putnbr(int n);
int	ft_putpercent(void);
int	ft_putptr(size_t ptr);
int	ft_putstr(char *s);
int	ft_putunbr(unsigned int n);

#endif