/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 13:39:52 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 04:01:19 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strsub(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((tmp = (char *)malloc(sizeof(*tmp) * (len + 1))))
	{
		while (i < len)
		{
			tmp[i] = s[i + start];
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
	return (NULL);
}
