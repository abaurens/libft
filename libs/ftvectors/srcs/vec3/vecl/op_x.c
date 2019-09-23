/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 12:56:47 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec3/t_vec3_t.h"

t_vec3l	v3l_add3(t_vec3l *v, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z)
{
	t_vec3l	r;

	r.x = v->x + x;
	r.y = v->y + y;
	r.z = v->z + z;
	return (r);
}

t_vec3l	v3l_sub3(t_vec3l *v, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z)
{
	t_vec3l	r;

	r.x = v->x - x;
	r.y = v->y - y;
	r.z = v->z - z;
	return (r);
}

t_vec3l	v3l_mul3(t_vec3l *v, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z)
{
	t_vec3l	r;

	r.x = v->x * x;
	r.y = v->y * y;
	r.z = v->z * z;
	return (r);
}
