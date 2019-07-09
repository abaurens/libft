/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toklst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:51:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/09 21:39:10 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "ftregex.h"

t_token		*pop_tok(t_toklst *lst, t_token *tok)
{
	if (!tok)
		return (NULL);
	if (lst->edges[TAIL] == tok)
		lst->edges[TAIL] = tok->lnks[PREV];
	if (lst->edges[HEAD] == tok)
		lst->edges[HEAD] = tok->lnks[NEXT];
	if (tok->lnks[PREV])
		tok->lnks[PREV]->lnks[NEXT] = tok->lnks[NEXT];
	if (tok->lnks[NEXT])
		tok->lnks[NEXT]->lnks[PREV] = tok->lnks[PREV];
	tok->lnks[NEXT] = NULL;
	tok->lnks[PREV] = NULL;
	--lst->size;
	return (tok);
}

void		insert(t_toklst *lst, t_token *tok, t_lstpos pos)
{
	tok->lnks[!pos] = NULL;
	if (!(tok->lnks[pos] = lst->edges[pos]))
		lst->edges[!pos] = tok;
	else
		tok->lnks[pos]->lnks[!pos] = tok;
	lst->edges[pos] = tok;
	++lst->size;
}

t_token		*new_token(char c, t_toktpe type)
{
	t_token	*new;

	if (!(new = malloc(sizeof(t_token))))
		return (NULL);
	new->lnks[NEXT] = NULL;
	new->lnks[PREV] = NULL;
	new->type = type;
	new->c = c;
	new->priority = (type == OP ? get_priority(c) : 0);
	return (new);
}

char		tokenize(t_toklst *lst, const char *str, char end)
{
	bzero(lst, sizeof(t_toklst));
	while (str && *str && *str != end)
	{
		if (get_token(lst, str))
			return (-1);
		str += lst->edges[TAIL]->len;
	}
	return (0);
}
