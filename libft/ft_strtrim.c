/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 17:08:30 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/01 18:56:02 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t i;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (ft_isspace(s[i]) == 1)
		i++;
	while (s[k])
	{
		if (ft_isspace(s[k]) == 0)
		{
			k++;
			j = k;
		}
		else
			k++;
	}
	if (j == 0)
		return (ft_strdup(""));
	return (ft_strsub(s, i, j - i));
}
