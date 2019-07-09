/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:51:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/09 21:38:10 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ftregex.h"

static t_toktpe	get_token_type(char c)
{
	if (strchr(RE_OPS, c) != NULL)
		return (OP);
	if (strchr(RE_SPC, c) != NULL)
		return (SPECIAL);
	if (strchr(RE_QUANT, c) != NULL)
		return (QUANTIFIER);
	if (strchr(RE_SCP_OPN, c) != NULL)
		return (SCOPE_OPEN);
	if (strchr(RE_SCP_CLS, c) != NULL)
		return (SCOPE_CLOSE);
	return (CHAR);
}

int				get_priority(char c)
{
	if (c == '|')
		return (1);
	if (c == '+')
		return (2);
	return (0);
}

char			get_token(t_toklst *lst, const char *str)
{
	t_token		*tok;

	if (!(tok = malloc(sizeof(t_token))))
		return (-1);
	tok->len = 1;
	tok->c = *str;
	tok->priority = 0;
	if ((tok->type = get_token_type(tok->c)) == QUANTIFIER
		&& tok->c == '{')
	{
		while (*str && *str != '}')
		{
			tok->len++;
			str++;
		}
		tok->c = '@';
	}
	if (tok->type == OP)
		tok->priority = get_priority(tok->c);
	insert(lst, tok, TAIL);
	return (0);
}
