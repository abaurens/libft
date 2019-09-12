/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:43:06 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2i	*vec2i_add2__(t_vec2i *v1, t_big__ x, t_big__ y)
{
	v1->x += (t_int__)x;
	v1->y += (t_int__)y;
	return (v1);
}

t_vec2i	*vec2i_sub2__(t_vec2i *v1, t_big__ x, t_big__ y)
{
	v1->x -= (t_int__)x;
	v1->y -= (t_int__)y;
	return (v1);
}

t_vec2i	*vec2i_mul2__(t_vec2i *v1, t_big__ x, t_big__ y)
{
	v1->x *= (t_int__)x;
	v1->y *= (t_int__)y;
	return (v1);
}
