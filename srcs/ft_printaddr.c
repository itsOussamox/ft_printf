/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:27:01 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/19 21:34:56 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* p = va_arg(args, unsigned long)
        		 unsigned long)va_arg(args, void *); */
#include "../includes/ft_printf.h"

/* int	print_hexa(unsigned long nb, int len)
{
	char	c;
	int		i;

	i = 16 * 4;
	while (i)
	{
		i -= 4;
		c = nb >> i;
		c = c & 0xf;
		if (c > 9)
			c += 'a' - 10;
		else
			c += '0';
		len = len + write(1, &c, 1);
	}
	return (len);
}
int	ft_printaddr(int len, va_list args)
{
	void	*nb;

	nb = va_arg(args, void *);
	print_hexa((unsigned long)nb, len);
	return (len);
} */
static int	ft_printrev(char *str)
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

static int	ft_hexsize(unsigned int c)
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
int	ft_printaddr(int len, va_list args)
{
	char		*hex;
	char		*str;
	unsigned long long c;
	int				i;

	len = len + write(1, "0x", 2);
	c = va_arg(args, long);
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