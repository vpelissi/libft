/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 19:46:10 by vpelissi          #+#    #+#             */
/*   Updated: 2015/02/20 18:46:08 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_stri(char const *s, int i)
{
	while ((s[i] == ' ') || (s[i] == '\n')
			|| (s[i] == '\t') || (s[i] == '\0'))
		i++;
	return (i);
}

static int	ft_strn(char const *s, int n)
{
	while ((s[n] == ' ') || (s[n] == '\n')
			|| (s[n] == '\t') || (s[n] == '\0'))
		n--;
	return (n);
}

char		*ft_strtrim(char const *s)
{
	char	*str;
	int		i;
	int		j;
	int		n;

	if (s)
	{
		j = 0;
		i = 0;
		n = ft_strlen(s);
		if ((str = malloc(sizeof(char) * (ft_strlen(s) + 1))) == NULL)
			return (NULL);
		n = ft_strn(s, n);
		i = ft_stri(s, i);
		while (i <= n)
		{
			str[j] = s[i];
			j++;
			i++;
		}
		str[j] = '\0';
		return (str);
	}
	return (NULL);
}
