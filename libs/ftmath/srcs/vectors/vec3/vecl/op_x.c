/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 15:55:29 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3l	*vec3l_add3__(t_vec3l *v1, t_big__ x, t_big__ y, t_big__ z)
{
	v1->x += (t_ldbl__)x;
	v1->y += (t_ldbl__)y;
	v1->z += (t_ldbl__)z;
	return (v1);
}

t_vec3l	*vec3l_sub3__(t_vec3l *v1, t_big__ x, t_big__ y, t_big__ z)
{
	v1->x -= (t_ldbl__)x;
	v1->y -= (t_ldbl__)y;
	v1->z -= (t_ldbl__)z;
	return (v1);
}

t_vec3l	*vec3l_mul3__(t_vec3l *v1, t_big__ x, t_big__ y, t_big__ z)
{
	v1->x *= (t_ldbl__)x;
	v1->y *= (t_ldbl__)y;
	v1->z *= (t_ldbl__)z;
	return (v1);
}
