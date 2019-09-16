/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_cross.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:12:58 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:08:31 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmath/t_vec3.h"
#include "ftvector.h"

t_vec_gen__	*v3_cross__(t_vec_gen__ *v, t_vec_gen__ *v1, t_vec_gen__ *v2)
{
	t_vect__	t;

	t = (v1->t & ~VEC3);
	if (!(v1->t & VEC3) || t > LDBL || v1->t != v2->t)
		return (NULL);
	if (t == INT)
		init_vec3i((void *)v, 0, 0, 0);
	else if (t == FLT)
		init_vec3f((void *)v, 0, 0, 0);
	else if (t == DBL)
		init_vec3((void *)v, 0, 0, 0);
	else if (t == LDBL)
		init_vec3l((void *)v, 0, 0, 0);
	else
		return (NULL);
	return (g_v3f__[v1->t & ~VEC3]->cross(v, v1, v2));
}
