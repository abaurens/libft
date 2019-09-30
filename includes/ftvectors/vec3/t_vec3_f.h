/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec3_f.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:08:11 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 11:55:16 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC3_F_H
# define T_VEC3_F_H

# include "ftvectors/vec3/t_vec3_t.h"

/*
**	norm computation
*/
t_dbl__		v3_norm(t_vec3 *v);
t_flt__		v3f_norm(t_vec3f *v);
t_ldbl__	v3l_norm(t_vec3l *v);

t_dbl__		v3i_norm(t_vec3i *v);
t_flt__		v3i_normf(t_vec3i *v);
t_ldbl__	v3i_norml(t_vec3i *v);

/*
**	vector to vector operations
*/
t_vec3		v3_addv(t_vec3 *v1, t_vec3 *v2);
t_vec3i		v3i_addv(t_vec3i *v1, t_vec3i *v3);
t_vec3f		v3f_addv(t_vec3f *v1, t_vec3f *v2);
t_vec3l		v3l_addv(t_vec3l *v1, t_vec3l *v2);

t_vec3		v3_subv(t_vec3 *v1, t_vec3 *v2);
t_vec3i		v3i_subv(t_vec3i *v1, t_vec3i *v2);
t_vec3f		v3f_subv(t_vec3f *v1, t_vec3f *v2);
t_vec3l		v3l_subv(t_vec3l *v1, t_vec3l *v2);

t_vec3		v3_mulv(t_vec3 *v1, t_vec3 *v2);
t_vec3i		v3i_mulv(t_vec3i *v1, t_vec3i *v2);
t_vec3f		v3f_mulv(t_vec3f *v1, t_vec3f *v2);
t_vec3l		v3l_mulv(t_vec3l *v1, t_vec3l *v2);

/*
**	scalar to vector operations
*/
t_vec3		v3_add1(t_vec3 *v, t_dbl__ i);
t_vec3i		v3i_add1(t_vec3i *v, t_int__ i);
t_vec3f		v3f_add1(t_vec3f *v, t_flt__ i);
t_vec3l		v3l_add1(t_vec3l *v, t_ldbl__ i);

t_vec3		v3_sub1(t_vec3 *v, t_dbl__ i);
t_vec3i		v3i_sub1(t_vec3i *v, t_int__ i);
t_vec3f		v3f_sub1(t_vec3f *v, t_flt__ i);
t_vec3l		v3l_sub1(t_vec3l *v, t_ldbl__ i);

t_vec3		v3_mul1(t_vec3 *v, t_dbl__ i);
t_vec3i		v3i_mul1(t_vec3i *v, t_int__ i);
t_vec3f		v3f_mul1(t_vec3f *v, t_flt__ i);
t_vec3l		v3l_mul1(t_vec3l *v, t_ldbl__ i);

t_vec3		v3_div1(t_vec3 *v, t_dbl__ i);
t_vec3i		v3i_div1(t_vec3i *v, t_int__ i);
t_vec3f		v3f_div1(t_vec3f *v, t_flt__ i);
t_vec3l		v3l_div1(t_vec3l *v, t_ldbl__ i);

/*
**	decomposed vector to vector operation
*/
t_vec3		v3_addc(t_vec3 *v, uint32_t c, ...);
t_vec3i		v3i_addc(t_vec3i *v, uint32_t c, ...);
t_vec3f		v3f_addc(t_vec3f *v, uint32_t c, ...);
t_vec3l		v3l_addc(t_vec3l *v, uint32_t c, ...);

t_vec3		v3_subc(t_vec3 *v, uint32_t c, ...);
t_vec3i		v3i_subc(t_vec3i *v, uint32_t c, ...);
t_vec3f		v3f_subc(t_vec3f *v, uint32_t c, ...);
t_vec3l		v3l_subc(t_vec3l *v, uint32_t c, ...);

t_vec3		v3_mulc(t_vec3 *v, uint32_t c, ...);
t_vec3i		v3i_mulc(t_vec3i *v, uint32_t c, ...);
t_vec3f		v3f_mulc(t_vec3f *v, uint32_t c, ...);
t_vec3l		v3l_mulc(t_vec3l *v, uint32_t c, ...);

/*
**	normalization operation
*/
t_vec3		v3_normalize(t_vec3 *v);
t_vec3i		v3i_normalize(t_vec3i *v);
t_vec3f		v3f_normalize(t_vec3f *v);
t_vec3l		v3l_normalize(t_vec3l *v);

/*
**	dot product operation
*/
t_dbl__		v3_dot(t_vec3 *v1, t_vec3 *v2);
t_dbl__		v3i_dot(t_vec3i *v1, t_vec3i *v2);
t_flt__		v3f_dot(t_vec3f *v1, t_vec3f *v2);
t_ldbl__	v3l_dot(t_vec3l *v1, t_vec3l *v2);

/*
**	cross product operation
*/
t_vec3		v3_cross(t_vec3 *v1, t_vec3 *v2);
t_vec3i		v3i_cross(t_vec3i *v1, t_vec3i *v2);
t_vec3f		v3f_cross(t_vec3f *v1, t_vec3f *v2);
t_vec3l		v3l_cross(t_vec3l *v1, t_vec3l *v2);

#endif
