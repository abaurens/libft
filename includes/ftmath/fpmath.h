/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 13:46:55 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/23 06:09:13 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FPMATH_H
# define FPMATH_H

# include <inttypes.h>
# include <machine/endian.h>

# ifdef __arm__
#  if defined(__VFP_FP__) || defined(__ARM_EABI__)
#   define IEEE_WORD_ORDER	BYTE_ORDER
#  else
#   define IEEE_WORD_ORDER	BIG_ENDIAN
#  endif
# else
#  define IEEE_WORD_ORDER	BYTE_ORDER
# endif

typedef union		u_ieee_double_shape_type
{
	double			value;
	struct
	{
# if IEEE_WORD_ORDER == BIG_ENDIAN

		uint32_t	msw;
		uint32_t	lsw;
# else

		uint32_t	lsw;
		uint32_t	msw;
# endif

	}				parts;
	struct
	{
		uint64_t	w;
	}				xparts;
}					t_ieee_double_shape_type;

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

uint32_t			get_high_word(double x);
uint32_t			get_low_word(double x);
t_ieeel2bits		ld80c(uint64_t m, uint16_t ex, long double v);
void				set_ldbl_expsign(long double *x, uint16_t exp);
void				extract_ldbl80_word(long double x, uint16_t *exp,
										uint64_t *man);

#endif
