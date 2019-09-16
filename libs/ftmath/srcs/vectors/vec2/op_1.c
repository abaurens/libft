/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_1.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 13:03:02 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec2.h"

t_vec_gen__	*v2_add1__(t_vec_gen__ *v1, t_big__ i)
{
	if (v1->t & VEC3)
		return (NULL);
	return (g_v2f__[v1->t]->add(v1, i));
}

t_vec_gen__	*v2_sub1__(t_vec_gen__ *v1, t_big__ i)
{
	if (v1->t & VEC3)
		return (NULL);
	return (g_v2f__[v1->t]->sub(v1, i));
}

t_vec_gen__	*v2_mul1__(t_vec_gen__ *v1, t_big__ i)
{
	if (v1->t & VEC3)
		return (NULL);
	return (g_v2f__[v1->t]->mul(v1, i));
}

t_vec_gen__	*v2_div1__(t_vec_gen__ *v1, t_big__ i)
{
	if (v1->t & VEC3)
		return (NULL);
	return (g_v2f__[v1->t]->div(v1, i));
}
