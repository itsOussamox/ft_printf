/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printaddr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:27:01 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/20 12:48:56 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static void	ft_print_hexa(unsigned long int num, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num < 16)
		(*len) += write(1, &hex[num], 1);
	else
	{
		ft_print_hexa(num / 16, len);
		ft_print_hexa(num % 16, len);
	}
}

int	ft_printaddr(int len, va_list args)
{
	unsigned long int	p;

	p = va_arg(args, unsigned long int);
	len = len + write(1, "0x", 2);
	ft_print_hexa(p, &len);
	return (len);
}
