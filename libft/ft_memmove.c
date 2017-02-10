/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 11:55:04 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:52:24 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;
	char	*tmp;
	char	*tmp_dst;
	char	*tmp_src;

	i = 0;
	tmp = (char *)malloc(sizeof(tmp) * (n));
	tmp_dst = (char *)dst;
	tmp_src = (char *)src;
	while (i < (int)n)
	{
		tmp[i] = tmp_src[i];
		i++;
	}
	i = 0;
	while (i < (int)n)
	{
		tmp_dst[i] = tmp[i];
		i++;
	}
	dst = (void *)tmp_dst;
	free(tmp);
	return (dst);
}
