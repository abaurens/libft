/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   identity.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:35:56 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/25 11:10:58 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmatrix/t_midx.h"
#include "ftmatrix/t_mat4.h"

t_mat4	m4_identity(void)
{
	register t_midx__	i;
	t_mat4				res;

	i = -1;
	while (++i < MLN)
		res.m[i] = !(i % 5);
	return (res);
}
