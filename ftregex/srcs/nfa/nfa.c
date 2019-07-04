/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nfa.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 15:04:02 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/04 19:29:31 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftregex/nfa.h"
#include <stdlib.h>

t_nfa	*new_nfa(void)
{
	t_nfa	*res;

	if (!(res = malloc(sizeof(t_nfa))))
		return (NULL);
	if ((res->end = create_state(1)))
	{
		if ((res->start = create_state(0)))
			return (res);
		free(res->end);
	}
	free(res);
	return (NULL);
}

t_nfa	*from_epsilon(void)
{
	t_nfa	*res;

	if (!(res = new_nfa()))
		return (NULL);
	add_epsilon(res->start, res->end);
	return (res);
}

t_nfa	*from_symbol(char symbol)
{
	t_nfa	*res;

	if (!(res = new_nfa()))
		return (NULL);
	add_symbol(res->start, res->end, symbol);
	return (NULL);
}
