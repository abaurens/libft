/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 12:57:00 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec3/t_vec3_t.h"

t_vec3l	v3l_add1(t_vec3l *v, t_ldbl__ i)
{
	t_vec3l	r;

	r.x = v->x + i;
	r.y = v->y + i;
	r.z = v->z + i;
	return (r);
}

t_vec3l	v3l_sub1(t_vec3l *v, t_ldbl__ i)
{
	t_vec3l	r;

	r.x = v->x - i;
	r.y = v->y - i;
	r.z = v->z - i;
	return (r);
}

t_vec3l	v3l_mul1(t_vec3l *v, t_ldbl__ i)
{
	t_vec3l	r;

	r.x = v->x * i;
	r.y = v->y * i;
	r.z = v->z * i;
	return (r);
}

t_vec3l	v3l_div1(t_vec3l *v, t_ldbl__ i)
{
	t_vec3l	r;

	r.x = v->x / i;
	r.y = v->y / i;
	r.z = v->z / i;
	return (r);
}
