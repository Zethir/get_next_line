/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/04 14:12:02 by cboussau          #+#    #+#             */
/*   Updated: 2016/01/04 14:55:50 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_realloc(char *ptr, int size)
{
	char *tmp;

	tmp = ptr;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(ptr) + size);
	ptr[ft_strlen(ptr) + size] = '\0';
	free(tmp);
	return (ptr);
}
