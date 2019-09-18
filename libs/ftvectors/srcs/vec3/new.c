/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:18:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 11:32:05 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vectors/t_vec3.h"

t_vec3	vec3(t_dbl__ x, t_dbl__ y, t_dbl__ z)
{
	t_vec3	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

t_vec3i	vec3i(t_int__ x, t_int__ y, t_int__ z)
{
	t_vec3i	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

t_vec3f	vec3f(t_flt__ x, t_flt__ y, t_flt__ z)
{
	t_vec3f	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

t_vec3l	vec3l(t_ldbl__ x, t_ldbl__ y, t_ldbl__ z)
{
	t_vec3l	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}
