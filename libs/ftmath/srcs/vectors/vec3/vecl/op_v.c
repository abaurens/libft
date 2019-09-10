/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_v.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:41:29 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3l	*vec3l_addv__(t_vec3l *v1, t_vec3l *v2)
{
	v1->x += v2->x;
	v1->y += v2->y;
	v1->z += v2->z;
	return (v1);
}

t_vec3l	*vec3l_subv__(t_vec3l *v1, t_vec3l *v2)
{
	v1->x -= v2->x;
	v1->y += v2->y;
	v1->z += v2->z;
	return (v1);
}

t_vec3l	*vec3l_mulv__(t_vec3l *v1, t_vec3l *v2)
{
	v1->x *= v2->x;
	v1->y += v2->y;
	v1->z += v2->z;
	return (v1);
}