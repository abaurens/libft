/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec2.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:51:25 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 11:20:20 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC2_H
# define T_VEC2_H

# include "ftmath/vectors/t_vec_t.h"

typedef struct s_vec2i	t_vec2i;
typedef struct s_vec2f	t_vec2f;
typedef struct s_vec2l	t_vec2l;
typedef struct s_vec2	t_vec2;

struct				s_vec2i
{
	t_vec_t	type;
	union
	{
		struct
		{
			t_int	x;
			t_int	y;
		};
		t_int		v[2];
	};
};

struct				s_vec2f
{
	t_vec_t	type;
	union
	{
		struct
		{
			t_flt	x;
			t_flt	y;
		};
		t_flt		v[2];
	};
};

struct				s_vec2
{
	t_vec_t			type;
	union
	{
		struct
		{
			t_dbl	x;
			t_dbl	y;
		};
		t_dbl		v[2];
	};
};

struct				s_vec2l
{
	t_vec_t			type;
	union
	{
		struct
		{
			t_ldbl	x;
			t_ldbl	y;
		};
		t_ldbl		v[2];
	};
};

#endif
