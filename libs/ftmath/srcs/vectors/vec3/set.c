/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:18:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:49:12 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec3.h"

t_vec3	init_vec3(t_vec3 *p, t_dbl__ x, t_dbl__ y, t_dbl__ z)
{
	t_vec3	v;

	v.x = x;
	v.y = y;
	v.z = z;
	if (p)
		*p = v;
	return (v);
}

t_vec3i	init_vec3i(t_vec3i *p, t_int__ x, t_int__ y, t_int__ z)
{
	t_vec3i	v;

	v.x = x;
	v.y = y;
	v.z = z;
	if (p)
		*p = v;
	return (v);
}

t_vec3f	init_vec3f(t_vec3f *p, t_flt__ x, t_flt__ y, t_flt__ z)
{
	t_vec3f	v;

	v.x = x;
	v.y = y;
	v.z = z;
	if (p)
		*p = v;
	return (v);
}

t_vec3l	init_vec3l(t_vec3l *p, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z)
{
	t_vec3l	v;

	v.x = x;
	v.y = y;
	v.z = z;
	if (p)
		*p = v;
	return (v);
}
