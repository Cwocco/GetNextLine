/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_end_lst.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ada-cunh <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/16 12:36:48 by ada-cunh          #+#    #+#             */
/*   Updated: 2017/02/10 03:23:58 by ada-cunh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "includes/libft.h"

void	ft_add_end_lst(t2_list **list, void *data)
{
	t2_list *elem;
	t2_list *tmp;

	elem = ft_create_lst_elem(data);
	tmp = *list;
	if (!(*list))
		*list = elem;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		(tmp)->next = elem;
	}
}
