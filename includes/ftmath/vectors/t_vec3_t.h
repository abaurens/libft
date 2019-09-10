/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec3_t.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:12:32 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 17:54:16 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC3_T_H
# define T_VEC3_T_H

# include "ftmath/vectors/t_vec_t.h"

typedef struct s_vec3i		t_vec3i;
typedef struct s_vec3f		t_vec3f;
typedef struct s_vec3l		t_vec3l;
typedef struct s_vec3		t_vec3;

struct		s_vec3i
{
	t_int	x;
	t_int	y;
	t_int	z;
};

struct		s_vec3f
{
	t_flt	x;
	t_flt	y;
	t_flt	z;
};

struct		s_vec3
{
	t_dbl	x;
	t_dbl	y;
	t_dbl	z;
};

struct		s_vec3l
{
	t_ldbl	x;
	t_ldbl	y;
	t_ldbl	z;
};

#endif