/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 14:59:10 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 14:59:47 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/t_vec3.h"

t_vec3f	*init_vec3f(t_vec3f *v, t_flt x, t_flt y, t_flt z)
{
	v->x = x;
	v->y = y;
	v->z = z;
	return (v);
}
