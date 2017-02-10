/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 15:05:56 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 02:22:37 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char*)s + i);
		i++;
	}
	if ((char)c == 0)
		return ((char *)s + i);
	return (NULL);
}


int main(void)
{
	char *try;
	char *s;
	
//	(void)argc;
	s = "try\nhello\nbjr\0bjr\nyolo";
	try = ft_strchr(s, '\0');
	ft_putstr(try);
	try = ft_strchr(s, (int)'\n');
	ft_putstr(try);
}
