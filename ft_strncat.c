/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:33:25 by vpelissi          #+#    #+#             */
/*   Updated: 2014/11/21 15:53:18 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strncat(char *s1, const char *s2, size_t n)
{
	char			*alpha;
	char			*beta;
	unsigned int	i;

	alpha = s1;
	beta = (char *)s2;
	i = 0;
	while (*alpha != '\0')
	{
		alpha++;
	}
	while (*beta != '\0' && i < n)
	{
		*alpha = *beta;
		alpha++;
		beta++;
		i++;
	}
	*alpha = '\0';
	return (s1);
}
