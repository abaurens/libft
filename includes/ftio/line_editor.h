/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_editor.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 07:12:23 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/28 09:25:19 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINE_EDITOR_H
# define LINE_EDITOR_H

# include <term.h>
# include <termios.h>
# include <inttypes.h>
# include <sys/ioctl.h>

# define MAX_CMD	2097152

/*# define FT_DISABLE_TERMCAPS*/

# ifdef FT_DISABLE_TERMCAPS

#  define FT_TERM_TYPE	uint32_t
#  define FT_WINS_TYPE	uint32_t

# else

#  define FT_TERM_TYPE	struct termios
#  define FT_WINS_TYPE	struct winsize

# endif

typedef FT_TERM_TYPE	t_term;
typedef FT_WINS_TYPE	t_winsize;

# undef FT_TERM_TYPE
# undef FT_WINS_TYPE

int		init_term(t_term *term);
char	line_editor_reader(const int fd, char **buffer);

#endif
