/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:30:12 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec2.h"

t_vec_gen__	*v2_add2__(t_vec_gen__ *v, t_big__ x, t_big__ y)
{
	if (v->t > LDBL)
		return (NULL);
	return (g_v2f__[v->t]->add2(v, x, y));
}

t_vec_gen__	*v2_sub2__(t_vec_gen__ *v, t_big__ x, t_big__ y)
{
	if (v->t > LDBL)
		return (NULL);
	return (g_v2f__[v->t]->sub2(v, x, y));
}

t_vec_gen__	*v2_mul2__(t_vec_gen__ *v, t_big__ x, t_big__ y)
{
	if (v->t > LDBL)
		return (NULL);
	return (g_v2f__[v->t]->mul2(v, x, y));
}
