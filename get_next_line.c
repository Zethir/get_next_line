/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/14 16:08:11 by cboussau          #+#    #+#             */
/*   Updated: 2016/01/25 16:34:49 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*addl(char **line, char *buffer, int i, char **rest)
{
	int			j;
	char		*tmp;
	int			size;
	char		*temp;

	j = i;
	tmp = *line;
	size = 0;
	if (line[0] == '\0')
		*line = ft_strsub(buffer, 0, i);
	else
	{
		temp = ft_strsub(buffer, 0, i);
		*line = ft_strjoin(*line, temp);
		free(temp);
	}
	free(tmp);
	while (buffer[j++] != '\0')
		size++;
	if (size)
		*rest = ft_strsub(buffer, i + 1, ft_strlen(buffer + i + 1));
	return (*line);
}

static int	find_line(int const fd, char **line, char **rest)
{
	char		bf[BUFF_SIZE + 1];
	int			i;
	int			ret;

	ft_bzero(bf, BUFF_SIZE + 1);
	i = 0;
	ret = read(fd, bf, BUFF_SIZE);
	if (ret == 0)
	{
		if (*rest)
			ft_strdel(rest);
		return (ft_strlen(*line) != 0);
	}
	else if (ret == -1)
		return (-1);
	if (bf[0] == '\n' && *line[0] == '\0' && (*line = addl(line, bf, i, rest)))
		return (1);
	while (bf[i] != '\0')
	{
		if (bf[i] == '\n' && (*line = addl(line, bf, i, rest)))
			return (1);
		i++;
	}
	*line = addl(line, bf, i, rest);
	return (find_line(fd, line, rest));
}

static int	check_n(char **rest, char **line, int i)
{
	char		*tmp;
	int			j;

	tmp = *rest;
	while ((*rest)[i] != '\0')
	{
		if ((*rest)[i] == '\n')
		{
			if (*line)
				ft_strdel(line);
			*line = ft_strsub(*rest, 0, i);
			j = i + 1;
			while ((*rest)[j] != '\0')
				j++;
			*rest = ft_strsub(*rest, i + 1, j);
			free(tmp);
			return (1);
		}
		i++;
	}
	return (-2);
}

static int	check_rest(char **rest, char **line, int const fd)
{
	int			i;
	int			ret;

	i = 0;
	if ((*rest) == NULL)
		return (find_line(fd, line, rest));
	else
	{
		if ((ret = check_n(rest, line, i)) >= 0)
			return (ret);
		else
		{
			if (*line)
				ft_strdel(line);
			*line = ft_strdup(*rest);
			ft_strdel(rest);
			return (find_line(fd, line, rest));
		}
	}
}

int			get_next_line(int const fd, char **line)
{
	static char *rest;

	if (BUFF_SIZE < 0)
		return (-1);
	if (line == NULL)
		return (-1);
	*line = ft_strnew(0);
	return (check_rest(&rest, line, fd));
}
