/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 11:46:41 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors/vec3/t_vec3_t.h"

t_vec3	v3_add3(t_vec3 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z)
{
	t_vec3	r;

	r.x = v->x + x;
	r.y = v->y + y;
	r.z = v->z + z;
	return (r);
}

t_vec3	v3_sub3(t_vec3 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z)
{
	t_vec3	r;

	r.x = v->x - x;
	r.y = v->y - y;
	r.z = v->z - z;
	return (r);
}

t_vec3	v3_mul3(t_vec3 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z)
{
	t_vec3	r;

	r.x = v->x * x;
	r.y = v->y * y;
	r.z = v->z * z;
	return (r);
}
