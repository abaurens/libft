/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:39:46 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3f	*v3f_add1(t_vec3f *v1, t_flt__ i)
{
	v1->x += i;
	v1->y += i;
	v1->z += i;
	return (v1);
}

t_vec3f	*v3f_sub1(t_vec3f *v1, t_flt__ i)
{
	v1->x -= i;
	v1->y -= i;
	v1->z -= i;
	return (v1);
}

t_vec3f	*v3f_mul1(t_vec3f *v1, t_flt__ i)
{
	v1->x *= i;
	v1->y *= i;
	v1->z *= i;
	return (v1);
}

t_vec3f	*v3f_div1(t_vec3f *v1, t_flt__ i)
{
	if (i == 0)
		return (v1);
	v1->x /= i;
	v1->y /= i;
	v1->z /= i;
	return (v1);
}
