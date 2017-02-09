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


static int read_and_cut(const int fd, char **save, char **line)
{
	static char *buf;
	int 		ret;

	if ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[0] = '\0';
		*line = ft_strjoin(*save, buf);
		ft_strdel(&line);
		*save = ft_strdup(*line);
		return (1);
	}
	return (0);
}

int get_next_line(const int fd, char **line)
{
	static char *save;
	char *buf;
	char *b_pos;
	int ret;

	if (fd < 0|| BUFF_SIZE < 0 || !line)
		return (-1);
	while ((b_pos = ft_strchr(buf, (int)'\n')) == NULL)
	{
		
	}

}