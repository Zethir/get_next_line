/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cboussau <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/06 15:47:46 by cboussau          #+#    #+#             */
/*   Updated: 2016/01/14 16:14:56 by cboussau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	*line;

	line = NULL;
	if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			return (1);
		ret = 1;
		while (ret == 1)
		{
			ret = get_next_line(fd, &line);
			printf("%d || %s\n", ret, line);
			free(line);
		}
		if (ret == 0)
		{
			if (line && *line)
				printf("line is not empty\n");
		}
		if (ret == -1)
			printf("error\n");
	}
	return (0);
}
