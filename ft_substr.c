/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmarzouk <mmarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 21:46:14 by mmarzouk          #+#    #+#             */
/*   Updated: 2020/01/03 17:48:10 by mmarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*buf;
	size_t		i;

	i = 0;
	if (s)
	{
		if (!(buf = (char *)malloc(sizeof(char) * (len + 1))))
			return (0);
	}
	else
		return (0);
	while ((i < len) && (start + i < ft_strlen(s)))
	{
		buf[i] = s[start + i];
		i++;
	}
	buf[i] = '\0';
	return (buf);
}
