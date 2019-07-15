/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   elementary_op.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 18:55:09 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/15 22:02:58 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftregex/nfa.h"
#include "ftlib.h"
#include <stdlib.h>

/*
**	concat the two NFAs together. This match first folowed by second
**		This op manages the classical successions of chars
**
**	RES_S->f_s=>f_e->sec_s=>sec_e->RES_E
*/

t_nfa	*nfa_concat(t_nfa *first, t_nfa *second)
{
	t_nfa	*res;

	if (!(res = ft_memalloc(sizeof(t_nfa))))
		return (NULL);
	add_epsilon(first->end, second->start);
	first->start->is_end = 0;
	res->start = first->start;
	res->end = second->end;
	ft_strcpy(res->name, first->name);
	ft_strcat(res->name, second->name);
	return (res);
}

/*
**	unify the two NFAs together. This match first OR second
**		This op manages the OR operator : [abc], (abc|def), etc
**
**		 /->fir_s=>fir_e-\
**	RES_S				  |->RES_E
**		 \->sec_s=>sec_e-/
*/

t_nfa	*nfa_union(t_nfa *first, t_nfa *second)
{
	t_nfa	*res;

	if (!(res = new_nfa()))
		return (NULL);
	add_epsilon(res->start, first->start);
	add_epsilon(res->start, second->start);
	add_epsilon(first->end, res->end);
	add_epsilon(second->end, res->end);
	second->end->is_end = 0;
	first->end->is_end = 0;
	res->name[0] = '(';
	ft_strcat(res->name, first->name);
	ft_strcat(res->name, "|");
	ft_strcat(res->name, second->name);
	ft_strcat(res->name, ")");
	return (res);
}

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

/*
**	once NFA operator. Makes the nfa able to repeat itself once it is passed
**		This op manages the + quantifier
**
** RES_S-+->nfa_s=>nfa_e->RES_E
**		  \__________|
*/

t_nfa	*nfa_once(t_nfa *nfa)
{
	t_nfa	*res;

	if (!(res = from_epsilon()))
		return (NULL);
	add_epsilon(res->start, nfa->start);
	add_epsilon(nfa->end, res->end);
	add_epsilon(nfa->end, nfa->start);
	res->name[0] = '(';
	ft_strcat(res->name, nfa->name);
	ft_strcat(res->name, "+)");
	return (res);
}
