/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:32:23 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2i	*vec2i_add1__(t_vec2i *v1, t_big i)
{
	v1->x += (t_int)i;
	v1->y += (t_int)i;
	return (v1);
}

t_vec2i	*vec2i_sub1__(t_vec2i *v1, t_big i)
{
	v1->x -= (t_int)i;
	v1->y -= (t_int)i;
	return (v1);
}

t_vec2i	*vec2i_mul1__(t_vec2i *v1, t_big i)
{
	v1->x *= (t_int)i;
	v1->y *= (t_int)i;
	return (v1);
}

t_vec2i	*vec2i_div1__(t_vec2i *v1, t_big i)
{
	if ((t_int)i == 0)
		return (v1);
	v1->x /= (t_int)i;
	v1->y /= (t_int)i;
	return (v1);
}
