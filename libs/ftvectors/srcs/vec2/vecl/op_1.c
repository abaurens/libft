/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 11:40:09 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors/vec2/t_vec2_t.h"

t_vec2l	v2l_add1(t_vec2l *v, t_ldbl__ i)
{
	t_vec2l	r;

	r.x = v->x + i;
	r.y = v->y + i;
	return (r);
}

t_vec2l	v2l_sub1(t_vec2l *v, t_ldbl__ i)
{
	t_vec2l	r;

	r.x = v->x - i;
	r.y = v->y - i;
	return (r);
}

t_vec2l	v2l_mul1(t_vec2l *v, t_ldbl__ i)
{
	t_vec2l	r;

	r.x = v->x * i;
	r.y = v->y * i;
	return (r);
}

t_vec2l	v2l_div(t_vec2l *v, t_ldbl__ i)
{
	t_vec2l	r;

	r.x = v->x / i;
	r.y = v->y / i;
	return (r);
}
