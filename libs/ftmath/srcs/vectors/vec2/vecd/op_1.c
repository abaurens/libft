/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 15:00:31 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2	*v2_add1(t_vec2 *v1, t_dbl__ i)
{
	v1->x += i;
	v1->y += i;
	return (v1);
}

t_vec2	*v2_sub1(t_vec2 *v1, t_dbl__ i)
{
	v1->x -= i;
	v1->y -= i;
	return (v1);
}

t_vec2	*v2_mul1(t_vec2 *v1, t_dbl__ i)
{
	v1->x *= i;
	v1->y *= i;
	return (v1);
}

t_vec2	*v2_div1(t_vec2 *v1, t_dbl__ i)
{
	if (i == 0)
		return (v1);
	v1->x /= i;
	v1->y /= i;
	return (v1);
}
