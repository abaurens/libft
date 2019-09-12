/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:18:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:14:21 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec2.h"

t_vec2	*init_vec2(t_vec2 *v, t_dbl__ x, t_dbl__ y)
{
	v->t = DBL;
	v->x = x;
	v->y = y;
	return (v);
}

t_vec2i	*init_vec2i(t_vec2i *v, t_int__ x, t_int__ y)
{
	v->t = INT;
	v->x = x;
	v->y = y;
	return (v);
}

t_vec2f	*init_vec2f(t_vec2f *v, t_flt__ x, t_flt__ y)
{
	v->t = FLT;
	v->x = x;
	v->y = y;
	return (v);
}

t_vec2l	*init_vec2l(t_vec2l *v, t_ldbl__ x, t_ldbl__ y)
{
	v->t = LDBL;
	v->x = x;
	v->y = y;
	return (v);
}
