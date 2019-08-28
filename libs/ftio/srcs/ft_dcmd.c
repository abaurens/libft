/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dcmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 21:41:43 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/28 08:48:53 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "ftio/line_editor.h"
#include "ftio.h"

#ifndef FT_DISABLE_TERMCAPS

int		init_term(t_term *term)
{
	char	*term_name;

	if ((term_name = getenv("TERM")) == NULL)
		return(1);
	if (tgetent(NULL, term_name) != 1)
		return (1);
	if (tcgetattr(0, term) == -1)
		return (1);
	term->c_lflag &= ~ICANON;
	term->c_lflag &= ~ECHO;
	term->c_cc[VMIN] = 1;
	term->c_cc[VTIME] = 0;
	if (tcsetattr(0, TCSADRAIN, term) == -1)
		return (1);
	return (0);
}

int		reset_term(t_term *term)
{
	if (tcgetattr(0, term) == -1)
		return (-1);
	term->c_lflag = ICANON | ECHO;
	if (tcsetattr(0, 0, term) == -1)
		return (-1);
	return (0);
}

#endif

char	ft_dcmd(const int fd)
{
	t_term	term;
	char	*buff;

#ifndef FT_DISABLE_TERMCAPS
	if (isatty(fd) && !init_term(&term))
	{
		ft_printf("reading in termcaps mode\n");
		line_editor_reader(fd, &buff);
	}
	else
#else
	((void)term);
#endif
	line_editor_reader(fd, &buff);
	ft_printf("line: '%s'\n", buff);
	//free(buff);
#ifndef	FT_DISABLE_TERMCAPS
	reset_term(&term);
#endif
	return (0);
}
