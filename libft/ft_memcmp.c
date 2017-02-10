/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 15:24:05 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:51:48 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	unsigned char		*p1;
	unsigned char		*p2;

	if (s1 == NULL && s2 == NULL)
		return (0);
	i = 0;
	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (i < n && p1[i] == p2[i])
		i++;
	if (i == n)
		return (0);
	return ((int)p1[i] - p2[i]);
}
