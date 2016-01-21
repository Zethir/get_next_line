/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:48:40 by cboussau          #+#    #+#             */
/*   Updated: 2015/11/24 12:02:40 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	int i;

	i = 0;
	while (n > 0 && src[i])
	{
		dst[i] = src[i];
		i++;
		--n;
	}
	while (n > 0)
	{
		dst[i] = '\0';
		i++;
		--n;
	}
	return (dst);
}
