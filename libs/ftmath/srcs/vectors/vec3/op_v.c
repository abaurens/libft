/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_v.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:20:44 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec3.h"

t_vec_gen__	*v3_addv__(t_vec_gen__ *v1, t_vec_gen__ *v2)
{
	if ((v1->t & ~VEC3) > LDBL)
		return (NULL);
	if ((v2->t & ~VEC3) > LDBL || v1->t != v2->t)
		return (v1);
	return (g_v3f__[v1->t & ~VEC3]->addv(v1, v2));
}

t_vec_gen__	*v3_subv__(t_vec_gen__ *v1, t_vec_gen__ *v2)
{
	if ((v1->t & ~VEC3) > LDBL)
		return (NULL);
	if ((v2->t & ~VEC3) > LDBL || v1->t != v2->t)
		return (v1);
	return (g_v3f__[v1->t & ~VEC3]->subv(v1, v2));
}

t_vec_gen__	*v3_mulv__(t_vec_gen__ *v1, t_vec_gen__ *v2)
{
	if ((v1->t & ~VEC3) > LDBL)
		return (NULL);
	if ((v2->t & ~VEC3) > LDBL || v1->t != v2->t)
		return (v1);
	return (g_v3f__[v1->t & ~VEC3]->mulv(v1, v2));
}
