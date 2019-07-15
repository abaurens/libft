/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftregex.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:57:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/11 22:07:08 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTREGEX_H
# define FTREGEX_H

# include <string.h>
# include "ftregex/ft_nfa.h"

# define RE_SCP_OPN	"(["
# define RE_SCP_CLS	")]"
# define RE_QUANT	"*+?{}"
# define RE_SPC		".^$"
# define RE_SHORT	"sSdDwW"
# define RE_ESC_RL	"\n\t\r"
# define RE_ESC		"ntr0"

# define RE_C_RNG	'-'
# define RE_C_NOT	'^'
# define RE_C_AND	'+'
# define RE_C_OR	'|'
# define RE_C_ESC	'\\'
# define RE_C_SEP	','

/*
**	\s = whitespaces		[\r\n\t\f\v ]
**	\S = non-whitespaces	[^\r\n\t\f\v ]
**	\d = digit char			[0-9]
**	\D = non-digit char		[^0-9]
**	\w = word char			[a-zA-Z0-9_]
**	\W = non-word char		[^a-zA-Z0-9_]
**
**	\n = new line '\n'
**	\t = tab '\t'
**	\r = cariage return '\r'
**	\0 = null char '\0'
*/

typedef struct s_regex	t_regex;
typedef struct s_token	t_token;

typedef enum	e_toktpe
{
	OP,
	CHAR,
	SPEC,
	QUANT,
	SHORT,
	SCOPE_OPN,
	SCOPE_CLS,
	UNKNOWN
}				t_toktpe;

typedef enum	e_lstpos
{
	HEAD,
	TAIL
}				t_lstpos;

typedef enum	e_lstlnk
{
	NEXT,
	PREV
}				t_lstlnk;

struct			s_token
{
	t_token		*next;
	t_token		*prev;
	t_toktpe	type;
	int			priority;
	char		c;
	char		*s;
	size_t		len;
};

typedef struct	s_toklst
{
	t_token		*head;
	t_token		*tail;
	size_t		size;
}				t_toklst;

/*
**	abcd[[[abcd]def]ghi]
*/

/*
**	tokenize.c
*/
char			tokenize(t_toklst *lst, const char *str, char end);

/*
**	regex.c
*/
t_regex			*ft_regex(const char *str);

/*
**	token.c
*/
int				get_priority(char c);
char			is_operand(t_token *tok);
t_token			*get_token(const char *str);
char			is_quantifiable(t_token *tok);

/*
**	toklst.c
*/
void			clear_toklst(t_toklst *lst);
t_token			*new_token(char c, t_toktpe type);
t_token			*pop_tok(t_toklst *lst, t_token *tok);
void			insert_after(t_toklst *lst, t_token *tok, t_token *pos);
void			insert_before(t_toklst *lst, t_token *tok, t_token *pos);

/*
**	to_postfix.c
*/
void			to_postfix(t_toklst *lst);

/*
**	expantion.c
*/
void			expend_shortcut(t_toklst *lst);

#endif
