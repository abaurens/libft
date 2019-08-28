/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmd_reader.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 08:43:21 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/28 09:47:38 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ftio/line_editor.h"
#include "ftlib.h"
#include "ftio.h"

char	line_editor_reader(const int fd, char **buffer)
{
	uint32_t	i;
	char		display[MAX_CMD + 1];

	i = 0;
	*display = 0;
	write(1, "\033[s", 3);
	while (1)
	{
		if (read(fd, display + i, 1) < 0)
			return (1);
		if (display[i] == 27)
		{
			display[i] = '^';
			/*if (read(fd, buf + 1, 1) < 0)
				return (1);*/
			/*ft_printf("\\e%d\n", buf[1]);*/
		}
		display[++i] = 0;
		write(1, "\033[u", 3);
		write(1, "\033[0J", 4);
		write(1, display, i);
		if (display[i - 1] == '\n')
			break ;
	}
	display[--i] = 0;
	*buffer = NULL;
	/*
	*/
	*buffer = ft_strdup(display);
	return (0);
}
