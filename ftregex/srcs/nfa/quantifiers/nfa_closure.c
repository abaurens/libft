/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nfa_closure.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 22:12:19 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/15 22:12:24 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftregex/nfa.h"
#include "ftlib.h"
#include <stdlib.h>

/*
**	closure NFA operator. Makes this NFA able to repeat itself
**		This op manages the * quantifier
**
**	RES_S----------------\
**		\				  |->RES_E
**	     \->nfa_s=>nfa_e-/
**		  \__________|
*/

t_nfa	*nfa_closure(t_nfa *nfa)
{
	t_nfa	*res;

	if (!(res = from_epsilon()))
		return (NULL);
	add_epsilon(res->start, nfa->start);
	add_epsilon(nfa->end, res->end);
	add_epsilon(nfa->end, nfa->start);
	res->name[0] = '(';
	ft_strcat(res->name, nfa->name);
	ft_strcat(res->name, "*)");
	return (res);
}
