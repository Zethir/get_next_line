/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:13:19 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/02 18:34:46 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*tmp;
	t_list	*lstnew;
	t_list	*res;

	lstnew = NULL;
	while (lst)
	{
		tmp = f(lst);
		if (!lstnew)
		{
			lstnew = tmp;
			res = lstnew;
			lstnew->next = NULL;
		}
		else
		{
			lstnew->next = tmp;
			tmp->next = NULL;
			lstnew = lstnew->next;
		}
		lst = lst->next;
	}
	return (res);
}
