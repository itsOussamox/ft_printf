/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:22:26 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/20 12:54:10 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n)
	{
		*str = '\0';
		str++;
		n--;
	}
	return (s);
}
