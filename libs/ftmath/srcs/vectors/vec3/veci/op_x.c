/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 16:15:49 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3i	*vec3i_add3__(t_vec3i *v1, t_big__ x, t_big__ y, t_big__ z)
{
	v1->x += (t_int__)x;
	v1->y += (t_int__)y;
	v1->z += (t_int__)z;
	return (v1);
}

t_vec3i	*vec3i_sub3__(t_vec3i *v1, t_big__ x, t_big__ y, t_big__ z)
{
	v1->x -= (t_int__)x;
	v1->y -= (t_int__)y;
	v1->z -= (t_int__)z;
	return (v1);
}

t_vec3i	*vec3i_mul3__(t_vec3i *v1, t_big__ x, t_big__ y, t_big__ z)
{
	v1->x *= (t_int__)x;
	v1->y *= (t_int__)y;
	v1->z *= (t_int__)z;
	return (v1);
}
