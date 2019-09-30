/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 08:41:40 by baurens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec4/t_vec4_t.h"

t_vec4l	v4l_add4(t_vec4l *v, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z, t_ldbl__ w)
{
	t_vec4l	r;

	r.x = v->x + x;
	r.y = v->y + y;
	r.z = v->z + z;
	r.w = v->w + w;
	return (r);
}

t_vec4l	v4l_sub4(t_vec4l *v, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z, t_ldbl__ w)
{
	t_vec4l	r;

	r.x = v->x - x;
	r.y = v->y - y;
	r.z = v->z - z;
	r.w = v->w - w;
	return (r);
}

t_vec4l	v4l_mul4(t_vec4l *v, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z, t_ldbl__ w)
{
	t_vec4l	r;

	r.x = v->x * x;
	r.y = v->y * y;
	r.z = v->z * z;
	r.w = v->w * w;
	return (r);
}
