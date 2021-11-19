/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:32:37 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/19 20:28:37 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printint(int len, va_list args)
{	
	int		num;
	char	*str;
	int		i;

	i = 0;
	num = va_arg(args, int);
	str = ft_itoa(num);
	while (str[i])
	{
		write(1, &str[i++], 1);
		len++;
	}
	free(str);
	return (len);
}

int	ft_printchar(int len, va_list args)
{
	int	c;

	c = va_arg(args, int);
	len = len + write(1, &c, 1);
	return (len);
}

int	ft_printstr(int len, va_list args)
{
	char	*str;
	int		i;

	i = 0;
	str = va_arg(args, char *);
	if (!str)
		return (len = len + write(1, "(null)", 6));
	while (str[i])
	{
		write(1, &str[i++], 1);
		len++;
	}
	return (len);
}

int	ft_printunsign(int len, va_list args)
{
	unsigned int	n;
	char			*str;
	int				i;

	i = 0;
	n = va_arg(args, unsigned int);
	str = ft_utoa(n);
	if (!str)
		len = len + write(1, "NULL", 4);
	while (str[i])
	{
		write(1, &str[i++], 1);
		len++;
	}
	free(str);
	return (len);
}

int	ft_printsign(int len, va_list args)
{
	char	sign;

	sign = va_arg(args, int);
	len = len + write(1, "%", 1);
	return (len);
}
