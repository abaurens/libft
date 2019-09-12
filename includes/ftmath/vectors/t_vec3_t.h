/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec3_t.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:12:32 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 16:10:06 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC3_T_H
# define T_VEC3_T_H

# include "ftmath/vectors/t_vec_t.h"

typedef struct s_vec3i		t_vec3i;
typedef struct s_vec3f		t_vec3f;
typedef struct s_vec3l		t_vec3l;
typedef struct s_vec3		t_vec3;

struct				s_vec3i
{
	t_vect__	t;
	t_int__		x;
	t_int__		y;
	t_int__		z;
};

struct				s_vec3f
{
	t_vect__	t;
	t_flt__		x;
	t_flt__		y;
	t_flt__		z;
};

struct				s_vec3
{
	t_vect__	t;
	t_dbl__		x;
	t_dbl__		y;
	t_dbl__		z;
};

struct				s_vec3l
{
	t_vect__	t;
	t_ldbl__	x;
	t_ldbl__	y;
	t_ldbl__	z;
};

#endif
