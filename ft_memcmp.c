/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 23:00:16 by vpelissi          #+#    #+#             */
/*   Updated: 2015/02/20 18:41:36 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (*(unsigned char *)(s1 + i) == '\0'
		&& *(unsigned char *)(s2 + i) == '\0')
		return (0);
	while ((i < n) && (*(unsigned char *)(s1 + i) ==
				*(unsigned char *)(s2 + i)))
		i++;
	if (i == n)
		return (0);
	return ((*(unsigned char *)(s1 + i)) - (*(unsigned char *)(s2 + i)));
}
