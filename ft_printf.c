/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 17:27:24 by mmarzouk          #+#    #+#             */
/*   Updated: 2020/01/14 17:49:14 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_printf(const char *s, ...)
{
	va_list l;

	g_r = 0;
	va_start(l,s);
	all((char*)s,l);
	va_end(l);
	return (g_r);
}
