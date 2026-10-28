/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/06 14:16:10 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/10/09 18:03:14 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>
#include <unistd.h>

static int	conversions(const char type, va_list args)
{
	if (type == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (type == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (type == 'p')
		return (ft_putpointer(va_arg(args, void *), "0123456789abcdef"));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr(va_arg(args, int)));
	else if (type == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	else if (type == 'X')
		return (ft_puthexa(va_arg(args, unsigned int), "0123456789ABCDEF"));
	else if (type == 'x')
		return (ft_puthexa(va_arg(args, unsigned int), "0123456789abcdef"));
	else if (type == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	va_list	args_copy;
	int		check;

	va_start(args, format);
	va_copy(args_copy, args);
	check = 0;
	while (*format)
	{
		if (*format == '%')
		{
			check += conversions(*(format + 1), args_copy);
			format++;
		}
		else
		{
			write(1, format, 1);
			check++;
		}
		format++;
	}
	va_end(args_copy);
	va_end(args);
	return (check);
}
