/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:56:24 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/10/09 15:58:40 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putpointer(void *n, char *type)
{
	unsigned long int	nb;
	int					count;

	if (n == NULL)
		return (write(1, "(nil)", 5));
	nb = (unsigned long int) n;
	count = 0;
	count += ft_putstr("0x");
	count += ft_puthexa(nb, type);
	return (count);
}
