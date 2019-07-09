/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftregex.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:57:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/09 21:43:57 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTREGEX_H
# define FTREGEX_H

# include <string.h>
# include "ftregex/ft_nfa.h"

# define RE_SCP_OPN	"(["
# define RE_SCP_CLS	")]"
# define RE_QUANT	"*+?{}"
# define RE_OPS		"|"
# define RE_SPC		".^$"

# define RE_C_ESC	'\\'
# define RE_C_SEP	','

typedef struct s_regex	t_regex;
typedef struct s_token	t_token;

typedef enum	e_toktpe
{
	OP,
	CHAR,
	SPECIAL,
	SCOPE_OPEN,
	SCOPE_CLOSE,
	QUANTIFIER,
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
	t_token		*lnks[2];
	t_toktpe	type;
	int			priority;
	char		c;
	size_t		len;
};

typedef struct	s_toklst
{
	t_token		*edges[2];
	size_t		size;
}				t_toklst;

/*
**	abcd[[[abcd]def]ghi]
*/
char			tokenize(t_toklst *lst, const char *str, char end);

t_regex			*ft_regex(const char *str);

/*
**	token.c
*/
char			get_token(t_toklst *lst, const char *str);
int				get_priority(char c);

/*
**	toklst.c
*/
t_token			*new_token(char c, t_toktpe type);
t_token			*pop_tok(t_toklst *lst, t_token *tok);
void			insert(t_toklst *lst, t_token *tok, t_lstpos pos);
/*char			insert_front(t_toklst *lst, t_token *tok);
char			insert_back(t_toklst *lst, t_token *tok);*/

#endif
