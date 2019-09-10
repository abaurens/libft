/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:43:13 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2l	*vec2l_add2__(t_vec2l *v1, t_big x, t_big y)
{
	v1->x += (t_ldbl)x;
	v1->y += (t_ldbl)y;
	return (v1);
}

t_vec2l	*vec2l_sub2__(t_vec2l *v1, t_big x, t_big y)
{
	v1->x -= (t_ldbl)x;
	v1->y -= (t_ldbl)y;
	return (v1);
}

t_vec2l	*vec2l_mul2__(t_vec2l *v1, t_big x, t_big y)
{
	v1->x *= (t_ldbl)x;
	v1->y *= (t_ldbl)y;
	return (v1);
}
