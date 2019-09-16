/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:53:52 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmath/vectors/t_vec2_t.h"
#include "ftmath.h"

t_ldbl__	v2l_norm(t_vec2l *v)
{
	return (ft_sqrtl(v->x * v->x + v->y * v->y));
}

t_vec2l		*v2l_normalize(t_vec2l *v)
{
	t_ldbl__	l;

	if ((l = v2l_norm(v)) == 0.0L)
		return (NULL);
	v->x /= l;
	v->y /= l;
	return (v);
}
