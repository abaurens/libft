/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:34:29 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2f	*vec2f_add1__(t_vec2f *v1, t_big__ i)
{
	v1->x += (t_flt__)i;
	v1->y += (t_flt__)i;
	return (v1);
}

t_vec2f	*vec2f_sub1__(t_vec2f *v1, t_big__ i)
{
	v1->x -= (t_flt__)i;
	v1->y -= (t_flt__)i;
	return (v1);
}

t_vec2f	*vec2f_mul1__(t_vec2f *v1, t_big__ i)
{
	v1->x *= (t_flt__)i;
	v1->y *= (t_flt__)i;
	return (v1);
}

t_vec2f	*vec2f_div1__(t_vec2f *v1, t_big__ i)
{
	if ((t_flt__)i == 0)
		return (v1);
	v1->x /= (t_flt__)i;
	v1->y /= (t_flt__)i;
	return (v1);
}
