/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:46:55 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/22 15:28:18 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FPMATH_H
# define FPMATH_H

# include <inttypes.h>

typedef union		u_ieeel2bits
{
	long double		e;
	struct
	{
		uint32_t	manl	:32;
		uint32_t	manh	:32;
		uint32_t	exp		:15;
		uint32_t	sign	:1;
		uint32_t	junkl	:16;
		uint32_t	junkh	:32;
	}				bits;
	struct
	{
		uint64_t	man		:64;
		uint32_t	expsign	:16;
		uint64_t	junk	:48;
	}				xbits;
}					t_ieeel2bits;

typedef struct		s_tab1
{
	float			g;
	float			f_hi;
	double			f_lo;
}					t_tab1;

typedef struct		s_tab2
{
	float			h;
	float			e;
}					t_tab2;

#endif
