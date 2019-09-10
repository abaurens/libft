/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec3_f.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:08:11 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 15:36:25 by abaurens         ###   ########.fr       */
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
t_dbl		vec3i_norm__(t_vec3i *v);
t_flt		vec3i_normf__(t_vec3i *v);
t_ldbl		vec3i_norml__(t_vec3i *v);

t_vec3i		*vec3i_addv__(t_vec3i *v1, t_vec3i *v3);
t_vec3i		*vec3i_subv__(t_vec3i *v1, t_vec3i *v2);
t_vec3i		*vec3i_mulv__(t_vec3i *v1, t_vec3i *v2);

t_vec3i		*vec3i_add3__(t_vec3i *v1, t_big x, t_big y, t_big z);
t_vec3i		*vec3i_mul3__(t_vec3i *v1, t_big x, t_big y, t_big z);
t_vec3i		*vec3i_sub3__(t_vec3i *v1, t_big x, t_big y, t_big z);

t_vec3i		*vec3i_add1__(t_vec3i *v1, t_big i);
t_vec3i		*vec3i_sub1__(t_vec3i *v1, t_big i);
t_vec3i		*vec3i_mul1__(t_vec3i *v1, t_big i);
t_vec3i		*vec3i_div1__(t_vec3i *v1, t_big i);

t_vec3i		*vec3i_normalize__(t_vec3i *v);

static const t_vec3_f__	g_vec3i = {
	(t_vecf_len__)vec3i_norm__,
	(t_vecf_lenf__)vec3i_normf__,
	(t_vecf_lenl__)vec3i_norml__,
	(t_vecf_opv__)vec3i_addv__,
	(t_vecf_opv__)vec3i_subv__,
	(t_vecf_opv__)vec3i_mulv__,
	(t_vecf_op3__)vec3i_add3__,
	(t_vecf_op3__)vec3i_sub3__,
	(t_vecf_op3__)vec3i_mul3__,
	(t_vecf_op1__)vec3i_add1__,
	(t_vecf_op1__)vec3i_sub1__,
	(t_vecf_op1__)vec3i_mul1__,
	(t_vecf_op1__)vec3i_div1__,
	(t_vecf_op__)vec3i_normalize__,
};

/*
**	Vector 3 float
*/
t_dbl		vec3f_norm__(t_vec3f *v);
t_flt		vec3f_normf__(t_vec3f *v);
t_ldbl		vec3f_norml__(t_vec3f *v);

t_vec3f		*vec3f_addv__(t_vec3f *v1, t_vec3f *v2);
t_vec3f		*vec3f_subv__(t_vec3f *v1, t_vec3f *v2);
t_vec3f		*vec3f_mulv__(t_vec3f *v1, t_vec3f *v2);

t_vec3f		*vec3f_add3__(t_vec3f *v1, t_big x, t_big y, t_big z);
t_vec3f		*vec3f_sub3__(t_vec3f *v1, t_big x, t_big y, t_big z);
t_vec3f		*vec3f_mul3__(t_vec3f *v1, t_big x, t_big y, t_big z);

t_vec3f		*vec3f_add1__(t_vec3f *v1, t_big i);
t_vec3f		*vec3f_sub1__(t_vec3f *v1, t_big i);
t_vec3f		*vec3f_mul1__(t_vec3f *v1, t_big i);
t_vec3f		*vec3f_div1__(t_vec3f *v1, t_big i);

t_vec3f		*vec3f_normalize__(t_vec3f *v);

static const t_vec3_f__	g_vec3f = {
	(t_vecf_len__)vec3f_norm__,
	(t_vecf_lenf__)vec3f_normf__,
	(t_vecf_lenl__)vec3f_norml__,
	(t_vecf_opv__)vec3f_addv__,
	(t_vecf_opv__)vec3f_subv__,
	(t_vecf_opv__)vec3f_mulv__,
	(t_vecf_op3__)vec3f_add3__,
	(t_vecf_op3__)vec3f_sub3__,
	(t_vecf_op3__)vec3f_mul3__,
	(t_vecf_op1__)vec3f_add1__,
	(t_vecf_op1__)vec3f_sub1__,
	(t_vecf_op1__)vec3f_mul1__,
	(t_vecf_op1__)vec3f_div1__,
	(t_vecf_op__)vec3f_normalize__,
};

