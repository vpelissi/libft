/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpelissi <vpelissi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/26 04:45:48 by vpelissi          #+#    #+#             */
/*   Updated: 2015/02/20 17:59:16 by vpelissi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		find_eol(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
			return (i);
		i++;
	}
	return (0);
}

int		get_line_v2(char **memory, char **line)
{
	size_t			start;
	size_t			flag;

	start = 0;
	if ((flag = find_eol(*memory)) != 0)
	{
		*line = ft_strsub(*memory, start, flag);
		*memory = ft_strchr(*memory, '\n');
		(*memory)++;
		return (1);
	}
	return (0);
}

int		get_line(char **memory, char **buffer, int alpha)
{
	(*buffer)[alpha] = '\0';
	*memory = ft_strjoin(*memory, *buffer);
	if (alpha < 0)
		return (-1);
	else
		return (0);
}

int		get_next_line(int const fd, char **line)
{
	static char		*memory = NULL;
	char			*buffer;
	int				alpha;

	if (fd < 0)
		return (-1);
	if (memory == NULL)
		memory = ft_strnew(1);
	buffer = (char *)malloc(sizeof(char) * (TAILLE_MAX + 1));
	while ((alpha = read(fd, buffer, TAILLE_MAX)) || memory[0] != '\0')
	{
		if (get_line(&memory, &buffer, alpha) == -1)
			return (-1);
		if (get_line_v2(&memory, line) == 1)
			return (1);
		if (alpha == 0)
		{
			*line = ft_strdup(memory);
			break ;
		}
	}
	return (0);
}
