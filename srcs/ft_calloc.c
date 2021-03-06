/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 17:34:15 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/20 15:27:52 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*alloc;

	alloc = (void *)malloc(count * size);
	ft_bzero(alloc, count * size);
	return (alloc);
}