/*
**	Vector 3 double
*/
t_dbl		vec3_norm__(t_vec3 *v);
t_flt		vec3_normf__(t_vec3 *v);
t_ldbl		vec3_norml__(t_vec3 *v);

t_vec3		*vec3_addv__(t_vec3 *v1, t_vec3 *v2);
t_vec3		*vec3_subv__(t_vec3 *v1, t_vec3 *v2);
t_vec3		*vec3_mulv__(t_vec3 *v1, t_vec3 *v2);

t_vec3		*vec3_add3__(t_vec3 *v1, t_big x, t_big y, t_big z);
t_vec3		*vec3_sub3__(t_vec3 *v1, t_big x, t_big y, t_big z);
t_vec3		*vec3_mul3__(t_vec3 *v1, t_big x, t_big y, t_big z);

t_vec3		*vec3_add1__(t_vec3 *v1, t_big i);
t_vec3		*vec3_sub1__(t_vec3 *v1, t_big i);
t_vec3		*vec3_mul1__(t_vec3 *v1, t_big i);
t_vec3		*vec3_div1__(t_vec3 *v1, t_big i);

t_vec3		*vec3_normalize__(t_vec3 *v);


static const t_vec3_f__	g_vec3 = {
	(t_vecf_len__)vec3_norm__,
	(t_vecf_lenf__)vec3_normf__,
	(t_vecf_lenl__)vec3_norml__,
	(t_vecf_opv__)vec3_addv__,
	(t_vecf_opv__)vec3_subv__,
	(t_vecf_opv__)vec3_mulv__,
	(t_vecf_op3__)vec3_add3__,
	(t_vecf_op3__)vec3_sub3__,
	(t_vecf_op3__)vec3_mul3__,
	(t_vecf_op1__)vec3_add1__,
	(t_vecf_op1__)vec3_sub1__,
	(t_vecf_op1__)vec3_mul1__,
	(t_vecf_op1__)vec3_div1__,
	(t_vecf_op__)vec3_normalize__,
};

/*
**	Vector 3 long double
*/
t_dbl		vec3l_norm__(t_vec3l *v);
t_flt		vec3l_normf__(t_vec3l *v);
t_ldbl		vec3l_norml__(t_vec3l *v);

t_vec3l		*vec3l_addv__(t_vec3l *v1, t_vec3l *v2);
t_vec3l		*vec3l_subv__(t_vec3l *v1, t_vec3l *v2);
t_vec3l		*vec3l_mulv__(t_vec3l *v1, t_vec3l *v2);

t_vec3l		*vec3l_add3__(t_vec3l *v1, t_big x, t_big y, t_big z);
t_vec3l		*vec3l_sub3__(t_vec3l *v1, t_big x, t_big y, t_big z);
t_vec3l		*vec3l_mul3__(t_vec3l *v1, t_big x, t_big y, t_big z);

t_vec3l		*vec3l_add1__(t_vec3l *v1, t_big i);
t_vec3l		*vec3l_sub1__(t_vec3l *v1, t_big i);
t_vec3l		*vec3l_mul1__(t_vec3l *v1, t_big i);
t_vec3l		*vec3l_div1__(t_vec3l *v1, t_big i);

t_vec3l		*vec3l_normalize__(t_vec3l *v);

static const t_vec3_f__	g_vec3l = {
	(t_vecf_len__)vec3l_norm__,
	(t_vecf_lenf__)vec3l_normf__,
	(t_vecf_lenl__)vec3l_norml__,
	(t_vecf_opv__)vec3l_addv__,
	(t_vecf_opv__)vec3l_subv__,
	(t_vecf_opv__)vec3l_mulv__,
	(t_vecf_op3__)vec3l_add3__,
	(t_vecf_op3__)vec3l_sub3__,
	(t_vecf_op3__)vec3l_mul3__,
	(t_vecf_op1__)vec3l_add1__,
	(t_vecf_op1__)vec3l_sub1__,
	(t_vecf_op1__)vec3l_mul1__,
	(t_vecf_op1__)vec3l_div1__,
	(t_vecf_op__)vec3l_normalize__,
};

#endif
