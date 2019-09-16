/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec2_f.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:08:11 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 11:57:57 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC2_F_H
# define T_VEC2_F_H

# include "ftmath/vectors/t_vec_t.h"
# include "ftmath/vectors/t_vec_f.h"
# include "ftmath/vectors/t_vec2_t.h"

/*
**	Vector 3 integer
*/
t_dbl__		vec2i_norm__(t_vec2i *v);
t_flt__		vec2i_normf__(t_vec2i *v);
t_ldbl__	vec2i_norml__(t_vec2i *v);

t_vec2i		*vec2i_addv__(t_vec2i *v1, t_vec2i *v3);
t_vec2i		*vec2i_subv__(t_vec2i *v1, t_vec2i *v2);
t_vec2i		*vec2i_mulv__(t_vec2i *v1, t_vec2i *v2);

t_vec2i		*vec2i_add2__(t_vec2i *v1, t_big__ x, t_big__ y);
t_vec2i		*vec2i_mul2__(t_vec2i *v1, t_big__ x, t_big__ y);
t_vec2i		*vec2i_sub2__(t_vec2i *v1, t_big__ x, t_big__ y);

t_vec2i		*vec2i_add1__(t_vec2i *v1, t_big__ i);
t_vec2i		*vec2i_sub1__(t_vec2i *v1, t_big__ i);
t_vec2i		*vec2i_mul1__(t_vec2i *v1, t_big__ i);
t_vec2i		*vec2i_div1__(t_vec2i *v1, t_big__ i);

t_vec2i		*vec2i_normalize__(t_vec2i *v);

static const t_vec2_f__	g_vec2i = {
	(t_vecf_len__)vec2i_norm__,
	(t_vecf_lenf__)vec2i_normf__,
	(t_vecf_lenl__)vec2i_norml__,
	(t_vecf_opv__)vec2i_addv__,
	(t_vecf_opv__)vec2i_subv__,
	(t_vecf_opv__)vec2i_mulv__,
	(t_vecf_op2__)vec2i_add2__,
	(t_vecf_op2__)vec2i_sub2__,
	(t_vecf_op2__)vec2i_mul2__,
	(t_vecf_op1__)vec2i_add1__,
	(t_vecf_op1__)vec2i_sub1__,
	(t_vecf_op1__)vec2i_mul1__,
	(t_vecf_op1__)vec2i_div1__,
	(t_vecf_op__)vec2i_normalize__,
};

/*
**	Vector 3 float
*/
t_dbl__		vec2f_norm__(t_vec2f *v);
t_flt__		vec2f_normf__(t_vec2f *v);
t_ldbl__	vec2f_norml__(t_vec2f *v);

t_vec2f		*vec2f_addv__(t_vec2f *v1, t_vec2f *v2);
t_vec2f		*vec2f_subv__(t_vec2f *v1, t_vec2f *v2);
t_vec2f		*vec2f_mulv__(t_vec2f *v1, t_vec2f *v2);

t_vec2f		*vec2f_add2__(t_vec2f *v1, t_big__ x, t_big__ y);
t_vec2f		*vec2f_sub2__(t_vec2f *v1, t_big__ x, t_big__ y);
t_vec2f		*vec2f_mul2__(t_vec2f *v1, t_big__ x, t_big__ y);

t_vec2f		*vec2f_add1__(t_vec2f *v1, t_big__ i);
t_vec2f		*vec2f_sub1__(t_vec2f *v1, t_big__ i);
t_vec2f		*vec2f_mul1__(t_vec2f *v1, t_big__ i);
t_vec2f		*vec2f_div1__(t_vec2f *v1, t_big__ i);

t_vec2f		*vec2f_normalize__(t_vec2f *v);

static const t_vec2_f__	g_vec2f = {
	(t_vecf_len__)vec2f_norm__,
	(t_vecf_lenf__)vec2f_normf__,
	(t_vecf_lenl__)vec2f_norml__,
	(t_vecf_opv__)vec2f_addv__,
	(t_vecf_opv__)vec2f_subv__,
	(t_vecf_opv__)vec2f_mulv__,
	(t_vecf_op2__)vec2f_add2__,
	(t_vecf_op2__)vec2f_sub2__,
	(t_vecf_op2__)vec2f_mul2__,
	(t_vecf_op1__)vec2f_add1__,
	(t_vecf_op1__)vec2f_sub1__,
	(t_vecf_op1__)vec2f_mul1__,
	(t_vecf_op1__)vec2f_div1__,
	(t_vecf_op__)vec2f_normalize__,
};

