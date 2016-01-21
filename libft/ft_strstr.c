/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:18:24 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/04 17:36:08 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	int i;
	int j;

	i = 0;
	j = 0;
	if (s2[j] == '\0')
		return ((char *)s1);
	if (s1[i] && s2[j])
	{
		while (s1[i])
		{
			while (s2[j] == s1[i + j])
			{
				if (s2[j + 1] == '\0')
					return ((char *)s1 + i);
				j++;
			}
			i++;
		}
	}
	return (NULL);
}
