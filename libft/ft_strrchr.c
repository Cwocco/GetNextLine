/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/06 14:07:23 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 04:00:31 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *str;

	str = (char*)s;
	while (*str)
		++str;
	if ((char)c == 0)
		return (str);
	while (str >= s)
	{
		if (*str == (char)c)
			return (str);
		--str;
	}
	return (NULL);
}
