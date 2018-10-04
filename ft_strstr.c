/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:43:29 by vpelissi          #+#    #+#             */
/*   Updated: 2015/02/02 19:29:05 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char *ft_strstr(const char *s1, const char *s2)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	if (ft_strlen(s2) == 0)
		return ((char *)(s1));
	while (s1 && s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			tmp = i;
			j = 0;
			while (s1[tmp] == s2[j] && s2[j])
			{
				tmp++;
				j++;
			}
			if (s2[j] == '\0')
				return (char *)(&s1[i]);
		}
		i++;
	}
	return (NULL);
}
