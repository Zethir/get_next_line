/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 12:52:52 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/01 14:00:14 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	i = 0;
	s2 = ft_strdup(s);
	if (s2 == NULL)
		return (NULL);
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			s2[i] = (*f)(i, s[i]);
			i++;
		}
	}
	return (s2);
}
