/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec2_f.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:08:11 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 15:05:06 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC2_F_H
# define T_VEC2_F_H

# include "ftmath/vectors/t_vec2_t.h"

t_dbl__		v2_norm(t_vec2 *v);
t_flt__		v2f_norm(t_vec2 *v);
t_ldbl__	v2l_norm(t_vec2 *v);
t_dbl__		v2i_norm(t_vec2i *v);
t_flt__		v2i_norml(t_vec2i *v);
t_ldbl__	v2i_normf(t_vec2i *v);

t_vec2		*v2_addv(t_vec2 *v1, t_vec2 *v2);
t_vec2i		*v2i_addv(t_vec2i *v1, t_vec2i *v3);
t_vec2f		*v2f_addv(t_vec2f *v1, t_vec2f *v2);
t_vec2l		*v2l_addv(t_vec2l *v1, t_vec2l *v2);

t_vec2		*v2_subv(t_vec2 *v1, t_vec2 *v2);
t_vec2i		*v2i_subv(t_vec2i *v1, t_vec2i *v2);
t_vec2f		*v2f_subv(t_vec2f *v1, t_vec2f *v2);
t_vec2l		*v2l_subv(t_vec2l *v1, t_vec2l *v2);

t_vec2		*v2_mulv(t_vec2 *v1, t_vec2 *v2);
t_vec2i		*v2i_mulv(t_vec2i *v1, t_vec2i *v2);
t_vec2f		*v2f_mulv(t_vec2f *v1, t_vec2f *v2);
t_vec2l		*v2l_mulv(t_vec2l *v1, t_vec2l *v2);

t_vec2		*v2_add2(t_vec2 *v1, t_dbl__ x, t_dbl__ y);
t_vec2i		*v2i_add2(t_vec2i *v1, t_int__ x, t_int__ y);
t_vec2f		*v2f_add2(t_vec2f *v1, t_flt__ x, t_flt__ y);
t_vec2l		*v2l_add2(t_vec2l *v1, t_ldbl__ x, t_ldbl__ y);

t_vec2		*v2_sub2(t_vec2 *v1, t_dbl__ x, t_dbl__ y);
t_vec2i		*v2i_sub2(t_vec2i *v1, t_int__ x, t_int__ y);
t_vec2f		*v2f_sub2(t_vec2f *v1, t_flt__ x, t_flt__ y);
t_vec2l		*v2l_sub2(t_vec2l *v1, t_ldbl__ x, t_ldbl__ y);

t_vec2		*v2_mul2(t_vec2 *v1, t_dbl__ x, t_dbl__ y);
t_vec2i		*v2i_mul2(t_vec2i *v1, t_int__ x, t_int__ y);
t_vec2f		*v2f_mul2(t_vec2f *v1, t_flt__ x, t_flt__ y);
t_vec2l		*v2l_mul2(t_vec2l *v1, t_ldbl__ x, t_ldbl__ y);

t_vec2		*v2_add1(t_vec2 *v1, t_dbl__ i);
t_vec2i		*v2i_add1(t_vec2i *v1, t_int__ i);
t_vec2f		*v2f_add1(t_vec2f *v1, t_flt__ i);
t_vec2l		*v2l_add1(t_vec2l *v1, t_ldbl__ i);

t_vec2		*v2_sub1(t_vec2 *v1, t_dbl__ i);
t_vec2i		*v2i_sub1(t_vec2i *v1, t_int__ i);
t_vec2f		*v2f_sub1(t_vec2f *v1, t_flt__ i);
t_vec2l		*v2l_sub1(t_vec2l *v1, t_ldbl__ i);

t_vec2		*v2_mul1(t_vec2 *v1, t_dbl__ i);
t_vec2i		*v2i_mul1(t_vec2i *v1, t_int__ i);
t_vec2f		*v2f_mul1(t_vec2f *v1, t_flt__ i);
t_vec2l		*v2l_mul1(t_vec2l *v1, t_ldbl__ i);

t_vec2		*v2_div1(t_vec2 *v1, t_dbl__ i);
t_vec2i		*v2i_div1(t_vec2i *v1, t_int__ i);
t_vec2f		*v2f_div1(t_vec2f *v1, t_flt__ i);
t_vec2l		*v2l_div1(t_vec2l *v1, t_ldbl__ i);

t_vec2		*v2_normalize(t_vec2 *v);
t_vec2i		*v2i_normalize(t_vec2i *v);
t_vec2f		*v2f_normalize(t_vec2f *v);
t_vec2l		*v2l_normalize(t_vec2l *v);

t_dbl__		v2_dot(t_vec2 *v1, t_vec2 *v2);
t_dbl__		v2i_dot(t_vec2i *v1, t_vec2i *v2);
t_flt__		v2f_dot(t_vec2f *v1, t_vec2f *v2);
t_ldbl__	v2l_dot(t_vec2l *v1, t_vec2l *v2);

#endif
