/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:20:35 by ada-cunh          #+#    #+#             */
/*   Updated: 2016/11/07 23:20:36 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

/* Join str without const str, strdel pour la suite */

static char 	*str_join(char *s1, char *s2)
{
	char *str;
	int		i;

	i = 0;
	str = NULL;
	while (s1[i] && s2[i])
	{
		if (!(str = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
			return (NULL);
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
		ft_strdel(&s1);
	}
	return (str);
}


static int get_newline(int fd, char **line, char **save, char *buf)
{
	int 	l_read;
	char 	*l_pos;
	char 	*b_pos;

	while (l_read = read(fd, *buf, BUFF_SIZE) > 0)
	{
		b_pos = ft_strchr(*buf, (int)'\n');
		l_pos = ft_strchr(*line, (int)'\n');
		if (b_pos)
		{
			*save = ft_strdup(*buf);
			*line = str_join(*save, *buf);
			*line = ft_strsub(*line, 0,  l_pos - *line);
		}
		str_join(*line, *buf);
	}
}

/* Returns 1 if read, 0 if read end, -1 if read error */

int get_next_line(int const fd, char **line)
{
	static char *save;
	int	ret;
	int i;

	i = 0;
	save = ft_strdup(*line);
	if (!line || fd < 0 || BUFF_SIZE < 1)
		return (-1);
	if (!line = (char *)malloc(sizeof(*line)))
		return (-1);
}

int main(int argc, char **argv)
{
  if (argc == 3)
    join_str(argv[1], argv[2]);
  return (0); 
}
