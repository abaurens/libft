/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec3_f.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:08:11 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 13:29:58 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC3_F_H
# define T_VEC3_F_H

# include "ftmath/vectors/t_vec_t.h"
# include "ftmath/vectors/t_vec_f.h"
# include "ftmath/vectors/t_vec3_t.h"

/*
**	Vector 3 integer
*/
t_dbl__		vec3i_norm__(t_vec3i *v);
t_flt__		vec3i_normf__(t_vec3i *v);
t_ldbl__	vec3i_norml__(t_vec3i *v);

t_vec3i		*vec3i_addv__(t_vec3i *v1, t_vec3i *v3);
t_vec3i		*vec3i_subv__(t_vec3i *v1, t_vec3i *v2);
t_vec3i		*vec3i_mulv__(t_vec3i *v1, t_vec3i *v2);

t_vec3i		*vec3i_add3__(t_vec3i *v1, t_big__ x, t_big__ y, t_big__ z);
t_vec3i		*vec3i_mul3__(t_vec3i *v1, t_big__ x, t_big__ y, t_big__ z);
t_vec3i		*vec3i_sub3__(t_vec3i *v1, t_big__ x, t_big__ y, t_big__ z);

t_vec3i		*vec3i_add1__(t_vec3i *v1, t_big__ i);
t_vec3i		*vec3i_sub1__(t_vec3i *v1, t_big__ i);
t_vec3i		*vec3i_mul1__(t_vec3i *v1, t_big__ i);
t_vec3i		*vec3i_div1__(t_vec3i *v1, t_big__ i);

t_vec3i		*vec3i_normalize__(t_vec3i *v);

t_dbl__		vec3i_dot__(t_vec3i *v1, t_vec3i *v2);

t_vec3i		*vec3i_cross__(t_vec3i *v, t_vec3i *v1, t_vec3i *v2);

static const t_vec3_f__	g_vec3i = {
	(t_vecf_d_v__)vec3i_norm__,
	(t_vecf_f_v__)vec3i_normf__,
	(t_vecf_l_v__)vec3i_norml__,
	(t_vecf_v_vv__)vec3i_addv__,
	(t_vecf_v_vv__)vec3i_subv__,
	(t_vecf_v_vv__)vec3i_mulv__,
	(t_vecf_v_vnnn__)vec3i_add3__,
	(t_vecf_v_vnnn__)vec3i_sub3__,
	(t_vecf_v_vnnn__)vec3i_mul3__,
	(t_vecf_v_vn__)vec3i_add1__,
	(t_vecf_v_vn__)vec3i_sub1__,
	(t_vecf_v_vn__)vec3i_mul1__,
	(t_vecf_v_vn__)vec3i_div1__,
	(t_vecf_v_v__)vec3i_normalize__,
	(t_vecf_d_vv__)vec3i_dot__,
	(t_vecf_v_vvv__)vec3i_cross__,
};

/*
**	Vector 3 float
*/
t_dbl__		vec3f_norm__(t_vec3f *v);
t_flt__		vec3f_normf__(t_vec3f *v);
t_ldbl__	vec3f_norml__(t_vec3f *v);

t_vec3f		*vec3f_addv__(t_vec3f *v1, t_vec3f *v2);
t_vec3f		*vec3f_subv__(t_vec3f *v1, t_vec3f *v2);
t_vec3f		*vec3f_mulv__(t_vec3f *v1, t_vec3f *v2);

t_vec3f		*vec3f_add3__(t_vec3f *v1, t_big__ x, t_big__ y, t_big__ z);
t_vec3f		*vec3f_sub3__(t_vec3f *v1, t_big__ x, t_big__ y, t_big__ z);
t_vec3f		*vec3f_mul3__(t_vec3f *v1, t_big__ x, t_big__ y, t_big__ z);

t_vec3f		*vec3f_add1__(t_vec3f *v1, t_big__ i);
t_vec3f		*vec3f_sub1__(t_vec3f *v1, t_big__ i);
t_vec3f		*vec3f_mul1__(t_vec3f *v1, t_big__ i);
t_vec3f		*vec3f_div1__(t_vec3f *v1, t_big__ i);

t_vec3f		*vec3f_normalize__(t_vec3f *v);

t_dbl__		vec3f_dot__(t_vec3f *v1, t_vec3f *v2);

t_vec3f		*vec3f_cross__(t_vec3f *v, t_vec3f *v1, t_vec3f *v2);

static const t_vec3_f__	g_vec3f = {
	(t_vecf_d_v__)vec3f_norm__,
	(t_vecf_f_v__)vec3f_normf__,
	(t_vecf_l_v__)vec3f_norml__,
	(t_vecf_v_vv__)vec3f_addv__,
	(t_vecf_v_vv__)vec3f_subv__,
	(t_vecf_v_vv__)vec3f_mulv__,
	(t_vecf_v_vnnn__)vec3f_add3__,
	(t_vecf_v_vnnn__)vec3f_sub3__,
	(t_vecf_v_vnnn__)vec3f_mul3__,
	(t_vecf_v_vn__)vec3f_add1__,
	(t_vecf_v_vn__)vec3f_sub1__,
	(t_vecf_v_vn__)vec3f_mul1__,
	(t_vecf_v_vn__)vec3f_div1__,
	(t_vecf_v_v__)vec3f_normalize__,
	(t_vecf_d_vv__)vec3f_dot__,
	(t_vecf_v_vvv__)vec3f_cross__,
};

