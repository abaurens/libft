/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 16:39:44 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors/vec2/t_vec2_t.h"
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

t_vec2i		v2i_normalize(t_vec2i *v)
{
	t_dbl__	l;
	t_vec2i	r;

	if ((l = v2i_norm(v)) == 0.0)
		return (*v);
	r.x = v->x / l;
	r.y = v->y / l;
	return (r);
}