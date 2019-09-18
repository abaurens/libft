/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_readline.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:39:42 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 11:49:57 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftio.h"
#include "ftlib.h"

void	test_readline(void)
{
	char	*line;
	char	loop;

	loop = 1;
	while (loop)
	{
		if (!(line = ft_readline("21sh $>")))
			continue;
		if (!(line))
			loop = 0;
		if (ft_strequ(line, "exit"))
			loop = 0;
		else
			ft_printf("line : '%s'\n", line);
		free(line);
	}
}
