/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 16:15:25 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3i	*vec3i_add1__(t_vec3i *v1, t_big__ i)
{
	v1->x += (t_int__)i;
	v1->y += (t_int__)i;
	v1->z += (t_int__)i;
	return (v1);
}

t_vec3i	*vec3i_sub1__(t_vec3i *v1, t_big__ i)
{
	v1->x -= (t_int__)i;
	v1->y -= (t_int__)i;
	v1->z -= (t_int__)i;
	return (v1);
}

t_vec3i	*vec3i_mul1__(t_vec3i *v1, t_big__ i)
{
	v1->x *= (t_int__)i;
	v1->y *= (t_int__)i;
	v1->z *= (t_int__)i;
	return (v1);
}

t_vec3i	*vec3i_div1__(t_vec3i *v1, t_big__ i)
{
	if ((t_int__)i == 0)
		return (v1);
	v1->x /= (t_int__)i;
	v1->y /= (t_int__)i;
	return (v1);
}
