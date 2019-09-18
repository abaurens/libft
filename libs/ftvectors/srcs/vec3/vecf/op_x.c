/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 12:50:15 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors/vec3/t_vec3_t.h"

t_vec3f	v3f_add3(t_vec3f *v, t_flt__ x, t_flt__ y, t_flt__ z)
{
	t_vec3f	r;

	r.x = v->x + x;
	r.y = v->y + y;
	r.z = v->z + z;
	return (r);
}

t_vec3f	v3f_sub3(t_vec3f *v, t_flt__ x, t_flt__ y, t_flt__ z)
{
	t_vec3f	r;

	r.x = v->x - x;
	r.y = v->y - y;
	r.z = v->z - z;
	return (r);
}

t_vec3f	v3f_mul3(t_vec3f *v, t_flt__ x, t_flt__ y, t_flt__ z)
{
	t_vec3f	r;

	r.x = v->x * x;
	r.y = v->y * y;
	r.z = v->z * z;
	return (r);
}
