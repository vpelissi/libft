/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 20:49:24 by vpelissi          #+#    #+#             */
/*   Updated: 2015/02/02 19:32:07 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;

	if (s1 && s2)
	{
		i = 0;
		while (s1[i] != '\0' && s2[i] != '\0' && i < n)
		{
			if (s1[i] != s2[i])
				return (0);
			i++;
		}
		if (n == i)
			return (1);
		if ((s1[i] == '\0' && s2[i] != '\0')
			|| (s1[i] != '\0' && s2[i] == '\0'))
			return (0);
		return (1);
	}
	return (0);
}
