/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_expl.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/22 16:26:10 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/22 16:39:26 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <float.h>
#include "ftmath/math_private.h"
#include "ftmath/k_expl.h"
#include "ftmath/fpmath.h"
#include "math.h"

static const volatile long double
huge = 0x1p10000L,
tiny = 0x1p-10000L;

static const long double
twom10000 = 0x1p-10000L;

static const t_ieeel2bits
/* log(2**16384 - 0.5) rounded towards zero: */
/* log(2**16384 - 0.5 + 1) rounded towards zero for expm1l() is the same: */
o_thresholdu = LD80C(0xb17217f7d1cf79ab, 13,  11356.5234062941439488L),
#define o_threshold	 (o_thresholdu.e)
/* log(2**(-16381-64-1)) rounded towards zero: */
u_thresholdu = LD80C(0xb21dfe7f09e2baa9, 13, -11399.4985314888605581L);
#define u_threshold	 (u_thresholdu.e)

long double	expl(long double x)
{
	t_ieeel2bits	u;
	long double		hi, lo, t, twopk;
	uint16_t		hx, ix;
	int				k;

	DOPRINT_START(&x);

	/* Filter out exceptional cases. */
	u.e = x;
	hx = u.xbits.expsign;
	ix = hx & 0x7fff;
	if (ix >= BIAS + 13) {		/* |x| >= 8192 or x is NaN */
		if (ix == BIAS + LDBL_MAX_EXP) {
			if (hx & 0x8000)  /* x is -Inf, -NaN or unsupported */
				RETURNP(-1 / x);
			RETURNP(x + x);	/* x is +Inf, +NaN or unsupported */
		}
		if (x > o_threshold)
			RETURNP(huge * huge);
		if (x < u_threshold)
			RETURNP(tiny * tiny);
	} else if (ix < BIAS - 75) {	/* |x| < 0x1p-75 (includes pseudos) */
		RETURN2P(1, x);		/* 1 with inexact iff x != 0 */
	}

	ENTERI();

	twopk = 1;
	__k_expl(x, &hi, &lo, &k);
	t = SUM2P(hi, lo);

	/* Scale by 2**k. */
	if (k >= LDBL_MIN_EXP) {
		if (k == LDBL_MAX_EXP)
			RETURNI(t * 2 * 0x1p16383L);
		SET_LDBL_EXPSIGN(twopk, BIAS + k);
		RETURNI(t * twopk);
	} else {
		SET_LDBL_EXPSIGN(twopk, BIAS + k + 10000);
		RETURNI(t * twopk * twom10000);
	}
}
