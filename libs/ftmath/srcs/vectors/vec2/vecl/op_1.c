/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:33:27 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2l	*vec2l_add1__(t_vec2l *v1, t_big i)
{
	v1->x += (t_ldbl)i;
	v1->y += (t_ldbl)i;
	return (v1);
}

t_vec2l	*vec2l_sub1__(t_vec2l *v1, t_big i)
{
	v1->x -= (t_ldbl)i;
	v1->y -= (t_ldbl)i;
	return (v1);
}

t_vec2l	*vec2l_mul1__(t_vec2l *v1, t_big i)
{
	v1->x *= (t_ldbl)i;
	v1->y *= (t_ldbl)i;
	return (v1);
}

t_vec2l	*vec2l_div1__(t_vec2l *v1, t_big i)
{
	if ((t_ldbl)i == 0)
		return (v1);
	v1->x /= (t_ldbl)i;
	v1->y /= (t_ldbl)i;
	return (v1);
}