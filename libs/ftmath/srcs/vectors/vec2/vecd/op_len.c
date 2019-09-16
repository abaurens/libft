/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_len.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:36:17 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 15:01:02 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftmath/vectors/t_vec2_t.h"
#include "ftmath.h"

t_dbl__		v2_norm(t_vec2 *v)
{
	return (ft_sqrt(v->x * v->x + v->y * v->y));
}

t_vec2		*v2_normalize(t_vec2 *v)
{
	t_dbl__	l;

	if ((l = v2_norm(v)) == 0.0)
		return (NULL);
	v->x /= l;
	v->y /= l;
	return (v);
}
