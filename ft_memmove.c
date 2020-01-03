/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 21:34:12 by mmarzouk          #+#    #+#             */
/*   Updated: 2020/01/03 17:46:21 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
void	*ft_memmove(void *to, const void *from, size_t n)
{
	char			*pto;
	const char		*pfrom;

	pto = (char *)to;
	pfrom = (char *)from;
	if (pto == 0 && pfrom == 0)
		return (0);
	if (pto > pfrom)
	{
		while (n >= 1)
		{
			pto[n - 1] = pfrom[n - 1];
			n--;
		}
	}
	else
	{
		while (n--)
			*pto++ = *pfrom++;
	}
	return (to);
}
