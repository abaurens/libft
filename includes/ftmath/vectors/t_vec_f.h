/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec_f.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:47:42 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 13:26:15 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC_F_H
# define T_VEC_F_H

# include "ftmath/vectors/t_vec_t.h"

typedef struct s_vec3_f__	t_vec3_f__;
typedef struct s_vec2_f__	t_vec2_f__;

typedef void		*(*t_vecf_v_v__)(void *);
typedef void		*(*t_vecf_v_vv__)(void *, void *);
typedef void		*(*t_vecf_v_vvv__)(void *, void *, void *);

typedef void		*(*t_vecf_v_vn__)(void *, t_big__);
typedef void		*(*t_vecf_v_vnn__)(void *, t_big__, t_big__);
typedef void		*(*t_vecf_v_vnnn__)(void *, t_big__, t_big__, t_big__);

typedef t_dbl__		(*t_vecf_d_v__)(void *);
typedef t_flt__		(*t_vecf_f_v__)(void *);
typedef t_ldbl__	(*t_vecf_l_v__)(void *);

typedef t_dbl__		(*t_vecf_d_vv__)(void *, void *);

struct				s_vec3_f__
{
	t_vecf_d_v__	norm;
	t_vecf_f_v__	normf;
	t_vecf_l_v__	norml;
	t_vecf_v_vv__	addv;
	t_vecf_v_vv__	subv;
	t_vecf_v_vv__	mulv;
	t_vecf_v_vnnn__	add3;
	t_vecf_v_vnnn__	sub3;
	t_vecf_v_vnnn__	mul3;
	t_vecf_v_vn__	add;
	t_vecf_v_vn__	sub;
	t_vecf_v_vn__	mul;
	t_vecf_v_vn__	div;
	t_vecf_v_v__	normalize;
	t_vecf_d_vv__	dot;
	t_vecf_v_vvv__	cross;
};

struct				s_vec2_f__
{
	t_vecf_d_v__	norm;
	t_vecf_f_v__	normf;
	t_vecf_l_v__	norml;
	t_vecf_v_vv__	addv;
	t_vecf_v_vv__	subv;
	t_vecf_v_vv__	mulv;
	t_vecf_v_vnn__	add2;
	t_vecf_v_vnn__	sub2;
	t_vecf_v_vnn__	mul2;
	t_vecf_v_vn__	add;
	t_vecf_v_vn__	sub;
	t_vecf_v_vn__	mul;
	t_vecf_v_vn__	div;
	t_vecf_v_v__	normalize;
	t_vecf_d_vv__	dot;
};

#endif
