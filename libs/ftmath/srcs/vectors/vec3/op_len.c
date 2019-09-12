/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:17:22 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec3.h"

t_dbl__		v3_norm__(t_vec_gen__ *v)
{
	if ((v->t & ~VEC3) > LDBL)
		return (0.0 / 0.0);
	return (g_v3f__[v->t & ~VEC3]->norm(v));
}

t_flt__		v3_normf__(t_vec_gen__ *v)
{
	if ((v->t & ~VEC3) > LDBL)
		return (0.0 / 0.0);
	return (g_v3f__[v->t & ~VEC3]->normf(v));
}

t_ldbl__	v3_norml__(t_vec_gen__ *v)
{
	if ((v->t & ~VEC3) > LDBL)
		return (0.0 / 0.0);
	return (g_v3f__[v->t & ~VEC3]->norml(v));
}

t_vec_gen__	*v3_normalize__(t_vec_gen__ *v)
{
	if ((v->t & ~VEC3) > LDBL)
		return (NULL);
	return (g_v3f__[v->t & ~VEC3]->normalize(v));
}
