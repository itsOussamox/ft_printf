/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 12:43:53 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/19 14:03:25 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/ft_printf.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*map;
	unsigned int	i;

	if (!s || !f)
		return (0);
	i = 0;
	map = ft_strdup(s);
	if (!map)
		return (NULL);
	while (map[i])
	{
		map[i] = f(i, map[i]);
		i++;
	}
	return (map);
}
