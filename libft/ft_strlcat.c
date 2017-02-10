/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/02 09:35:58 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:58:46 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int len_dst;
	unsigned int i;

	i = 0;
	len_dst = ft_strlen(dst);
	if (len_dst >= size)
		return (size + ft_strlen(src));
	while (src[i] && i < (size - len_dst - 1))
	{
		dst[i + len_dst] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (ft_strlen(src) + len_dst);
}
