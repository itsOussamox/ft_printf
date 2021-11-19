/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:07:33 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/19 19:07:04 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printrev(char *str)
{
	int	i;
	int	len;

	len = 0;
	i = 0;
	while (str[i])
		i++;
	i--;
	while (i >= 0)
		len = len + write(1, &str[i--], 1);
	return (len);
}

int	ft_hexsize(unsigned int c)
{
	int	size;

	size = 0;
	while (c)
	{
		c = c / 16;
		size++;
	}
	return (size);
}

int	ft_printlowhex(int len, va_list args)
{
	char			*hex;
	char			*str;
	unsigned int	c;
	int				i;

	c = va_arg(args, int);
	if (c == 0)
		return (len = len + write(1, "0", 1));
	i = ft_hexsize(c);
	str = (char *)ft_calloc(i + 1, sizeof(char));
	hex = "0123456789abcdef";
	i = 0;
	while (c)
	{
		str[i++] = hex[c % 16];
		c = c / 16;
	}
	len = len + ft_printrev(str);
	free(str);
	return (len);
}

int	ft_printuphex(int len, va_list args)
{
	char			*hex;
	char			*str;
	unsigned int	c;
	int				i;

	c = va_arg(args, int);
	if (c == 0)
		return (len = len + write(1, "0", 1));
	i = ft_hexsize(c);
	str = (char *)ft_calloc(i + 1, sizeof(char));
	hex = "0123456789ABCDEF";
	i = 0;
	while (c)
	{
		str[i++] = hex[c % 16];
		c = c / 16;
	}
	len = len + ft_printrev(str);
	free(str);
	return (len);
}
