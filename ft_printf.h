/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaalmoma <zaalmoma@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 17:51:51 by zaalmoma          #+#    #+#             */
/*   Updated: 2026/10/11 09:59:08 by zaalmoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

int	ft_printf(const char *format, ...);
int	ft_putchar(int c);
int	ft_puthexa(unsigned long int n, const char *type);
int	ft_putnbr(int n);
int	ft_putpointer(void *n, char *type);
int	ft_putstr(char *str);
int	ft_putunsigned(unsigned int n);

#endif
