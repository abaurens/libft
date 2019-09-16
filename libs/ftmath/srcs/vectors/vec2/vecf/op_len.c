/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 12:14:20 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmath/vectors/t_vec2_t.h"
#include "ftmath.h"

t_dbl__		vec2f_norm__(t_vec2f *v)
{
	return (ft_sqrt(v->x * v->x + v->y * v->y));
}

t_flt__		vec2f_normf__(t_vec2f *v)
{
	return (ft_sqrtf(v->x * v->x + v->y * v->y));
}

t_ldbl__	vec2f_norml__(t_vec2f *v)
{
	return (ft_sqrtl(v->x * v->x + v->y * v->y));
}

t_vec2f		*vec2f_normalize__(t_vec2f *v)
{
	t_flt__	l;

	if ((l = vec2f_normf__(v)) == 0.0f)
		return (NULL);
	v->x /= l;
	v->y /= l;
	return (v);
}
