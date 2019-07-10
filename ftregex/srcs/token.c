/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 15:51:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/10 18:14:29 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ftregex.h"
#include "ftlib.h"

int			get_priority(char c)
{
	if (c == '|')
		return (1);
	if (c == '+')
		return (2);
	return (0);
}

char		is_quantifiable(t_token *tok)
{
	return (tok->type != QUANT && tok->type != SCOPE_OPN);
}

t_token		*get_token(char const *str)
{
	t_token	*tok;

	if (!(tok = ft_memalloc(sizeof(t_token))))
		return (NULL);
	tok->len = 1;
	tok->c = *str;
	tok->type = UNKNOWN;
	return (tok);
}
