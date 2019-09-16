/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 12:16:21 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmath/vectors/t_vec2_t.h"
#include "ftmath.h"

t_dbl__		vec2l_norm__(t_vec2l *v)
{
	return (ft_sqrt(v->x * v->x + v->y * v->y));
}

t_flt__		vec2l_normf__(t_vec2l *v)
{
	return (ft_sqrtf(v->x * v->x + v->y * v->y));
}

t_ldbl__	vec2l_norml__(t_vec2l *v)
{
	return (ft_sqrtl(v->x * v->x + v->y * v->y));
}

t_vec2l		*vec2l_normalize__(t_vec2l *v)
{
	t_ldbl__	l;

	if ((l = vec2l_norml__(v)) == 0.0L)
		return (NULL);
	v->x /= l;
	v->y /= l;
	return (v);
}
