/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec3.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 21:09:47 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 11:45:00 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC3_H
# define T_VEC3_H

# include "ftmath/vectors/t_vec3_t.h"

t_vec3i	*vec3i_add__(t_vec3i *v1, t_vec3i *v3);
t_vec3i	*vec3i_addi__(t_vec3i *v1, t_int i);
t_vec3i	*vec3i_add3__(t_vec3i *v1, t_int x, t_int y, t_int z);

t_vec3i	*vec3i_sub__(t_vec3i *v1, t_vec3i *v2);
t_vec3i	*vec3i_subi__(t_vec3i *v1, t_int i);
t_vec3i	*vec3i_sub3__(t_vec3i *v1, t_int x, t_int y, t_int z);

t_dbl	*vec3i_norm__(t_vec3i *v);
t_flt	*vec3i_normf__(t_vec3i *v);
t_ldbl	*vec3i_norml__(t_vec3i *v);
t_vec3i	*vec3i_normalize__(t_vec3i *v);

static const t_vec3i_f__	g_vec3if = {
	vec3i_norm__,
	vec3i_normf__,
	vec3i_norml__,
	vec3i_add__,
	vec3i_addi__,
	vec3i_add3__,
	vec3i_sub__,
	vec3i_subi__,
	vec3i_sub3__,
	vec3i_normalize__,
};

#endif
