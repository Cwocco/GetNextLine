/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tryget.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 23:31:33 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/08 00:35:09 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "get_next_line.h"
#include "libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

static int get_newline(char **line, char **save, char *buf)
{
	char *b_pos;
	char *l_pos;

	b_pos = ft_strchr(buf, (int)'\n');
	l_pos = ft _strchr(*line, (int)'\n');
	if (b_pos)
	{
		*save = ft_strdup(b_pos + 1);
		*line = ft_strjoin(*line, buf);
		*line = ft_strsub(*line, 0, l_pos - *line);
		ft_putstr(*line);
	}
	else if (!b_pos)
	{
		*line = ft_strjoin(*line, buf);
		ft_putstr(*line);
		return (1);
	}
	return (0);
}

int main(void)
{
	char **line = 0;
	static char **save = 0;
	char *buf;

	buf = "Ntm\nFdp\nBjr\nSlt";
	get_newline(line, save, &save);
	ft_putstr(&save);
	get_newline(line, buf, &save);
}
