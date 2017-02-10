/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:25:50 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:59:26 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	len_s1;

	i = 0;
	len_s1 = ft_strlen(s1);
	while (s2[i] != '\0' && i < n)
	{
		s1[len_s1 + i] = (char)s2[i];
		i++;
	}
	s1[len_s1 + i] = 0;
	return (s1);
}
