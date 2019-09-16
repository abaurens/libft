/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:38:58 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3f	*v3f_add3(t_vec3f *v1, t_flt__ x, t_flt__ y, t_flt__ z)
{
	v1->x += x;
	v1->y += y;
	v1->z += z;
	return (v1);
}

t_vec3f	*v3f_sub3(t_vec3f *v1, t_flt__ x, t_flt__ y, t_flt__ z)
{
	v1->x -= x;
	v1->y -= y;
	v1->z -= z;
	return (v1);
}

t_vec3f	*v3f_mul3(t_vec3f *v1, t_flt__ x, t_flt__ y, t_flt__ z)
{
	v1->x *= x;
	v1->y *= y;
	v1->z *= z;
	return (v1);
}
