/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 13:49:28 by vpelissi          #+#    #+#             */
/*   Updated: 2014/12/01 17:15:59 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	if (s == NULL)
		return (NULL);
	result = ft_strnew (len + 1);
	i = 0;
	if (result == NULL)
		return (NULL);
	while (i < len + start)
	{
		if (i >= start)
		{
			result[i - start] = s[i];
		}
		i++;
	}
	return (result);
}
