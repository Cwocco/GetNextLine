/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tryget.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/07 23:31:33 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/08 23:36:35 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "../libft/libft.h"
#include <stdlib.h>
#include <unistd.h>

/*static char *str_join(char *s1, char *s2)
{
	char *str;
	int i;

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
*/

static int get_newline(char **line, char *buf, char **save)
{
	char *b_pos;
	char *l_pos;

	b_pos = ft_strchr(buf, (int)'\n');
	l_pos = ft_strchr(*line, (int)'\n');
	//ft_putstr("yolo2");
//	line = (char **)malloc(sizeof(line));
//	*line = (char *)malloc(sizeof(*line));
	if (b_pos)
	{
		//ft_putstr("grosfdp");
		*save = ft_strdup(b_pos + 1);
		//ft_putstr("grosfdp2");
		*line = ft_strjoin(*line, buf);
		//ft_putstr("grosfdp3");
		ft_putstr(*line);
		*line = ft_strsub(*line, 0, l_pos - *line);
		ft_putstr("grosfdp4");
		//ft_putstr(*line);
	}
	else if (!b_pos)
	{
		ft_putstr("stp");
		*line = ft_strjoin(*line, buf);
		ft_putstr(*line);
		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	char *line = 0;
	static char *save = 0;
//	char *buf;

//	int try;
	(void)argc;
	save = (char *)malloc(sizeof(char) * 10);
	save[0] = '\0';
	line = (char *)malloc(sizeof(char) * 10);
	line[0] = '\0';
 	
	if (get_newline(&line, save, &save) != 1)
		ft_putstr(save);
	if (get_newline(&line, argv[1], &save) == 1)
		ft_putstr(line);
}
