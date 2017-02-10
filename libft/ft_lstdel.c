/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <ada-cunh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/23 09:55:43 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:27:47 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*tmp;
	t_list	*nxt;

	if (alst != NULL)
	{
		nxt = *alst;
		while (nxt != NULL)
		{
			if (del != NULL)
				(*del)(nxt->content, (*nxt).content_size);
			tmp = nxt->next;
			free(nxt);
			nxt = tmp;
		}
		*alst = NULL;
	}
}
