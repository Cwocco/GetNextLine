/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 22:12:12 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/11 21:46:52 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

static int			read_and_cut(int const fd, char **save, char **line)
{
	char			buf[BUFF_SIZE + 1];
	int				ret;

	buf[BUFF_SIZE] = (int)'\n';
	if ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = '\0';
		*line = ft_strjoin(*save, buf);
		free(*save);
		*save = *line;
		if (buf[ret] == '\0' && buf[ret - 1] != '\n')
			return (0);
	}
	return (ret);
}

static int			c(int const fd)
{
	return ((fd < 0 || BUFF_SIZE < 1) ? 0 : 1);
}

int					get_next_line(int const fd, char **line)
{
	static char		*save;
	char			*s_pos;
	int				ret;

	if (!c(fd) || !line || (!save && (save = (char *)ft_memalloc(1)) == 0))
		return (-1);
	s_pos = ft_strchr(save, (int)'\n');
	while (s_pos == NULL)
	{
		if ((ret = read_and_cut(fd, &save, line)) == 0 || save[ret] )
		{
			if ((s_pos = ft_strchr(save, '\0')) == save)
				return (0);
		}
		else if (ret < 0)
			return (-1);
		else
			s_pos = ft_strchr(save, (int)'\n');
	}
	if (!(*line = ft_strsub(save, 0, s_pos - save)))
		return (-1);
	s_pos = ft_strdup(s_pos + 1);
	free(save);
	save = s_pos;
	return (1);
}
