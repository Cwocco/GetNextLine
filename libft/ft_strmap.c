/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/12 12:56:04 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:59:06 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char			*ret;
	unsigned long	i;

	if (s && f)
	{
		i = 0;
		if ((ret = (char*)malloc(ft_strlen((char*)s) + 1)) == NULL)
			return (NULL);
		while (s[i])
		{
			ret[i] = (*f)(s[i]);
			++i;
		}
		ret[i] = 0;
		return (ret);
	}
	return (NULL);
}
