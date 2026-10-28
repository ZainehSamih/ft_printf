/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/08 14:24:28 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/10/09 13:00:58 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <unistd.h>

int	ft_putunsigned(unsigned int n)
{
	char	digit;
	int		count;

	count = 0;
	if (n == 0)
		return (write(1, "0", 1));
	else if (n / 10 != 0)
		count += ft_putunsigned(n / 10);
	digit = (n % 10) + '0';
	count += write(1, &digit, 1);
	return (count);
}
