/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 15:01:34 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2	*v2_add2(t_vec2 *v1, t_dbl__ x, t_dbl__ y)
{
	v1->x += x;
	v1->y += y;
	return (v1);
}

t_vec2	*v2_sub2(t_vec2 *v1, t_dbl__ x, t_dbl__ y)
{
	v1->x -= x;
	v1->y -= y;
	return (v1);
}

t_vec2	*v2_mul2(t_vec2 *v1, t_dbl__ x, t_dbl__ y)
{
	v1->x *= x;
	v1->y *= y;
	return (v1);
}
