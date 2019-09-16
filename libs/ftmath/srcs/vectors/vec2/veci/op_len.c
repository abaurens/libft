/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:57:02 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmath/vectors/t_vec2_t.h"
#include "ftmath.h"

t_dbl__		v2i_norm(t_vec2i *v)
{
	return (ft_sqrt(v->x * v->x + v->y * v->y));
}

t_flt__		v2i_normf(t_vec2i *v)
{
	return (ft_sqrtf(v->x * v->x + v->y * v->y));
}

t_ldbl__	v2i_norml(t_vec2i *v)
{
	return (ft_sqrtl(v->x * v->x + v->y * v->y));
}

t_vec2i		*v2i_normalize(t_vec2i *v)
{
	t_dbl__	l;

	if ((l = v2i_norm(v)) == 0.0)
		return (NULL);
	v->x /= l;
	v->y /= l;
	return (v);
}
