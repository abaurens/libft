/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec3.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:14:06 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:17:14 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC3_H
# define T_VEC3_H

# include <stdlib.h>
# include "ftmath/vectors/t_vec3_t.h"
# include "ftmath/vectors/t_vec3_f.h"

t_dbl__		v3_norm__(t_vec_gen__ *v);
t_flt__		v3_normf__(t_vec_gen__ *v);
t_ldbl__	v3_norml__(t_vec_gen__ *v);

t_vec_gen__	*v3_addv__(t_vec_gen__ *v1, t_vec_gen__ *v2);
t_vec_gen__	*v3_subv__(t_vec_gen__ *v1, t_vec_gen__ *v2);
t_vec_gen__	*v3_mulv__(t_vec_gen__ *v1, t_vec_gen__ *v2);

t_vec_gen__	*v3_add3__(t_vec_gen__ *v1, t_big__ x, t_big__ y, t_big__ z);
t_vec_gen__	*v3_sub3__(t_vec_gen__ *v1, t_big__ x, t_big__ y, t_big__ z);
t_vec_gen__	*v3_mul3__(t_vec_gen__ *v1, t_big__ x, t_big__ y, t_big__ z);

t_vec_gen__	*v3_add1__(t_vec_gen__ *v1, t_big__ i);
t_vec_gen__	*v3_sub1__(t_vec_gen__ *v1, t_big__ i);
t_vec_gen__	*v3_mul1__(t_vec_gen__ *v1, t_big__ i);
t_vec_gen__	*v3_div1__(t_vec_gen__ *v1, t_big__ i);

t_vec_gen__	*v3_normalize__(t_vec_gen__ *v);

static const t_vec3_f__	g_vec3 = {
	(t_vecf_len__)v3_norm__,
	(t_vecf_lenf__)v3_normf__,
	(t_vecf_lenl__)v3_norml__,
	(t_vecf_opv__)v3_addv__,
	(t_vecf_opv__)v3_subv__,
	(t_vecf_opv__)v3_mulv__,
	(t_vecf_op3__)v3_add3__,
	(t_vecf_op3__)v3_sub3__,
	(t_vecf_op3__)v3_mul3__,
	(t_vecf_op1__)v3_add1__,
	(t_vecf_op1__)v3_sub1__,
	(t_vecf_op1__)v3_mul1__,
	(t_vecf_op1__)v3_div1__,
	(t_vecf_op__)v3_normalize__,
};

static const t_vec3_f__	*g_v3f__[] = {
	&g_vec3i,
	&g_vec3f,
	&g_vec3d,
	&g_vec3l,
	NULL
};

#endif
