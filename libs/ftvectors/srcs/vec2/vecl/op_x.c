/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 11:29:36 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec2/t_vec2_t.h"

t_vec2l	v2l_add2(t_vec2l *v, t_ldbl__ x, t_ldbl__ y)
{
	t_vec2l	r;

	r.x = v->x + x;
	r.y = v->y + y;
	return (r);
}

t_vec2l	v2l_sub2(t_vec2l *v, t_ldbl__ x, t_ldbl__ y)
{
	t_vec2l	r;

	r.x = v->x - x;
	r.y = v->y - y;
	return (r);
}

t_vec2l	v2l_mul2(t_vec2l *v, t_ldbl__ x, t_ldbl__ y)
{
	t_vec2l	r;

	r.x = v->x * x;
	r.y = v->y * y;
	return (r);
}
