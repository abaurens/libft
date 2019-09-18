/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 11:39:16 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors/vec2/t_vec2_t.h"

t_vec2	v2_add2(t_vec2 *v, t_dbl__ x, t_dbl__ y)
{
	t_vec2	r;

	r.x = v->x + x;
	r.y = v->y + y;
	return (r);
}

t_vec2	v2_sub2(t_vec2 *v, t_dbl__ x, t_dbl__ y)
{
	t_vec2	r;

	r.x = v->x - x;
	r.y = v->y - y;
	return (r);
}

t_vec2	v2_mul2(t_vec2 *v, t_dbl__ x, t_dbl__ y)
{
	t_vec2	r;

	r.x = v->x * x;
	r.y = v->y * y;
	return (r);
}
