/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:36:46 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3	*vec3_add3__(t_vec3 *v1, t_big x, t_big y, t_big z)
{
	v1->x += (t_dbl)x;
	v1->y += (t_dbl)y;
	v1->z += (t_dbl)z;
	return (v1);
}

t_vec3	*vec3_sub3__(t_vec3 *v1, t_big x, t_big y, t_big z)
{
	v1->x -= (t_dbl)x;
	v1->y -= (t_dbl)y;
	v1->z -= (t_dbl)z;
	return (v1);
}

t_vec3	*vec3_mul3__(t_vec3 *v1, t_big x, t_big y, t_big z)
{
	v1->x *= (t_dbl)x;
	v1->y *= (t_dbl)y;
	v1->z *= (t_dbl)z;
	return (v1);
}
