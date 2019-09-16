/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 12:14:27 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmath/vectors/t_vec2_t.h"
#include "ftmath.h"

t_dbl__		vec2i_norm__(t_vec2i *v)
{
	return (ft_sqrt(v->x * v->x + v->y * v->y));
}

t_flt__		vec2i_normf__(t_vec2i *v)
{
	return (ft_sqrtf(v->x * v->x + v->y * v->y));
}

t_ldbl__	vec2i_norml__(t_vec2i *v)
{
	return (ft_sqrtl(v->x * v->x + v->y * v->y));
}

t_vec2i		*vec2i_normalize__(t_vec2i *v)
{
	t_dbl__	l;

	if ((l = vec2i_norm__(v)) == 0.0)
		return (NULL);
	v->x /= l;
	v->y /= l;
	return (v);
}
