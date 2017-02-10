/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 13:39:52 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/08 23:43:27 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str_tmp;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((str_tmp = (char *)malloc(sizeof(*str_tmp) * (len + 1))))
	{
		while (i < len)
		{
			str_tmp[i] = s[i + start];
			i++;
		}
		str_tmp[i] = '\0';
		return (str_tmp);
	}
	return (NULL);
}

int main(int argc, char **argv)
{
	char *l_pos;
	char *try;
	(void)argc;
	
	l_pos = ft_strchr(argv[1], (int)'\n');
	try = ft_strsub(argv[1], 0, l_pos - argv[1]);
	ft_putstr(try);
}
