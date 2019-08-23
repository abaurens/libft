/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rem_pio2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 07:52:46 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/23 10:35:17 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <float.h>
#include <sys/cdefs.h>
#include "ftmath/fpmath.h"

static const double	g_two24 = 1.67772160000000000000e+07;
static const double	g_invpio2 = 6.36619772367581382433e-01;
static const double	g_pio2_1 = 1.57079632673412561417e+00;
static const double	g_pio2_1t = 6.07710050650619224932e-11;
static const double	g_pio2_2 = 6.07710050630396597660e-11;
static const double	g_pio2_2t = 2.02226624879595063154e-21;
static const double	g_pio2_3 = 2.02226624871116645580e-21;
static const double	g_pio2_3t = 8.47842766036889956997e-32;

double				medium_calc(double r, double fn, double factor1, double factor2)
{
	double	t;
	double	w;

	t = r;
	w = fn * factor1;
	r = t - w;
	w = fn * factor2 - ((t - r) - w);
	return (r - w);
}

static int32_t		medium_c(double x, double *y, int32_t ix)
{
	double		fn;
	double		w;
	double		r;
	int32_t		j;
	int32_t		i;

	fn = ((double)(((double_t)x * g_invpio2) + 0x1.8p52) - 0x1.8p52);
	r = x - fn * g_pio2_1;
	w = fn * g_pio2_1t;
	{
		j = ix >> 20;
		y[0] = r - w;
		i = j - ((get_high_word(y[0]) >> 20) & 0x7ff);
		if (i > 16)
		{
			y[0] = medium_calc(r, fn, g_pio2_2, g_pio2_2t);
			i = j - ((get_high_word(y[0]) >> 20) & 0x7ff);
			if (i > 49)
				y[0] = medium_calc(r, fn, g_pio2_3, g_pio2_3t);
		}
	}
	y[1] = (r - y[0]) - w;
	return (((int)fn));
}

static int			ret2(int32_t hx, int factor, double x, double *y)
{
	double	z;

	if (hx > 0)
	{
		z = x - factor * g_pio2_1;
		y[0] = z - factor * g_pio2_1t;
		y[1] = (z - y[0]) - factor * g_pio2_1t;
		return (factor);
	}
	z = x + factor * g_pio2_1;
	y[0] = z + factor * g_pio2_1t;
	y[1] = (z - y[0]) + factor * g_pio2_1t;
	return (-factor);
}

static int			part_3(double z, double *y, int32_t hx, int32_t e0)
{
	double		tx[3];
	double		ty[2];
	int32_t		nx;
	int32_t		n;

	n = 0;
	while (n < 2)
	{
		tx[n] = (double)((int32_t)(z));
		z = (z - tx[n++]) * g_two24;
	}
	tx[2] = z;
	nx = 3;
	while (tx[nx - 1] == 0.0)
		nx--;
	n = __kernel_rem_pio2(tx, ty, e0, nx, 1);
	if (hx < 0)
	{
		y[0] = -ty[0];
		y[1] = -ty[1];
		return (-n);
	}
	y[0] = ty[0];
	y[1] = ty[1];
	return (n);
}

static int			part_2(double x, double *y, int32_t hx, int32_t ix)
{
	double		z;
	int32_t		e0;

	if (ix < 0x413921fb)
		return (medium_c(x, y, ix));
	if (ix >= 0x7ff00000)
	{
		y[0] = x - x;
		y[1] = y[0];
		return (0);
	}
	e0 = (ix >> 20) - 1046;
	insert_word(&z, ix - ((int32_t)(e0 << 20)), get_low_word(x));
	return (part_3(z, y, hx, e0));
}

int					ft_rem_pio2(double x, double *y)
{
	int32_t		ix;
	int32_t		hx;

	hx = get_high_word(x);
	ix = hx & 0x7fffffff;
	if (ix <= 0x400f6a7a)
	{
		if ((ix & 0xfffff) == 0x921fb)
			return (medium_c(x, y, ix));
		if (ix <= 0x4002d97c)
			return (ret2(hx, 1, x, y));
		return (ret2(hx, 2, x, y));
	}
	if (ix <= 0x401c463b)
	{
		if (ix <= 0x4015fdbc && ix == 0x4012d97c)
			return (medium_c(x, y, ix));
		else if (ix <= 0x4015fdbc)
			return (ret2(hx, 3, x, y));
		if (ix == 0x401921fb)
			return (medium_c(x, y, ix));
		return (ret2(hx, 4, x, y));
	}
	return (part_2(x, y, hx, ix));
}
