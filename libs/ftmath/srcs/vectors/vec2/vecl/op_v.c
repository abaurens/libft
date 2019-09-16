/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_v.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:53:17 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2l	*v2l_addv(t_vec2l *v1, t_vec2l *v2)
{
	v1->x += v2->x;
	v1->y += v2->y;
	return (v1);
}

t_vec2l	*v2l_subv(t_vec2l *v1, t_vec2l *v2)
{
	v1->x -= v2->x;
	v1->y -= v2->y;
	return (v1);
}

t_vec2l	*v2l_mulv(t_vec2l *v1, t_vec2l *v2)
{
	v1->x *= v2->x;
	v1->y *= v2->y;
	return (v1);
}
