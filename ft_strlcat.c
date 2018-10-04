/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 14:28:48 by vpelissi          #+#    #+#             */
/*   Updated: 2014/11/12 17:54:43 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	len;
	unsigned int	a;
	int				b;

	a = 0;
	b = 0;
	len = ft_strlen(dst) + ft_strlen(src);
	while (dst[a] != '\0' && a < size)
		a++;
	if (a == size)
		return (ft_strlen(src) + size);
	while (src[b] != '\0' && a < size - 1)
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (len);
}
