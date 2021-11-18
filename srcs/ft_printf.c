/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:38:03 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/18 20:23:51 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	is_conv(char c)
{
	if (c == 'c' || c == 'd' || c == 'i' || c == 'X' || c == 'x' || c == 's')
		return (1);
	if (c == 'p' || c == 'u' || c == '%')
		return (1);
	return (0);
}
int	ft_eval(int *len, t_print *lst, char *format, int i)
{
	int c;

	c = format[i];
	if (!is_conv(format[i]))
		return (0);
	if (c == 'd' || c == 'i')
		ft_printint()
}
int	ft_printf(char *format, ...)
{
	t_print	*lst;
	int		len;
	int		i;

	i = 0;
	len = 0;
	lst = (t_print *)malloc(sizeof(t_print));
	if (!lst)
		return (-1);	
	lst = ft_init(lst);
	va_start(lst->args, format);
	while (format[i])
	{
		if (format[i] == '%')
			ft_eval(&len ,lst ,format , i + 1);
		else
			len = len + write(1, &format[i], 1);
		i++;
	}
	return (len);
}