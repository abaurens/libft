/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec2_t.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:01:20 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/16 11:57:31 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC2_T_H
# define T_VEC2_T_H

# include "ftmath/vectors/t_vec_t.h"

typedef struct s_vec2i	t_vec2i;
typedef struct s_vec2f	t_vec2f;
typedef struct s_vec2l	t_vec2l;
typedef struct s_vec2	t_vec2;

struct			s_vec2i
{
	t_vect__	t;
	t_int__		x;
	t_int__		y;
};

struct			s_vec2f
{
	t_vect__	t;
	t_flt__		x;
	t_flt__		y;
};

struct			s_vec2
{
	t_vect__	t;
	t_dbl__		x;
	t_dbl__		y;
};

struct			s_vec2l
{
	t_vect__	t;
	t_ldbl__	x;
	t_ldbl__	y;
};

#endif
