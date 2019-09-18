/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 11:24:51 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "vectors/vec2/t_vec2_t.h"
#include "ftmath.h"

t_ldbl__	v2l_norm(t_vec2l *v)
{
	return (ft_sqrtl(v->x * v->x + v->y * v->y));
}

t_vec2l		v2l_normalize(t_vec2l *v)
{
	t_ldbl__	l;
	t_vec2l		r;

	if ((l = v2l_norm(v)) == 0.0L)
		return (*v);
	r.x = v->x / l;
	r.y = v->y / l;
	return (r);
}
