/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:17:39 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec3.h"

t_vec_gen__	*v3_add1__(t_vec_gen__ *v1, t_big__ i)
{
	if ((v1->t & ~VEC3) > LDBL)
		return (NULL);
	return (g_v3f__[v1->t & ~VEC3]->add(v1, i));
}

t_vec_gen__	*v3_sub1__(t_vec_gen__ *v1, t_big__ i)
{
	if ((v1->t & ~VEC3) > LDBL)
		return (NULL);
	return (g_v3f__[v1->t & ~VEC3]->sub(v1, i));
}

t_vec_gen__	*v3_mul1__(t_vec_gen__ *v1, t_big__ i)
{
	if ((v1->t & ~VEC3) > LDBL)
		return (NULL);
	return (g_v3f__[v1->t & ~VEC3]->mul(v1, i));
}

t_vec_gen__	*v3_div1__(t_vec_gen__ *v1, t_big__ i)
{
	if ((v1->t & ~VEC3) > LDBL)
		return (NULL);
	return (g_v3f__[v1->t & ~VEC3]->div(v1, i));
}
