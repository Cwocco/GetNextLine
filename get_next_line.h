header..

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 32
# include <string.h>

/*typedef struct 	s_read
{
	char *str;
	uint i;

}				t_read;
*/
int	get_next_line(int const fd, char **line);

#endif
