/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 15:43:59 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/10 18:31:25 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "ftregex.h"
#include "ftlib.h"

static char		need_explicit_op(t_token *t1, t_token *t2)
{
	if (!t1 || t1->type == OP || t1->type == SCOPE_OPN)
		return (0);
	if (t2->type == OP || t2->type == SCOPE_CLS || t2->type == QUANT)
		return (0);
	while (t1)
	{
		if (t1->type == SCOPE_OPN && t1->c == '[')
			return ('|');
		t1 = t1->lnks[PREV];
	}
	return ('+');
}

static t_toktpe	except(char c, char in_or, t_toktpe type)
{
	if (in_or && (type != SCOPE_CLS || c != ']'))
		return (CHAR);
	if (type == SCOPE_CLS && c == ']' && !in_or)
		return (CHAR);
	return (type);
}

static t_toktpe	get_type(t_token *tok, t_toklst *lst, char in_or)
{
	register int	i;
	int				cmpt;
	t_token			*cur;
	const char		*check[] = {RE_SCP_OPN, RE_SCP_CLS, RE_SPC, RE_QUANT, NULL};
	const t_toktpe	res[] = {SCOPE_OPN, SCOPE_CLS, SPEC, QUANT, CHAR};

	i = 0;
	cmpt = 0;
	cur = lst->edges[TAIL];
	if (tok->type != UNKNOWN)
		return (tok->type);
	while (check[i] && !ft_strchr(check[i], tok->c))
		++i;
	if (res[i] == CHAR && tok->c == RE_C_OR)
	{
		while (cur)
		{
			cmpt += (cur->type == SCOPE_CLS && cur->c == *RE_SCP_CLS);
			if ((cmpt -= (cur->type == SCOPE_OPN && cur->c == *RE_SCP_OPN)) < 0)
				return (except(tok->c, in_or, OP));
			cur = cur->lnks[PREV];
		}
	}
	return (except(tok->c, in_or, res[i]));
}

static char		escape(t_token *t, const char *str)
{
	char	*tmp;

	if (t->c == RE_C_ESC)
	{
		if ((tmp = ft_strchr(RE_ESC, *++str)) != NULL)
			t->c = RE_ESC_RL[tmp - RE_ESC];
		else
			t->c = *str;
		t->type = (ft_strchr(RE_SHORT, *str) ? SHORT : CHAR);
		return (1);
	}
	return (0);
}

char			tokenize(t_toklst *lst, const char *str, char end)
{
	t_token	*toks[2];
	char	in_or;

	in_or = 0;
	ft_bzero(lst, sizeof(t_toklst));
	while (str && *str && *str != end)
	{
		if (!(*toks = get_token(str)))
			return (-2);
		str += escape(*toks, str);
		if (((*toks)->type = get_type(*toks, lst, in_or)) == QUANT
			&& !is_quantifiable(lst->edges[TAIL]))
			return (ft_freturn(*toks, -1));
		in_or &= ((*toks)->type != SCOPE_CLS || (*toks)->c != ']');
		if (need_explicit_op(lst->edges[TAIL], *toks))
		{
			if (!(toks[1] = new_token(in_or ? RE_C_OR : RE_C_AND, OP)))
				return (-2);
			insert(lst, toks[1], TAIL);
		}
		in_or |= ((*toks)->type == SCOPE_OPN && (*toks)->c == '[');
		insert(lst, *toks, TAIL);
		str += (*toks)->len;
	}
	return (0);
}