/*
**	Vector 3 double
*/
t_dbl__		vec3_norm__(t_vec3 *v);
t_flt__		vec3_normf__(t_vec3 *v);
t_ldbl__	vec3_norml__(t_vec3 *v);

t_vec3		*vec3_addv__(t_vec3 *v1, t_vec3 *v2);
t_vec3		*vec3_subv__(t_vec3 *v1, t_vec3 *v2);
t_vec3		*vec3_mulv__(t_vec3 *v1, t_vec3 *v2);

t_vec3		*vec3_add3__(t_vec3 *v1, t_big__ x, t_big__ y, t_big__ z);
t_vec3		*vec3_sub3__(t_vec3 *v1, t_big__ x, t_big__ y, t_big__ z);
t_vec3		*vec3_mul3__(t_vec3 *v1, t_big__ x, t_big__ y, t_big__ z);

t_vec3		*vec3_add1__(t_vec3 *v1, t_big__ i);
t_vec3		*vec3_sub1__(t_vec3 *v1, t_big__ i);
t_vec3		*vec3_mul1__(t_vec3 *v1, t_big__ i);
t_vec3		*vec3_div1__(t_vec3 *v1, t_big__ i);

t_vec3		*vec3_normalize__(t_vec3 *v);

t_dbl__		vec3_dot__(t_vec3 *v1, t_vec3 *v2);

t_vec3		*vec3_cross__(t_vec3 *v, t_vec3 *v1, t_vec3 *v2);

static const t_vec3_f__	g_vec3d = {
	(t_vecf_d_v__)vec3_norm__,
	(t_vecf_f_v__)vec3_normf__,
	(t_vecf_l_v__)vec3_norml__,
	(t_vecf_v_vv__)vec3_addv__,
	(t_vecf_v_vv__)vec3_subv__,
	(t_vecf_v_vv__)vec3_mulv__,
	(t_vecf_v_vnnn__)vec3_add3__,
	(t_vecf_v_vnnn__)vec3_sub3__,
	(t_vecf_v_vnnn__)vec3_mul3__,
	(t_vecf_v_vn__)vec3_add1__,
	(t_vecf_v_vn__)vec3_sub1__,
	(t_vecf_v_vn__)vec3_mul1__,
	(t_vecf_v_vn__)vec3_div1__,
	(t_vecf_v_v__)vec3_normalize__,
	(t_vecf_d_vv__)vec3_dot__,
	(t_vecf_v_vvv__)vec3_cross__,
};

/*
**	Vector 3 long double
*/
t_dbl__		vec3l_norm__(t_vec3l *v);
t_flt__		vec3l_normf__(t_vec3l *v);
t_ldbl__	vec3l_norml__(t_vec3l *v);

t_vec3l		*vec3l_addv__(t_vec3l *v1, t_vec3l *v2);
t_vec3l		*vec3l_subv__(t_vec3l *v1, t_vec3l *v2);
t_vec3l		*vec3l_mulv__(t_vec3l *v1, t_vec3l *v2);

t_vec3l		*vec3l_add3__(t_vec3l *v1, t_big__ x, t_big__ y, t_big__ z);
t_vec3l		*vec3l_sub3__(t_vec3l *v1, t_big__ x, t_big__ y, t_big__ z);
t_vec3l		*vec3l_mul3__(t_vec3l *v1, t_big__ x, t_big__ y, t_big__ z);

t_vec3l		*vec3l_add1__(t_vec3l *v1, t_big__ i);
t_vec3l		*vec3l_sub1__(t_vec3l *v1, t_big__ i);
t_vec3l		*vec3l_mul1__(t_vec3l *v1, t_big__ i);
t_vec3l		*vec3l_div1__(t_vec3l *v1, t_big__ i);

t_vec3l		*vec3l_normalize__(t_vec3l *v);

t_dbl__		vec3l_dot__(t_vec3l *v1, t_vec3l *v2);

t_vec3l		*vec3l_cross__(t_vec3l *v, t_vec3l *v1, t_vec3l *v2);

static const t_vec3_f__	g_vec3l = {
	(t_vecf_d_v__)vec3l_norm__,
	(t_vecf_f_v__)vec3l_normf__,
	(t_vecf_l_v__)vec3l_norml__,
	(t_vecf_v_vv__)vec3l_addv__,
	(t_vecf_v_vv__)vec3l_subv__,
	(t_vecf_v_vv__)vec3l_mulv__,
	(t_vecf_v_vnnn__)vec3l_add3__,
	(t_vecf_v_vnnn__)vec3l_sub3__,
	(t_vecf_v_vnnn__)vec3l_mul3__,
	(t_vecf_v_vn__)vec3l_add1__,
	(t_vecf_v_vn__)vec3l_sub1__,
	(t_vecf_v_vn__)vec3l_mul1__,
	(t_vecf_v_vn__)vec3l_div1__,
	(t_vecf_v_v__)vec3l_normalize__,
	(t_vecf_d_vv__)vec3l_dot__,
	(t_vecf_v_vvv__)vec3l_cross__,
};

#endif
