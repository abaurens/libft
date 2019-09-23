/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 11:19:12 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/vec2/t_vec2_t.h"

t_vec2i	v2i_add2(t_vec2i *v, t_int__ x, t_int__ y)
{
	t_vec2i	r;

	r.x = v->x + x;
	r.y = v->y + y;
	return (r);
}

t_vec2i	v2i_sub2(t_vec2i *v, t_int__ x, t_int__ y)
{
	t_vec2i	r;

	r.x = v->x - x;
	r.y = v->y - y;
	return (r);
}

t_vec2i	v2i_mul2(t_vec2i *v, t_int__ x, t_int__ y)
{
	t_vec2i	r;

	r.x = v->x * x;
	r.y = v->y * y;
	return (r);
}
