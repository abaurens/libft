/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec2_t.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 18:01:20 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 18:02:09 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC2_T_H
# define T_VEC2_T_H

# include "ftmath/vectors/t_vec_t.h"

typedef struct s_vec2i	t_vec2i;
typedef struct s_vec2f	t_vec2f;
typedef struct s_vec2l	t_vec2l;
typedef struct s_vec2	t_vec2;

struct		s_vec2i
{
	t_int	x;
	t_int	y;
};

struct		s_vec2f
{
	t_flt	x;
	t_flt	y;
};

struct		s_vec2
{
	t_dbl	x;
	t_dbl	y;
};

struct		s_vec2l
{
	t_ldbl	x;
	t_ldbl	y;
};

#endif
