/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/15 17:19:54 by vpelissi          #+#    #+#             */
/*   Updated: 2015/02/02 19:12:22 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*memory;
	size_t	i;

	i = 0;
	memory = malloc(sizeof(char) * (size));
	if (memory == NULL)
		return (NULL);
	while (i++ < size)
		memory[i] = 0;
	return ((void *)memory);
}
