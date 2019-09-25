/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 11:08:46 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/25 11:12:34 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmatrix/t_midx.h"
#include "ftmatrix/t_mat4.h"

t_mat4	m4_add(t_mat4 *m1, t_mat4 *m2)
{
	register t_midx__	i;
	t_mat4				res;

	i = 0;
	while (i < MLN)
	{
		res.m[i] = m1->m[i] + m2->m[i];
		++i;
	}
	return (res);
}

void	m4p_add(t_mat4 *r, t_mat4 *m1, t_mat4 *m2)
{
	register t_midx__	i;

	i = 0;
	while (i < MLN)
	{
		r->m[i] = m1->m[i] + m2->m[i];
		++i;
	}
}
