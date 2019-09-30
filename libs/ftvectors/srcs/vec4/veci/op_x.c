/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 08:39:45 by baurens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec4/t_vec4_t.h"

t_vec4i	v4i_add4(t_vec4i *v, t_int__ x, t_int__ y, t_int__ z, t_int__ w)
{
	t_vec4i	r;

	r.x = v->x + x;
	r.y = v->y + y;
	r.z = v->z + z;
	r.w = v->w + w;
	return (r);
}

t_vec4i	v4i_sub4(t_vec4i *v, t_int__ x, t_int__ y, t_int__ z, t_int__ w)
{
	t_vec4i	r;

	r.x = v->x - x;
	r.y = v->y - y;
	r.z = v->z - z;
	r.w = v->w - w;
	return (r);
}

t_vec4i	v4i_mul4(t_vec4i *v, t_int__ x, t_int__ y, t_int__ z, t_int__ w)
{
	t_vec4i	r;

	r.x = v->x * x;
	r.y = v->y * y;
	r.z = v->z * z;
	r.w = v->w * w;
	return (r);
}
