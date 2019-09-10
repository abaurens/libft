/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:43:01 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2f	*vec2f_add2__(t_vec2f *v1, t_big x, t_big y)
{
	v1->x += (t_flt)x;
	v1->y += (t_flt)y;
	return (v1);
}

t_vec2f	*vec2f_sub2__(t_vec2f *v1, t_big x, t_big y)
{
	v1->x -= (t_flt)x;
	v1->y -= (t_flt)y;
	return (v1);
}

t_vec2f	*vec2f_mul2__(t_vec2f *v1, t_big x, t_big y)
{
	v1->x *= (t_flt)x;
	v1->y *= (t_flt)y;
	return (v1);
}
