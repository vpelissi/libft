/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 18:35:51 by vpelissi          #+#    #+#             */
/*   Updated: 2014/11/28 05:37:45 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char			*size_malloc;
	unsigned int	i;

	size_malloc = (char *)malloc(sizeof(*size_malloc) * (size + 1));
	i = 0;
	if (size_malloc == NULL)
		return (NULL);
	while (i < size)
	{
		size_malloc[i] = '\0';
		i++;
	}
	size_malloc[i] = '\0';
	return (size_malloc);
}
