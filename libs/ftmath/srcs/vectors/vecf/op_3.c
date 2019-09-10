/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 15:32:30 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3f	*vec3f_add3__(t_vec3f *v1, t_big x, t_big y, t_big z)
{
	v1->x += (t_flt)x;
	v1->y += (t_flt)y;
	v1->z += (t_flt)z;
	return (v1);
}

t_vec3f	*vec3f_sub3__(t_vec3f *v1, t_big x, t_big y, t_big z)
{
	v1->x -= (t_flt)x;
	v1->y -= (t_flt)y;
	v1->z -= (t_flt)z;
	return (v1);
}

t_vec3f	*vec3f_mul3__(t_vec3f *v1, t_big x, t_big y, t_big z)
{
	v1->x *= (t_flt)x;
	v1->y *= (t_flt)y;
	v1->z *= (t_flt)z;
	return (v1);
}
