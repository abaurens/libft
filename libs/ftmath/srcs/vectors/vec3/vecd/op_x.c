/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:40:54 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3	*v3_add3(t_vec3 *v1, t_dbl__ x, t_dbl__ y, t_dbl__ z)
{
	v1->x += x;
	v1->y += y;
	v1->z += z;
	return (v1);
}

t_vec3	*v3_sub3(t_vec3 *v1, t_dbl__ x, t_dbl__ y, t_dbl__ z)
{
	v1->x -= x;
	v1->y -= y;
	v1->z -= z;
	return (v1);
}

t_vec3	*v3_mul3(t_vec3 *v1, t_dbl__ x, t_dbl__ y, t_dbl__ z)
{
	v1->x *= x;
	v1->y *= y;
	v1->z *= z;
	return (v1);
}
