/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   toklst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:51:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/10 21:16:10 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <strings.h>
#include "ftregex.h"
#include "ftlib.h"
#include "ftio.h"

void		clear_toklst(t_toklst *lst)
{
	int		i;

	while (lst->size > 1)
	{

		i = 0;
		while (i < 2)
		{
			if (lst->size > 1 && (lst->edges[i] = lst->edges[i]->lnks[i]))
			{
				free(lst->edges[i]->lnks[!i]->s);
				free(lst->edges[i]->lnks[!i]);
				lst->size--;
			}
			++i;
		}
	}
	free(lst->edges[HEAD]->s);
	free(lst->edges[HEAD]);
	ft_bzero(lst, sizeof(t_toklst));
}

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

	if (!(new = ft_memalloc(sizeof(t_token))))
		return (NULL);
	new->c = c;
	new->type = type;
	new->priority = (type == OP ? get_priority(c) : 0);
	return (new);
}
