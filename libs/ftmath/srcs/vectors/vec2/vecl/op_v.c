/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_v.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:49:39 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2l	*vec2l_addv__(t_vec2l *v1, t_vec2l *v2)
{
	v1->x += v2->x;
	v1->y += v2->y;
	return (v1);
}

t_vec2l	*vec2l_subv__(t_vec2l *v1, t_vec2l *v2)
{
	v1->x -= v2->x;
	v1->y -= v2->y;
	return (v1);
}

t_vec2l	*vec2l_mulv__(t_vec2l *v1, t_vec2l *v2)
{
	v1->x *= v2->x;
	v1->y *= v2->y;
	return (v1);
}
