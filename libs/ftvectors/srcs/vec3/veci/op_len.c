/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 16:39:33 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors/vec3/t_vec3_t.h"
#include "ftmath.h"

t_dbl__		v3i_norm(t_vec3i *v)
{
	return (ft_sqrt(v->x * v->x + v->y * v->y + v->z * v->z));
}

t_flt__		v3i_normf(t_vec3i *v)
{
	return (ft_sqrtf(v->x * v->x + v->y * v->y + v->z * v->z));
}

t_ldbl__	v3i_norml(t_vec3i *v)
{
	return (ft_sqrtl(v->x * v->x + v->y * v->y + v->z * v->z));
}

t_vec3i		v3i_normalize(t_vec3i *v)
{
	t_dbl__	l;
	t_vec3i	r;

	if ((l = v3i_norm(v)) == 0.0)
		return (*v);
	r.x = v->x / l;
	r.y = v->y / l;
	r.z = v->z / l;
	return (r);
}
