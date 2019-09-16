/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 12:19:46 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmath/vectors/t_vec3_t.h"
#include "ftmath.h"

t_dbl__		vec3i_norm__(t_vec3i *v)
{
	return (ft_sqrt(v->x * v->x + v->y * v->y + v->z * v->z));
}

t_flt__		vec3i_normf__(t_vec3i *v)
{
	return (ft_sqrtf(v->x * v->x + v->y * v->y + v->z * v->z));
}

t_ldbl__	vec3i_norml__(t_vec3i *v)
{
	return (ft_sqrtl(v->x * v->x + v->y * v->y + v->z * v->z));
}

t_vec3i		*vec3i_normalize__(t_vec3i *v)
{
	t_dbl__	l;

	if ((l = vec3i_norm__(v)) == 0.0)
		return (NULL);
	v->x /= l;
	v->y /= l;
	v->z /= l;
	return (v);
}
