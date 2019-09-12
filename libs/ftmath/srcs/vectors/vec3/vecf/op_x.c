/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 16:17:13 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3f	*vec3f_add3__(t_vec3f *v1, t_big__ x, t_big__ y, t_big__ z)
{
	v1->x += (t_flt__)x;
	v1->y += (t_flt__)y;
	v1->z += (t_flt__)z;
	return (v1);
}

t_vec3f	*vec3f_sub3__(t_vec3f *v1, t_big__ x, t_big__ y, t_big__ z)
{
	v1->x -= (t_flt__)x;
	v1->y -= (t_flt__)y;
	v1->z -= (t_flt__)z;
	return (v1);
}

t_vec3f	*vec3f_mul3__(t_vec3f *v1, t_big__ x, t_big__ y, t_big__ z)
{
	v1->x *= (t_flt__)x;
	v1->y *= (t_flt__)y;
	v1->z *= (t_flt__)z;
	return (v1);
}
