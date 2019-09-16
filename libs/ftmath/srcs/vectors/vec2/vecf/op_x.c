/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:58:25 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2f	*v2f_add2(t_vec2f *v1, t_flt__ x, t_flt__ y)
{
	v1->x += x;
	v1->y += y;
	return (v1);
}

t_vec2f	*v2f_sub2(t_vec2f *v1, t_flt__ x, t_flt__ y)
{
	v1->x -= x;
	v1->y -= y;
	return (v1);
}

t_vec2f	*v2f_mul2(t_vec2f *v1, t_flt__ x, t_flt__ y)
{
	v1->x *= x;
	v1->y *= y;
	return (v1);
}
