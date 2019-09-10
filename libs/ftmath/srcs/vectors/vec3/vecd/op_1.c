/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:36:50 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3	*vec3_add1__(t_vec3 *v1, t_big i)
{
	v1->x += (t_dbl)i;
	v1->y += (t_dbl)i;
	v1->z += (t_dbl)i;
	return (v1);
}

t_vec3	*vec3_sub1__(t_vec3 *v1, t_big i)
{
	v1->x -= (t_dbl)i;
	v1->y -= (t_dbl)i;
	v1->z -= (t_dbl)i;
	return (v1);
}

t_vec3	*vec3_mul1__(t_vec3 *v1, t_big i)
{
	v1->x *= (t_dbl)i;
	v1->y *= (t_dbl)i;
	v1->z *= (t_dbl)i;
	return (v1);
}

t_vec3	*vec3_div1__(t_vec3 *v1, t_big i)
{
	if ((t_dbl)i == 0)
		return (v1);
	v1->x /= (t_dbl)i;
	v1->y /= (t_dbl)i;
	v1->z /= (t_dbl)i;
	return (v1);
}
