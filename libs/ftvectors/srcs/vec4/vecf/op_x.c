/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 08:35:14 by baurens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec4/t_vec4_t.h"

t_vec4f	v4f_add4(t_vec4f *v, t_flt__ x, t_flt__ y, t_flt__ z, t_flt__ w)
{
	t_vec4f	r;

	r.x = v->x + x;
	r.y = v->y + y;
	r.z = v->z + z;
	r.w = v->w + w;
	return (r);
}

t_vec4f	v4f_sub4(t_vec4f *v, t_flt__ x, t_flt__ y, t_flt__ z, t_flt__ w)
{
	t_vec4f	r;

	r.x = v->x - x;
	r.y = v->y - y;
	r.z = v->z - z;
	r.w = v->w - w;
	return (r);
}

t_vec4f	v4f_mul4(t_vec4f *v, t_flt__ x, t_flt__ y, t_flt__ z, t_flt__ w)
{
	t_vec4f	r;

	r.x = v->x * x;
	r.y = v->y * y;
	r.z = v->z * z;
	r.w = v->w * w;
	return (r);
}
