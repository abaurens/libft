/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:43:19 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3i	*v3i_add3(t_vec3i *v1, t_int__ x, t_int__ y, t_int__ z)
{
	v1->x += x;
	v1->y += y;
	v1->z += z;
	return (v1);
}

t_vec3i	*v3i_sub3(t_vec3i *v1, t_int__ x, t_int__ y, t_int__ z)
{
	v1->x -= x;
	v1->y -= y;
	v1->z -= z;
	return (v1);
}

t_vec3i	*v3i_mul3(t_vec3i *v1, t_int__ x, t_int__ y, t_int__ z)
{
	v1->x *= x;
	v1->y *= y;
	v1->z *= z;
	return (v1);
}
