/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:59:49 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec2_t.h"

t_vec2f	*v2f_add1(t_vec2f *v1, t_flt__ i)
{
	v1->x += i;
	v1->y += i;
	return (v1);
}

t_vec2f	*v2f_sub1(t_vec2f *v1, t_flt__ i)
{
	v1->x -= i;
	v1->y -= i;
	return (v1);
}

t_vec2f	*v2f_mul1(t_vec2f *v1, t_flt__ i)
{
	v1->x *= i;
	v1->y *= i;
	return (v1);
}

t_vec2f	*v2f_div1(t_vec2f *v1, t_flt__ i)
{
	if (i == 0)
		return (v1);
	v1->x /= i;
	v1->y /= i;
	return (v1);
}
