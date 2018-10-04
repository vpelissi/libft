/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 16:13:38 by vpelissi          #+#    #+#             */
/*   Updated: 2014/12/01 12:58:38 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char *temp_s;

	temp_s = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (temp_s != NULL)
	{
		ft_strcpy(temp_s, s);
	}
	else
	{
		return (NULL);
	}
	return (temp_s);
}
