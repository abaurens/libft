/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_v.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 11:23:34 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors/vec2/t_vec2_t.h"

t_vec2l	v2l_addv(t_vec2l *v1, t_vec2l *v2)
{
	t_vec2l	r;

	r.x = v1->x + v2->x;
	r.y = v1->y + v2->y;
	return (r);
}

t_vec2l	v2l_subv(t_vec2l *v1, t_vec2l *v2)
{
	t_vec2l	r;

	r.x = v1->x - v2->x;
	r.y = v1->y - v2->y;
	return (r);
}

t_vec2l	v2l_mulv(t_vec2l *v1, t_vec2l *v2)
{
	t_vec2l	r;

	r.x = v1->x * v2->x;
	r.y = v1->y * v2->y;
	return (r);
}
