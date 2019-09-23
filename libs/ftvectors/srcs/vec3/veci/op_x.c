/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 12:55:49 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec3/t_vec3_t.h"

t_vec3i	v3i_add3(t_vec3i *v, t_int__ x, t_int__ y, t_int__ z)
{
	t_vec3i	r;

	r.x = v->x + x;
	r.y = v->y + y;
	r.z = v->z + z;
	return (r);
}

t_vec3i	v3i_sub3(t_vec3i *v, t_int__ x, t_int__ y, t_int__ z)
{
	t_vec3i	r;

	r.x = v->x - x;
	r.y = v->y - y;
	r.z = v->z - z;
	return (r);
}

t_vec3i	v3i_mul3(t_vec3i *v, t_int__ x, t_int__ y, t_int__ z)
{
	t_vec3i	r;

	r.x = v->x * x;
	r.y = v->y * y;
	r.z = v->z * z;
	return (r);
}
