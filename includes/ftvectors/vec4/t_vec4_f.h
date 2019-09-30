/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec4_f.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:08:11 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 09:08:49 by baurens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC4_F_H
# define T_VEC4_F_H

# include "ftvectors/vec4/t_vec4_t.h"

/*
**	norm computation
*/
t_dbl__		v4_norm(t_vec4 *v);
t_flt__		v4f_norm(t_vec4f *v);
t_ldbl__	v4l_norm(t_vec4l *v);

t_dbl__		v4i_norm(t_vec4i *v);
t_flt__		v4i_normf(t_vec4i *v);
t_ldbl__	v4i_norml(t_vec4i *v);

/*
**	vector to vector operations
*/
t_vec4		v4_addv(t_vec4 *v1, t_vec4 *v2);
t_vec4i		v4i_addv(t_vec4i *v1, t_vec4i *v4);
t_vec4f		v4f_addv(t_vec4f *v1, t_vec4f *v2);
t_vec4l		v4l_addv(t_vec4l *v1, t_vec4l *v2);

t_vec4		v4_subv(t_vec4 *v1, t_vec4 *v2);
t_vec4i		v4i_subv(t_vec4i *v1, t_vec4i *v2);
t_vec4f		v4f_subv(t_vec4f *v1, t_vec4f *v2);
t_vec4l		v4l_subv(t_vec4l *v1, t_vec4l *v2);

t_vec4		v4_mulv(t_vec4 *v1, t_vec4 *v2);
t_vec4i		v4i_mulv(t_vec4i *v1, t_vec4i *v2);
t_vec4f		v4f_mulv(t_vec4f *v1, t_vec4f *v2);
t_vec4l		v4l_mulv(t_vec4l *v1, t_vec4l *v2);

/*
**	scalar to vector operations
*/
t_vec4		v4_add1(t_vec4 *v, t_dbl__ i);
t_vec4i		v4i_add1(t_vec4i *v, t_int__ i);
t_vec4f		v4f_add1(t_vec4f *v, t_flt__ i);
t_vec4l		v4l_add1(t_vec4l *v, t_ldbl__ i);

t_vec4		v4_sub1(t_vec4 *v, t_dbl__ i);
t_vec4i		v4i_sub1(t_vec4i *v, t_int__ i);
t_vec4f		v4f_sub1(t_vec4f *v, t_flt__ i);
t_vec4l		v4l_sub1(t_vec4l *v, t_ldbl__ i);

t_vec4		v4_mul1(t_vec4 *v, t_dbl__ i);
t_vec4i		v4i_mul1(t_vec4i *v, t_int__ i);
t_vec4f		v4f_mul1(t_vec4f *v, t_flt__ i);
t_vec4l		v4l_mul1(t_vec4l *v, t_ldbl__ i);

t_vec4		v4_div1(t_vec4 *v, t_dbl__ i);
t_vec4i		v4i_div1(t_vec4i *v, t_int__ i);
t_vec4f		v4f_div1(t_vec4f *v, t_flt__ i);
t_vec4l		v4l_div1(t_vec4l *v, t_ldbl__ i);

/*
**	decomposed vector to vector operation
*/
t_vec4		v4_add4(t_vec4 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z, t_dbl__ w);
t_vec4i		v4i_add4(t_vec4i *v, t_int__ x, t_int__ y, t_int__ z, t_int__ w);
t_vec4f		v4f_add4(t_vec4f *v, t_flt__ x, t_flt__ y, t_flt__ z, t_flt__ w);
t_vec4l		v4l_add4(t_vec4l *v,
						t_ldbl__ x, t_ldbl__ y, t_ldbl__ z, t_ldbl__ w);

t_vec4		v4_sub4(t_vec4 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z, t_dbl__ w);
t_vec4i		v4i_sub4(t_vec4i *v, t_int__ x, t_int__ y, t_int__ z, t_int__ w);
t_vec4f		v4f_sub4(t_vec4f *v, t_flt__ x, t_flt__ y, t_flt__ z, t_flt__ w);
t_vec4l		v4l_sub4(t_vec4l *v,
						t_ldbl__ x, t_ldbl__ y, t_ldbl__ z, t_ldbl__ w);

t_vec4		v4_mul4(t_vec4 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z, t_dbl__ w);
t_vec4i		v4i_mul4(t_vec4i *v, t_int__ x, t_int__ y, t_int__ z, t_int__ w);
t_vec4f		v4f_mul4(t_vec4f *v, t_flt__ x, t_flt__ y, t_flt__ z, t_flt__ w);
t_vec4l		v4l_mul4(t_vec4l *v,
						t_ldbl__ x, t_ldbl__ y, t_ldbl__ z, t_ldbl__ w);

/*
**	normalization operation
*/
t_vec4		v4_normalize(t_vec4 *v);
t_vec4i		v4i_normalize(t_vec4i *v);
t_vec4f		v4f_normalize(t_vec4f *v);
t_vec4l		v4l_normalize(t_vec4l *v);

/*
**	dot product operation
*/
t_dbl__		v4_dot(t_vec4 *v1, t_vec4 *v2);
t_dbl__		v4i_dot(t_vec4i *v1, t_vec4i *v2);
t_flt__		v4f_dot(t_vec4f *v1, t_vec4f *v2);
t_ldbl__	v4l_dot(t_vec4l *v1, t_vec4l *v2);

/*
**	cross product operation
*/
t_vec4		v4_cross(t_vec4 *v1, t_vec4 *v2, t_vec4 *v3);
t_vec4i		v4i_cross(t_vec4i *v1, t_vec4i *v2, t_vec4i *v3);
t_vec4f		v4f_cross(t_vec4f *v1, t_vec4f *v2, t_vec4f *v3);
t_vec4l		v4l_cross(t_vec4l *v1, t_vec4l *v2, t_vec4l *v3);

#endif
