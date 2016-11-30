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
		//ft_strdel(&s1);
	}
	return (str);
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

}


int main(int argc, char **argv)
{
  if (argc == 3)
    join_str(argv[1], argv[2]);
  return (0); 
}
