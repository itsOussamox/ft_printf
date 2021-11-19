/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:40:37 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/19 14:02:18 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	char	*mysrc;
	char	*mydst;
	char	*tempsrc;
	char	*tempdest;

	mydst = (char *)dst;
	mysrc = (char *)src;
	if (mydst == 0 && mysrc == 0)
		return (0);
	if (mydst < mysrc)
	{
		while (n--)
			*mydst++ = *mysrc++;
	}
	else
	{
		tempdest = mydst + n - 1;
		tempsrc = mysrc + n - 1;
		while (n--)
			*tempdest-- = *tempsrc--;
	}
	return (dst);
}
