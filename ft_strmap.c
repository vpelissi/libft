/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 11:35:37 by vpelissi          #+#    #+#             */
/*   Updated: 2014/11/18 18:40:49 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*memory;
	int		len;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	memory = (char *)malloc(sizeof(*memory) * ft_strlen((char *)s) + 1);
	len = ft_strlen(s);
	while (s[i] != '\0' && i < len)
	{
		memory[i] = (*f)(s[i]);
		i++;
	}
	return (memory);
}
