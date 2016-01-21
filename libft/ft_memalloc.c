/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 09:34:47 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/02 16:24:51 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = NULL;
	s = (unsigned char *)malloc(sizeof(void) * size);
	if (s == NULL)
		return (NULL);
	while (size > 0)
	{
		s[i] = 0;
		i++;
		size--;
	}
	return ((void *)s);
}
