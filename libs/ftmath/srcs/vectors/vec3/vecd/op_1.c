/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:40:09 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_vec3	*v3_add1(t_vec3 *v1, t_dbl__ i)
{
	v1->x += i;
	v1->y += i;
	v1->z += i;
	return (v1);
}

t_vec3	*v3_sub1(t_vec3 *v1, t_dbl__ i)
{
	v1->x -= i;
	v1->y -= i;
	v1->z -= i;
	return (v1);
}

t_vec3	*v3_mul1(t_vec3 *v1, t_dbl__ i)
{
	v1->x *= i;
	v1->y *= i;
	v1->z *= i;
	return (v1);
}

t_vec3	*v3_div1(t_vec3 *v1, t_dbl__ i)
{
	if (i == 0)
		return (v1);
	v1->x /= i;
	v1->y /= i;
	v1->z /= i;
	return (v1);
}
