/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_cross.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:12:58 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:40:28 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3		v3_cross(t_vec3 *v1, t_vec3 *v2)
{
	t_vec3	v;

	v.x = v1->y * v2->z - v1->z * v2->y;
	v.y = v1->z * v2->x - v1->x * v2->z;
	v.z = v1->x * v2->y - v1->y * v2->x;
	return (v);
}
