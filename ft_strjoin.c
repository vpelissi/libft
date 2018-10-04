/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/25 18:22:40 by vpelissi          #+#    #+#             */
/*   Updated: 2014/12/01 13:00:09 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*memory;
	int		len;

	len = ft_strlen(s1) + ft_strlen(s2);
	memory = (char *)malloc(sizeof(*memory) * (len + 1));
	if (memory == NULL)
		return (NULL);
	ft_strcpy(memory, s1);
	ft_strcat(memory, s2);
	return (memory);
}
