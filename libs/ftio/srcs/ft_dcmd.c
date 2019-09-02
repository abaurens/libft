/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dcmd.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 21:41:43 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/02 05:52:43 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "ftio/line_editor.h"
#include "ftlib.h"
#include "ftio.h"

#ifndef FT_DISABLE_TERMCAPS

int		init_term(t_term *term)
{
	if (tcgetattr(0, term) == -1)
		return (1);
	term->c_lflag &= ~ICANON;
	term->c_lflag &= ~ECHO;
	term->c_cc[VMIN] = 1;
	term->c_cc[VTIME] = 0;
	/*term->c_lflag &= IEXTEN;*/
	if (tcsetattr(0, TCSADRAIN, term) == -1)
		return (1);
	write(1, "\033[?1l", 5);
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

char	ft_dcmd(const int fd)
{
	t_term	term;
	char	*buff;

	(void)fd;
	if (isatty(fd) && !init_term(&term))
		buff = ft_readline(fd, "21sh $> ");
	else
		buff = readline("22sh $> ");
		/*gnl(fd, &buff);*/
	ft_printf("line:  '%s'\n", buff);
	if (!buff || ft_strcmp(buff, "exit") == 0)
		return (ft_freturn(buff, 1));
	free(buff);
	reset_term(&term);
	return (0);
}

#else

char	ft_dcmd(const int fd)
{
	char	*buff;

	gnl(fd, &buff);
	ft_printf("line: '%s'\n", buff);
	free(buff);
	return (0);
}

#endif
