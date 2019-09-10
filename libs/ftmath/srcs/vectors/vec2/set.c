/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:18:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:48:42 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec2.h"

t_vec2	*init_vec2(t_vec2 *v, t_dbl x, t_dbl y)
{
	v->x = x;
	v->y = y;
	return (v);
}

t_vec2i	*init_vec2i(t_vec2i *v, t_int x, t_int y)
{
	v->x = x;
	v->y = y;
	return (v);
}

t_vec2f	*init_vec2f(t_vec2f *v, t_flt x, t_flt y)
{
	v->x = x;
	v->y = y;
	return (v);
}

t_vec2l	*init_vec2l(t_vec2l *v, t_ldbl x, t_ldbl y)
{
	v->x = x;
	v->y = y;
	return (v);
}
