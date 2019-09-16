/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:59:06 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmath/vectors/t_vec2_t.h"
#include "ftmath.h"

t_flt__		v2f_norm(t_vec2f *v)
{
	return (ft_sqrtf(v->x * v->x + v->y * v->y));
}

t_vec2f		*v2f_normalize(t_vec2f *v)
{
	t_flt__	l;

	if ((l = v2f_norm(v)) == 0.0f)
		return (NULL);
	v->x /= l;
	v->y /= l;
	return (v);
}
