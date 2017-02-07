/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_try.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 00:13:04 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/07 00:13:06 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdlib.h>
#include <unistd.h>


/*
	Quand je rencontre un \n dans le buf je join et stock dans *line, je sub le mot entre 0 et \n avec strsub et le stock dans line
	*save = ft_strdup(b_pos) -> ce qu'il y a apres le \n
*/

static int get_newline(char **line, char**save, char *buf)
{
	char *b_pos;
	char *l_pos;

	b_pos = ft_strchr(buf, (int)'\n');
	l_pos = ft_strchr(*line, (int)'\n');
	if (b_pos)
	{
		*save = ft_strdup(b_pos + 1);
		*line = ft_strjoin(*line, buf);
		*line = ft_strsub(*line, 0, l_pos - *line);	
	}
	else if (!b_pos)
	{
		*line = ft_strjoin(*line, buf);
		return (1);
	}
	return (0);
}

int get_next_line(const int fd, char **line)
{
	static char *save;
	char 		*buf;
	int			ret;

	if (fd < 0|| BUFF_SIZE < 0 || !line)
		return (-1);
	while (ret = read(fd, buf, BUFF_SIZE) > 0)
	{

	}
}