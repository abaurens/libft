/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:18:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/28 20:27:25 by baurens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftvectors/t_vec4.h"

t_vec4	set_vec4(t_vec4 *p, t_dbl__ x, t_dbl__ y, t_dbl__ z, t_dbl__ w)
{
	t_vec4	v;

	v.x = x;
	v.y = y;
	v.z = z;
	v.w = w;
	if (p)
		*p = v;
	return (v);
}

t_vec4i	set_vec4i(t_vec4i *p, t_int__ x, t_int__ y, t_int__ z, t_int__ w)
{
	t_vec4i	v;

	v.x = x;
	v.y = y;
	v.z = z;
	v.w = w;
	if (p)
		*p = v;
	return (v);
}

t_vec4f	set_vec4f(t_vec4f *p, t_flt__ x, t_flt__ y, t_flt__ z, t_flt__ w)
{
	t_vec4f	v;

	v.x = x;
	v.y = y;
	v.z = z;
	v.w = w;
	if (p)
		*p = v;
	return (v);
}

t_vec4l	set_vec4l(t_vec4l *p, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z, t_ldbl__ w)
{
	t_vec4l	v;

	v.x = x;
	v.y = y;
	v.z = z;
	v.w = w;
	if (p)
		*p = v;
	return (v);
}
