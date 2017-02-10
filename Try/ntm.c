/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ntm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 04:57:11 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/09 04:57:13 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

static int	read_and_cut(const int fd, char **save, char **line)
{
	int			ret;

	*line = ft_strdup(*save);
	if ((ret = read(fd, *save, BUFF_SIZE)) > 0)
	{
		save[0] = '\0';
		*line = ft_strjoin(*line, *save);
		ft_strdel(line);
		*save = ft_strdup(*line);
	}
	return (ret);
}

/* Tant que j'ai pas de \n je read, je check le return de read */

int			get_next_line(const int fd, char **line)
{
	static char *save;
	char		*s_pos;
	char		*eof_pos;
	int			ret;

	if (fd < 0 || BUFF_SIZE < 0 || !line)
		return (-1);
	if (!(save = (char *)malloc(sizeof(char))))
		return (-1);
	while ((s_pos = ft_strchr(save, (int)'\n')) == NULL)
	{
		if ((ret = read_and_cut(fd, &save, line)) < 0)
			return (-1);
		else if (ret == 0 && (eof_pos = ft_strchr(save, '\0')) == save)
			return (0);
		//else if (ret < 0)
		//return (-1);
	}
	if (!(*line = ft_strsub(save, 0, s_pos - save)))
		return (-1);
	s_pos = ft_strdup(s_pos + 1);
	save = s_pos;
	return (1);
}