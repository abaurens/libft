/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec_t.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 21:21:35 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:27:05 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC_T_H
# define T_VEC_T_H

typedef enum	e_vect__
{
	INT,
	FLT,
	DBL,
	LDBL,
	VEC3
}				t_vect__;

typedef struct	s_vec_gen__
{
	t_vect__	t;
}				t_vec_gen__;


typedef int			t_int__;
typedef float		t_flt__;
typedef double		t_dbl__;
typedef	long double	t_big__;
typedef long double	t_ldbl__;

#endif
