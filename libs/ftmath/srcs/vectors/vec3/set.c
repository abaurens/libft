/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:18:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:14:20 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec3.h"

t_vec3	*init_vec3(t_vec3 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z)
{
	v->t = DBL | VEC3;
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

t_vec3i	*init_vec3i(t_vec3i *v, t_int__ x, t_int__ y, t_int__ z)
{
	v->t = INT | VEC3;
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

t_vec3f	*init_vec3f(t_vec3f *v, t_flt__ x, t_flt__ y, t_flt__ z)
{
	v->t = FLT | VEC3;
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

t_vec3l	*init_vec3l(t_vec3l *v, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z)
{
	v->t = LDBL | VEC3;
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}
