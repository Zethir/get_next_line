/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 17:54:49 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/02 17:58:08 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*listbis;

	list = *alst;
	while (list)
	{
		listbis = list->next;
		del(list->content, list->content_size);
		free(list);
		list = listbis;
	}
	*alst = NULL;
}
