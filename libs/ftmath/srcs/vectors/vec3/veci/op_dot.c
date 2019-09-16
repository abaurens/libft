/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_dot.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 12:43:15 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 14:42:04 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath/vectors/t_vec3_t.h"

t_dbl__		v3i_dot(t_vec3i *v1, t_vec3i *v2)
{
	return (v1->x * v2->x + v1->y * v2->y + v1->z * v2->z);
}
