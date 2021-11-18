/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 20:32:37 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/18 20:37:08 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printint(int n, int len)
{	
	unsigned int	nb;

	if (n < 0)
	{
		len = len + write(1, "-", 1);
		nb = -n;
	}
	else
		nb = n;
	if (nb > 9)
	{
		ft_putnbr_fd(nb / 10, len);
		nb = nb % 10;
	}
	len = len + write(nb + '0');
	return (len);
}