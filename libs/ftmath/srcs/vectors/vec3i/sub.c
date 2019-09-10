/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:17:50 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 11:26:08 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3i	*vec3i_sub__(t_vec3i *v1, t_vec3i *v2)
{
	v1->x -= v2->x;
	v1->y -= v2->y;
	v1->z -= v2->z;
	return (v1);
}

t_vec3i	*vec3i_subi__(t_vec3i *v1, t_int i)
{
	v1->x -= i;
	v1->y -= i;
	v1->z -= i;
	return (v1);
}

t_vec3i	*vec3i_sub3__(t_vec3i *v1, t_int x, t_int y, t_int z)
{
	v1->x -= x;
	v1->y -= y;
	v1->z -= z;
	return (v1);
}