/*
**	Vector 3 double
*/
t_dbl__		vec2_norm__(t_vec2 *v);
t_flt__		vec2_normf__(t_vec2 *v);
t_ldbl__	vec2_norml__(t_vec2 *v);

t_vec2		*vec2_addv__(t_vec2 *v1, t_vec2 *v2);
t_vec2		*vec2_subv__(t_vec2 *v1, t_vec2 *v2);
t_vec2		*vec2_mulv__(t_vec2 *v1, t_vec2 *v2);

t_vec2		*vec2_add2__(t_vec2 *v1, t_big__ x, t_big__ y);
t_vec2		*vec2_sub2__(t_vec2 *v1, t_big__ x, t_big__ y);
t_vec2		*vec2_mul2__(t_vec2 *v1, t_big__ x, t_big__ y);

t_vec2		*vec2_add1__(t_vec2 *v1, t_big__ i);
t_vec2		*vec2_sub1__(t_vec2 *v1, t_big__ i);
t_vec2		*vec2_mul1__(t_vec2 *v1, t_big__ i);
t_vec2		*vec2_div1__(t_vec2 *v1, t_big__ i);

t_vec2		*vec2_normalize__(t_vec2 *v);

static const t_vec2_f__	g_vec2d = {
	(t_vecf_len__)vec2_norm__,
	(t_vecf_lenf__)vec2_normf__,
	(t_vecf_lenl__)vec2_norml__,
	(t_vecf_opv__)vec2_addv__,
	(t_vecf_opv__)vec2_subv__,
	(t_vecf_opv__)vec2_mulv__,
	(t_vecf_op2__)vec2_add2__,
	(t_vecf_op2__)vec2_sub2__,
	(t_vecf_op2__)vec2_mul2__,
	(t_vecf_op1__)vec2_add1__,
	(t_vecf_op1__)vec2_sub1__,
	(t_vecf_op1__)vec2_mul1__,
	(t_vecf_op1__)vec2_div1__,
	(t_vecf_op__)vec2_normalize__,
};

/*
**	Vector 3 long double
*/
t_dbl__		vec2l_norm__(t_vec2l *v);
t_flt__		vec2l_normf__(t_vec2l *v);
t_ldbl__	vec2l_norml__(t_vec2l *v);

t_vec2l		*vec2l_addv__(t_vec2l *v1, t_vec2l *v2);
t_vec2l		*vec2l_subv__(t_vec2l *v1, t_vec2l *v2);
t_vec2l		*vec2l_mulv__(t_vec2l *v1, t_vec2l *v2);

t_vec2l		*vec2l_add2__(t_vec2l *v1, t_big__ x, t_big__ y);
t_vec2l		*vec2l_sub2__(t_vec2l *v1, t_big__ x, t_big__ y);
t_vec2l		*vec2l_mul2__(t_vec2l *v1, t_big__ x, t_big__ y);

t_vec2l		*vec2l_add1__(t_vec2l *v1, t_big__ i);
t_vec2l		*vec2l_sub1__(t_vec2l *v1, t_big__ i);
t_vec2l		*vec2l_mul1__(t_vec2l *v1, t_big__ i);
t_vec2l		*vec2l_div1__(t_vec2l *v1, t_big__ i);

t_vec2l		*vec2l_normalize__(t_vec2l *v);

static const t_vec2_f__	g_vec2l = {
	(t_vecf_len__)vec2l_norm__,
	(t_vecf_lenf__)vec2l_normf__,
	(t_vecf_lenl__)vec2l_norml__,
	(t_vecf_opv__)vec2l_addv__,
	(t_vecf_opv__)vec2l_subv__,
	(t_vecf_opv__)vec2l_mulv__,
	(t_vecf_op2__)vec2l_add2__,
	(t_vecf_op2__)vec2l_sub2__,
	(t_vecf_op2__)vec2l_mul2__,
	(t_vecf_op1__)vec2l_add1__,
	(t_vecf_op1__)vec2l_sub1__,
	(t_vecf_op1__)vec2l_mul1__,
	(t_vecf_op1__)vec2l_div1__,
	(t_vecf_op__)vec2l_normalize__,
};

#endif
