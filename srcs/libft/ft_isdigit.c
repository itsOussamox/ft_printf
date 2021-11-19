/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:40:36 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/19 14:06:07 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "/Users/obouadel/Desktop/42cursus/ft_printf/includes/ft_printf.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
