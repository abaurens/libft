/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_3.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:42:58 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2	*vec2_add2__(t_vec2 *v1, t_big__ x, t_big__ y)
{
	v1->x += (t_dbl__)x;
	v1->y += (t_dbl__)y;
	return (v1);
}

t_vec2	*vec2_sub2__(t_vec2 *v1, t_big__ x, t_big__ y)
{
	v1->x -= (t_dbl__)x;
	v1->y -= (t_dbl__)y;
	return (v1);
}

t_vec2	*vec2_mul2__(t_vec2 *v1, t_big__ x, t_big__ y)
{
	v1->x *= (t_dbl__)x;
	v1->y *= (t_dbl__)y;
	return (v1);
}
