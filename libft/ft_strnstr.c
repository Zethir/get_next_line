/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 16:41:52 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/01 09:53:23 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	while (s1[i] && n != 0)
	{
		while (s1[i + j] == s2[j] && s1[i + j] != '\0' && n >= j)
			j++;
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		j = 0;
		n--;
		i++;
	}
	return (NULL);
}
