/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 16:04:33 by vpelissi          #+#    #+#             */
/*   Updated: 2015/02/02 19:15:28 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (s2)
	{
		if (ft_strlen(s2) == 0)
			return ((char *)(s1));
		while (s1 && s1[i] != '\0')
		{
			j = 0;
			if (s1[i] == s2[j])
			{
				while (s1[i + j] == s2[j] && s2[j] && i + j < n)
					j++;
				if ((char)s2[j] == '\0')
					return (char *)(&s1[i]);
			}
			i++;
		}
	}
	return (NULL);
}
