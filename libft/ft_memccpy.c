/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:14:36 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/02 16:22:47 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (i < n && (s[i] != (unsigned char)c))
	{
		d[i] = s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
	{
		d[i] = s[i];
		i++;
		return (d + i);
	}
	else
		return (NULL);
}
