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


/* Join str without const str */

static char 	*str_join(char *s1, char *s2)
{
	char *str;
	int i;

	i = 0;
	str = NULL;
	if (s1	 == NULL || s2 == NULL)
		return (NULL);
	if (!(str = (char*)malloc(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s1)
	{
		str[i] = s1[i];	
		i++;
	}
	str[i] = '\0';
	ft_strcat(str, s2);
	ft_strdel(s1);
	return (str);
}

 /* Read returns 0 at EoF, -1 if error, 
 strchr returns NULL if character c doesnt appears */

static char *delim_line(char **line, char **linedup, char *str, int fd)
{
	int lect;

	*line= ft_strdup(*linedup);
	// Lets see what we'll type here
	while ()
	if ((lect = read(fd, *linedup, BUFF_SIZE)) < 0)
		return (-1);
	if ((str = ft_strchr(*linedup, '\n')) == NULL)
		return (*line)
	if ((str = ft_strchr(*linedup, '\n')) != NULL && lect)
	{
		*line = str_join(*line, *linedup);
		ft_strcpy(*line, str + 1);
	}
	//Somethings wrong in here
	else
	{
		*line = str_join(*line, *linedup);
		*linedup[0] = 0;
	}
	//Changes needed here
	return (*line);
}

/* Returns 1 if read, 0 if read end, -1 if read error */

int get_next_line(int const fd, char **line)
{
	static char *s;
	int	ret;
	int i;
	char buf[BUFF_SIZE + 1];

	i = 0;
	if (!line || fd < 0)
		return (-1);
	if (!(s = (char*)malloc(BUFF_SIZE + 1)))
		return (-1);

}
