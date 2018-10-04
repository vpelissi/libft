/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 18:17:29 by vpelissi          #+#    #+#             */
/*   Updated: 2014/11/17 14:56:06 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	ft_striter(char *s, void (*f) (char *))
{
	int		len;
	int		i;

	i = 0;
	if (s)
	{
		len = ft_strlen(s);
		while (s[i] != '\0' && i <= len)
		{
			f(&s[i]);
			i++;
		}
	}
}
