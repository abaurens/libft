/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 11:21:18 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec2/t_vec2_t.h"

t_vec2f	v2f_add2(t_vec2f *v, t_flt__ x, t_flt__ y)
{
	t_vec2f	r;

	r.x = v->x + x;
	r.y = v->y + y;
	return (r);
}

t_vec2f	v2f_sub2(t_vec2f *v, t_flt__ x, t_flt__ y)
{
	t_vec2f	r;

	r.x = v->x - x;
	r.y = v->y - y;
	return (r);
}

t_vec2f	v2f_mul2(t_vec2f *v, t_flt__ x, t_flt__ y)
{
	t_vec2f	r;

	r.x = v->x * x;
	r.y = v->y * y;
	return (r);
}
