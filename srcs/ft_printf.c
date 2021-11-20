/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:38:03 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/20 12:51:15 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	is_conv(char c)
{
	if (c == 'c' || c == 'd' || c == 'i' || c == 'X' || c == 'x' || c == 's')
		return (1);
	if (c == 'p' || c == 'u' || c == '%')
		return (1);
	return (0);
}

int	ft_eval(int *len, va_list args, char *format, int i)
{
	int	c;

	c = format[i];
	if (!is_conv(format[i]))
		return (0);
	if (c == 'd' || c == 'i')
		*len = ft_printint(*len, args);
	if (c == 'c')
		*len = ft_printchar(*len, args);
	if (c == 's')
		*len = ft_printstr(*len, args);
	if (c == 'u')
		*len = ft_printunsign(*len, args);
	if (c == 'x')
		*len = ft_printlowhex(*len, args);
	if (c == 'X')
		*len = ft_printuphex(*len, args);
	if (c == '%')
		*len = ft_printsign(*len);
	if (c == 'p')
		*len = ft_printaddr(*len, args);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (!ft_eval(&len, args, (char *)format, i + 1))
				return (-1);
			i++;
		}
		else
			len = len + write(1, &format[i], 1);
		i++;
	}
	va_end(args);
	return (len);
}
