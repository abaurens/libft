/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:51:25 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 12:58:06 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC2_H
# define T_VEC2_H

# include <stdlib.h>
# include "ftmath/vectors/t_vec2_t.h"
# include "ftmath/vectors/t_vec2_f.h"

t_dbl__		v2_norm__(t_vec_gen__ *v);
t_flt__		v2_normf__(t_vec_gen__ *v);
t_ldbl__	v2_norml__(t_vec_gen__ *v);

t_vec_gen__	*v2_addv__(t_vec_gen__ *v1, t_vec_gen__ *v2);
t_vec_gen__	*v2_subv__(t_vec_gen__ *v1, t_vec_gen__ *v2);
t_vec_gen__	*v2_mulv__(t_vec_gen__ *v1, t_vec_gen__ *v2);

t_vec_gen__	*v2_add2__(t_vec_gen__ *v1, t_big__ x, t_big__ y);
t_vec_gen__	*v2_sub2__(t_vec_gen__ *v1, t_big__ x, t_big__ y);
t_vec_gen__	*v2_mul2__(t_vec_gen__ *v1, t_big__ x, t_big__ y);

t_vec_gen__	*v2_add1__(t_vec_gen__ *v1, t_big__ i);
t_vec_gen__	*v2_sub1__(t_vec_gen__ *v1, t_big__ i);
t_vec_gen__	*v2_mul1__(t_vec_gen__ *v1, t_big__ i);
t_vec_gen__	*v2_div1__(t_vec_gen__ *v1, t_big__ i);

t_vec_gen__	*v2_normalize__(t_vec_gen__ *v);

t_dbl__		v2_dot__(t_vec_gen__ *v1, t_vec_gen__ *v2);

static const t_vec2_f__	g_vec2 = {
	(t_vecf_d_v__)v2_norm__,
	(t_vecf_f_v__)v2_normf__,
	(t_vecf_l_v__)v2_norml__,
	(t_vecf_v_vv__)v2_addv__,
	(t_vecf_v_vv__)v2_subv__,
	(t_vecf_v_vv__)v2_mulv__,
	(t_vecf_v_vnn__)v2_add2__,
	(t_vecf_v_vnn__)v2_sub2__,
	(t_vecf_v_vnn__)v2_mul2__,
	(t_vecf_v_vn__)v2_add1__,
	(t_vecf_v_vn__)v2_sub1__,
	(t_vecf_v_vn__)v2_mul1__,
	(t_vecf_v_vn__)v2_div1__,
	(t_vecf_v_v__)v2_normalize__,
	(t_vecf_d_vv__)v2_dot__,
};

static const t_vec2_f__	*g_v2f__[] = {
	&g_vec2i,
	&g_vec2f,
	&g_vec2d,
	&g_vec2l,
	NULL
};

#endif
