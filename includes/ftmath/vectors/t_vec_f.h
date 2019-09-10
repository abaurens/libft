/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec_f.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 13:47:42 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 15:39:07 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC_F_H
# define T_VEC_F_H

# include "ftmath/vectors/t_vec_t.h"

typedef struct s_vec3_f__	t_vec3_f__;
typedef struct s_vec2_f__	t_vec2_f__;

typedef void	*(*t_vecf_opv__)(void *, void *);
typedef void	*(*t_vecf_op1__)(void *, t_big);
typedef void	*(*t_vecf_op2__)(void *, t_big, t_big);
typedef void	*(*t_vecf_op3__)(void *, t_big, t_big, t_big);
typedef void	*(*t_vecf_op__)(void *);
typedef t_dbl	(*t_vecf_len__)(void *);
typedef t_flt	(*t_vecf_lenf__)(void *);
typedef t_ldbl	(*t_vecf_lenl__)(void *);

struct				s_vec3_f__
{
	t_vecf_len__	norm;
	t_vecf_lenf__	normf;
	t_vecf_lenl__	norml;
	t_vecf_opv__	addv;
	t_vecf_opv__	subv;
	t_vecf_opv__	mulv;
	t_vecf_op3__	add3;
	t_vecf_op3__	sub3;
	t_vecf_op3__	mul3;
	t_vecf_op1__	add;
	t_vecf_op1__	sub;
	t_vecf_op1__	mul;
	t_vecf_op1__	div;
	t_vecf_op__		normalize;
};

#endif
