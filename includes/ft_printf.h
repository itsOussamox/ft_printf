/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouadel <obouadel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 12:43:13 by obouadel          #+#    #+#             */
/*   Updated: 2021/11/20 12:58:44 by obouadel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

char	*ft_itoa(int n);
void	*ft_calloc(size_t count, size_t size);
int		ft_printaddr(int len, va_list args);
int		ft_printlowhex(int len, va_list args);
int		ft_printuphex(int len, va_list args);
int		ft_printsign(int len);
int		ft_printchar(int len, va_list args);
int		ft_printstr(int len, va_list args);
int		ft_printunsign(int len, va_list args);
int		ft_printint(int len, va_list args);
int		ft_printf(const char *format, ...);
char	*ft_utoa(unsigned int n);
char	*ft_strdup(const char *src);
size_t	ft_strlen(const char *str);
void	*ft_bzero(void *s, size_t n);

#endif