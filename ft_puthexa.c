/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 13:44:24 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/10/09 18:40:20 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_puthexa(unsigned long int n, const char *type)
{
	int		count;

	count = 0;
	if (n < 16)
		count += ft_putchar(type[n]);
	if (n >= 16)
	{
		count += ft_puthexa(n / 16, type);
		count += ft_puthexa(n % 16, type);
	}
	return (count);
}
