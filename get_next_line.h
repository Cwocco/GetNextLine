/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:21:39 by ada-cunh          #+#    #+#             */
/*   Updated: 2016/11/07 23:21:40 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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
