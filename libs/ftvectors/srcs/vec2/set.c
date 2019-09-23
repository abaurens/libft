/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:18:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 11:34:52 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/t_vec2.h"

t_vec2	set_vec2(t_vec2 *p, t_dbl__ x, t_dbl__ y)
{
	t_vec2	v;

	v.x = x;
	v.y = y;
	if (p)
		*p = v;
	return (v);
}

t_vec2i	set_vec2i(t_vec2i *p, t_int__ x, t_int__ y)
{
	t_vec2i	v;

	v.x = x;
	v.y = y;
	if (p)
		*p = v;
	return (v);
}

t_vec2f	set_vec2f(t_vec2f *p, t_flt__ x, t_flt__ y)
{
	t_vec2f	v;

	v.x = x;
	v.y = y;
	if (p)
		*p = v;
	return (v);
}

t_vec2l	set_vec2l(t_vec2l *p, t_ldbl__ x, t_ldbl__ y)
{
	t_vec2l	v;

	v.x = x;
	v.y = y;
	if (p)
		*p = v;
	return (v);
}
