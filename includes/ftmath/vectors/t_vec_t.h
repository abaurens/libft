/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_vec_t.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 21:21:35 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 10:43:38 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_VEC_T_H
# define T_VEC_T_H

typedef int			t_int;
typedef float		t_flt;
typedef double		t_dbl;
typedef long double	t_ldbl;

typedef enum	e_vec_t
{
	UNSET,
	INT,
	FLT,
	DBL,
	LDBL
}				t_vec_t;

#endif
