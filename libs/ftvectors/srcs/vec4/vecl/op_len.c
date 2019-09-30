/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 08:41:17 by baurens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec4/t_vec4_t.h"
#include "ftmath.h"

t_ldbl__	v4l_norm(t_vec4l *v)
{
	return (ft_sqrtl(v->x * v->x + v->y * v->y + v->z * v->z + v->w * v->w));
}

t_vec4l		v4l_normalize(t_vec4l *v)
{
	t_ldbl__	l;
	t_vec4l		r;

	if ((l = v4l_norm(v)) == 0.0L)
		return (*v);
	r.x = v->x / l;
	r.y = v->y / l;
	r.z = v->z / l;
	r.w = v->w / l;
	return (r);
}
