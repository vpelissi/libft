/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 19:33:07 by vpelissi          #+#    #+#             */
/*   Updated: 2015/02/02 19:37:08 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static	int		ft_itoasize(int n)
{
	int	size;

	size = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 9)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		l;

	l = 1;
	i = ft_itoasize(n);
	if ((str = malloc(sizeof(char) * (i + 1))) == NULL)
		return (NULL);
	str[0] = '0';
	str[i] = '\0';
	if (n < 0)
	{
		l = -1;
		str[0] = '-';
	}
	i--;
	while (n)
	{
		str[i] = ((n % 10) * l) + '0';
		i--;
		n = n / 10;
	}
	return (str);
}
