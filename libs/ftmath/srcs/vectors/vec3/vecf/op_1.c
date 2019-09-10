/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:37:31 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3f	*vec3f_add1__(t_vec3f *v1, t_big i)
{
	v1->x += (t_flt)i;
	v1->y += (t_flt)i;
	v1->z += (t_flt)i;
	return (v1);
}

t_vec3f	*vec3f_sub1__(t_vec3f *v1, t_big i)
{
	v1->x -= (t_flt)i;
	v1->y -= (t_flt)i;
	v1->z -= (t_flt)i;
	return (v1);
}

t_vec3f	*vec3f_mul1__(t_vec3f *v1, t_big i)
{
	v1->x *= (t_flt)i;
	v1->y *= (t_flt)i;
	v1->z *= (t_flt)i;
	return (v1);
}

t_vec3f	*vec3f_div1__(t_vec3f *v1, t_big i)
{
	if ((t_flt)i == 0)
		return (v1);
	v1->x /= (t_flt)i;
	v1->y /= (t_flt)i;
	v1->z /= (t_flt)i;
	return (v1);
}
