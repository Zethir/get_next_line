/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 15:20:13 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/02 15:10:35 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char a;

	a = (char)c;
	while (*s)
	{
		if (a == *s)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && a == '\0')
		return ((char *)s);
	return (NULL);
}
