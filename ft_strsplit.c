/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/29 12:32:13 by vpelissi          #+#    #+#             */
/*   Updated: 2014/12/29 19:04:11 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

static int		ft_length(char const *s, char c)
{
	int		a;
	int		max;

	if (ft_strlen(s) == 0)
		return (0);
	a = 0;
	max = 0;
	while (s[a] != '\0')
	{
		if (s[a] == c && s[a - 1] != c)
			max++;
		a++;
	}
	if (s[0] == c && s[a - 1] == c)
		max--;
	if (s[0] != c && s[a - 1] != c)
		max++;
	return (max);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**memory;
	int		a;
	int		b;
	int		i;

	memory = NULL;
	if (s)
	{
		b = 0;
		memory = (char **)malloc(sizeof(char *) * (ft_length(s, c) + 1));
		a = 0;
		while (s[a] != '\0')
		{
			if (s[a] != c)
			{
				i = a;
				while (s[a + 1] != c && s[a + 1] != '\0')
					a++;
				memory[b++] = ft_strsub(s, i, a - i + 1);
			}
			a++;
		}
		memory[b] = '\0';
	}
	return (memory);
}
