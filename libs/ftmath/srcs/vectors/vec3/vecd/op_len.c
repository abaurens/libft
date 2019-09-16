/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:38:02 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmath/vectors/t_vec3_t.h"
#include "ftmath.h"

t_dbl__		v3_norm(t_vec3 *v)
{
	return (ft_sqrt(v->x * v->x + v->y * v->y + v->z * v->z));
}

t_vec3		*v3_normalize(t_vec3 *v)
{
	t_dbl__	l;

	if ((l = v3_norm(v)) == 0.0)
		return (NULL);
	v->x /= l;
	v->y /= l;
	v->z /= l;
	return (v);
}
