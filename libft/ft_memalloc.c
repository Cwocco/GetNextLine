/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:37:31 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:30:24 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	*ft_memalloc(size_t size)
{
	void*mem;

	if (size == 0)
		return (NULL);
	mem = NULL;
	if ((mem = (void *)malloc(sizeof(*mem) * size)) == NULL)
		return (NULL);
	ft_bzero(mem, size);
	return (mem);
}
