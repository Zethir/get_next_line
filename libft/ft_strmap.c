/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 11:44:15 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/01 14:00:02 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*s2;
	int		i;

	i = 0;
	s2 = ft_strdup(s);
	if (s2 == NULL)
		return (NULL);
	if (s != NULL && f != NULL)
	{
		while (s[i])
		{
			s2[i] = (*f)(s[i]);
			i++;
		}
	}
	return (s2);
}
