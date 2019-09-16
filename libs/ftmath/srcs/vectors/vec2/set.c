/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:18:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 15:25:34 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec2.h"
#include "ftio.h"

t_vec2	init_vec2(t_vec2 *p, t_dbl__ x, t_dbl__ y)
{
	t_vec2	v;

	v.x = x;
	v.y = y;
	if (p)
		*p = v;
	return (v);
}

t_vec2i	init_vec2i(t_vec2i *p, t_int__ x, t_int__ y)
{
	t_vec2i	v;

	v.x = x;
	v.y = y;
	if (p)
		*p = v;
	return (v);
}

t_vec2f	init_vec2f(t_vec2f *p, t_flt__ x, t_flt__ y)
{
	t_vec2f	v;

	v.x = x;
	v.y = y;
	if (p)
		*p = v;
	return (v);
}

t_vec2l	init_vec2l(t_vec2l *p, t_ldbl__ x, t_ldbl__ y)
{
	t_vec2l	v;

	v.x = x;
	v.y = y;
	if (p)
		*p = v;
	return (v);
}
