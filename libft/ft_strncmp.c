/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/04 09:28:00 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:59:33 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int i;

	i = 0;
	if (!n)
		return (0);
	while (n--)
	{
		if (s1[i] != s2[i])
			return (*(unsigned char*)(s1) - *(unsigned char*)(s2));
		if (!s1[i] || !s2[i])
			break ;
		s1++;
		s2++;
	}
	return (0);
}
