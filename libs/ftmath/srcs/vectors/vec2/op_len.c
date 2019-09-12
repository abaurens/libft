/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:30:03 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec2.h"

t_dbl__		v2_norm__(t_vec_gen__ *v)
{
	if (v->t > LDBL)
		return (0.0 / 0.0);
	return (g_v2f__[v->t & ~VEC3]->norm(v));
}

t_flt__		v2_normf__(t_vec_gen__ *v)
{
	if (v->t > LDBL)
		return (0.0 / 0.0);
	return (g_v2f__[v->t & ~VEC3]->normf(v));
}

t_ldbl__	v2_norml__(t_vec_gen__ *v)
{
	if (v->t > LDBL)
		return (0.0 / 0.0);
	return (g_v2f__[v->t & ~VEC3]->norml(v));
}

t_vec_gen__	*v2_normalize__(t_vec_gen__ *v)
{
	if (v->t > LDBL)
		return (NULL);
	return (g_v2f__[v->t & ~VEC3]->normalize(v));
}
