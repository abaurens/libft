/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:18:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:48:02 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec3.h"

t_vec3	*init_vec3(t_vec3 *v, t_dbl x, t_dbl y, t_dbl z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

t_vec3i	*init_vec3i(t_vec3i *v, t_int x, t_int y, t_int z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

t_vec3f	*init_vec3f(t_vec3f *v, t_flt x, t_flt y, t_flt z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}

t_vec3l	*init_vec3l(t_vec3l *v, t_ldbl x, t_ldbl y, t_ldbl z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}
