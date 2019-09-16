/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_v.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:36:29 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3	*v3_addv(t_vec3 *v1, t_vec3 *v2)
{
	v1->x += v2->x;
	v1->y += v2->y;
	v1->z += v2->z;
	return (v1);
}

t_vec3	*v3_subv(t_vec3 *v1, t_vec3 *v2)
{
	v1->x -= v2->x;
	v1->y -= v2->y;
	v1->z -= v2->z;
	return (v1);
}

t_vec3	*v3_mulv(t_vec3 *v1, t_vec3 *v2)
{
	v1->x *= v2->x;
	v1->y *= v2->y;
	v1->z *= v2->z;
	return (v1);
}
