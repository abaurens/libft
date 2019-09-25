/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transpose.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 17:23:27 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/25 17:39:57 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmatrix/t_midx.h"
#include "ftmatrix/t_mat4.h"

/*

1 3 2 7
4 0 0 0
1 2 2 9
0 5 1 1

1 4 1 0
3 0 2 5
2 0 2 1
7 0 9 1

*/

t_mat4	m4_transpose(t_mat4 *m)
{
	register t_midx__	x;
	register t_midx__	y;
	t_mat4				res;

	y = 0;
	while (y < 4)
	{
		x = y;
		res.m[y + (y * 4)] = m->m[y + (y * 4)];
		while (++x < 4)
		{
			res.m[x + (y * 4)] = m->m[y + (x * 4)];
			res.m[y + (x * 4)] = m->m[x + (y * 4)];
		}
		y++;
	}
	return (res);
}

void	m4p_transpose(t_mat4 *r, t_mat4 *m)
{
	register t_midx__	x;
	register t_midx__	y;
	t_mat4				res;

	y = 0;
	while (y < 4)
	{
		x = y;
		res.m[y + (y * 4)] = m->m[y + (y * 4)];
		while (++x < 4)
		{
			res.m[x + (y * 4)] = m->m[y + (x * 4)];
			res.m[y + (x * 4)] = m->m[x + (y * 4)];
		}
		y++;
	}
	*r = res;
}
