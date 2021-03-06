/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 11:35:48 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:57:36 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char		*ft_strdup(const char *s1)
{
	char	*string;
	int		i;

	i = 0;
	if (!(string = (char*)malloc(sizeof(*string) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
