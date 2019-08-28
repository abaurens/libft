/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   line_editor.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 07:12:23 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/28 19:32:49 by abaurens         ###   ########.fr       */
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

typedef struct	s_escape_dispatch
{
	char		c;
	char		(*func)(const int fd, char buf[MAX_CMD + 1], uint32_t *i);
}				t_escape_dispatch;

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

char	*ft_readline(const int fd, const char *prompt);

int		init_term(t_term *term);
char	line_editor_reader(const int fd, char **ret);
char	esc_sequence(const int fd, char bf[MAX_CMD + 1], uint32_t *i);

char	esc_up_arrow(const int fd, char buf[MAX_CMD + 1], uint32_t *i);
char	esc_down_arrow(const int fd, char buf[MAX_CMD + 1], uint32_t *i);
char	esc_left_arrow(const int fd, char buf[MAX_CMD + 1], uint32_t *i);
char	esc_right_arrow(const int fd, char buf[MAX_CMD + 1], uint32_t *i);
char	esc_end_key(const int fd, char buf[MAX_CMD + 1], uint32_t *i);
char	esc_begin_key(const int fd, char buf[MAX_CMD + 1], uint32_t *i);

#endif
