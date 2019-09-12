/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:22:39 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec3.h"

t_vec_gen__	*v3_add3__(t_vec_gen__ *v, t_big__ x, t_big__ y, t_big__ z)
{
	if ((v->t & ~VEC3) > LDBL)
		return (NULL);
	return (g_v3f__[v->t & ~VEC3]->add3(v, x, y, z));
}

t_vec_gen__	*v3_sub3__(t_vec_gen__ *v, t_big__ x, t_big__ y, t_big__ z)
{
	if ((v->t & ~VEC3) > LDBL)
		return (NULL);
	return (g_v3f__[v->t & ~VEC3]->sub3(v, x, y, z));
}

t_vec_gen__	*v3_mul3__(t_vec_gen__ *v, t_big__ x, t_big__ y, t_big__ z)
{
	if ((v->t & ~VEC3) > LDBL)
		return (NULL);
	return (g_v3f__[v->t & ~VEC3]->mul3(v, x, y, z));
}
