/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:44:49 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3l	*v3l_add3(t_vec3l *v1, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z)
{
	v1->x += x;
	v1->y += y;
	v1->z += z;
	return (v1);
}

t_vec3l	*v3l_sub3(t_vec3l *v1, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z)
{
	v1->x -= x;
	v1->y -= y;
	v1->z -= z;
	return (v1);
}

t_vec3l	*v3l_mul3(t_vec3l *v1, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z)
{
	v1->x *= x;
	v1->y *= y;
	v1->z *= z;
	return (v1);
}
