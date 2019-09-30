/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 08:29:53 by baurens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec4/t_vec4_t.h"

t_vec4	v4_add4(t_vec4 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z, t_dbl__ w)
{
	t_vec4	r;

	r.x = v->x + x;
	r.y = v->y + y;
	r.z = v->z + z;
	r.w = v->w + w;
	return (r);
}

t_vec4	v4_sub4(t_vec4 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z, t_dbl__ w)
{
	t_vec4	r;

	r.x = v->x - x;
	r.y = v->y - y;
	r.z = v->z - z;
	r.w = v->w - w;
	return (r);
}

t_vec4	v4_mul4(t_vec4 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z, t_dbl__ w)
{
	t_vec4	r;

	r.x = v->x * x;
	r.y = v->y * y;
	r.z = v->z * z;
	r.w = v->w * w;
	return (r);
}
