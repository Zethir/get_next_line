/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 14:46:19 by cboussau          #+#    #+#             */
/*   Updated: 2015/12/02 16:24:23 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_reverse(char *s)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	j = ft_strlen(s) - 1;
	while (i < j)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i++;
		j--;
	}
}

static char	*ft_nb(int n, char *nb)
{
	int i;
	int j;

	i = 0;
	j = n;
	n = n * 10;
	if (j < 0)
		n = -n;
	while ((n /= 10) > 0)
	{
		nb[i] = n % 10 + '0';
		i++;
	}
	if (j < 0)
		nb[i++] = '-';
	nb[i++] = '\0';
	return (nb);
}

char		*ft_itoa(int n)
{
	char	*nbr;
	int		count;
	int		tmp;

	count = 0;
	tmp = n;
	while ((tmp /= 10) > 0)
		count++;
	nbr = (char *)malloc(sizeof(char) * (count + 1));
	if (!nbr)
		return (NULL);
	if (n == 0)
		nbr = "0";
	else if (n == -2147483648)
		nbr = "-2147483648";
	else
		ft_reverse(ft_nb(n, nbr));
	return (nbr);
}
