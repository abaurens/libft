/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   null.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:54:47 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/25 11:11:23 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmatrix/t_midx.h"
#include "ftmatrix/t_mat4.h"

t_mat4	m4_null(void)
{
	register t_midx__	i;
	t_mat4				res;

	i = 0;
	while (i < MLN)
		res.m[i++] = 0;
	return (res);
}
