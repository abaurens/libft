/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec3_t.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:12:32 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 11:41:43 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC3_T_H
# define T_VEC3_T_H

# include "ftmath/vectors/t_vec_t.h"

typedef struct s_vec3i		t_vec3i;
typedef struct s_vec3f		t_vec3f;
typedef struct s_vec3l		t_vec3l;
typedef struct s_vec3		t_vec3;

typedef struct s_vec3i_f__	t_vec3i_f__;
typedef struct s_vec3f_f__	t_vec3f_f__;
typedef struct s_vec3l_f__	t_vec3l_f__;
typedef struct s_vec3_f__	t_vec3_f__;

struct					s_vec3i
{
	union
	{
		struct
		{
			t_int		x;
			t_int		y;
			t_int		z;
		};
		t_int			v[3];
	};
	const t_vec3i_f__	*f;
};

struct					s_vec3f
{
	union
	{
		struct
		{
			t_flt		x;
			t_flt		y;
			t_flt		z;
		};
		t_flt			v[3];
	};
};

struct				s_vec3
{
	union
	{
		struct
		{
			t_dbl	x;
			t_dbl	y;
			t_dbl	z;
		};
		t_dbl		v[3];
	};
};

struct				s_vec3l
{
	union
	{
		struct
		{
			t_ldbl	x;
			t_ldbl	y;
			t_ldbl	z;
		};
		t_ldbl		v[3];
	};
};

struct				s_vec3i_f__
{
	t_dbl			*(*norm)(t_vec3i *v);
	t_flt			*(*normf)(t_vec3i *v);
	t_ldbl			*(*norml)(t_vec3i *v);
	t_vec3i			*(*add)(t_vec3i *v, t_vec3i *v2);
	t_vec3i			*(*addi)(t_vec3i *v, t_int i);
	t_vec3i			*(*add3)(t_vec3i *v, t_int x, t_int y, t_int z);
	t_vec3i			*(*sub)(t_vec3i *v, t_vec3i *v2);
	t_vec3i			*(*subi)(t_vec3i *v, t_int i);
	t_vec3i			*(*sub3)(t_vec3i *v, t_int x, t_int y, t_int z);
	t_vec3i			*(*normalize)(t_vec3i *v);
};

#endif
