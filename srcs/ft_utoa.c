/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 13:48:33 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/19 14:09:29 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_numlen(unsigned int n)
{
	int	count;

	count = 0;
	while (n)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static char	*ft_reverse(char *str)
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	while (str[j])
		j++;
	j--;
	while (i <= j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

char	*ft_utoa(unsigned int n)
{
	char			*str;
	unsigned int	len;
	int				i;

	i = 0;
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)ft_calloc((ft_numlen(n) + 1), sizeof(char));
	if (!str)
		return (0);
	if (n == 0)
		str[0] = '0';
	len = n;
	while (len)
	{
		str[i] = len % 10 + '0';
		len = len / 10;
		i++;
	}
	str = ft_reverse(str);
	return (str);
}
