/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_log.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 12:08:00 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/19 13:45:12 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmath.h"

static long double	ft_get_integ(long double n, const long double base,
						uint64_t *integ)
{
	long double	base_n;
	long double	base_n_2;
	uint64_t	n2;

	*integ = 0;
	while (n >= base)
	{
		n2 = 1;
		base_n = base;
		base_n_2 = base * base;
		while (n >= base_n_2)
		{
			base_n = base_n_2;
			base_n_2 *= base_n_2;
			n2 <<= 1;
		}
		n /= base_n;
		*integ |= n2;
	}
	return (n);
}

double				ft_log(double nb, const double base)
{
	uint16_t	i;
	uint64_t	integ;
	uint64_t	frac;

	if (nb < 1)
		return (ft_log(1.0 / nb, base));
	frac = 0;
	nb = ft_get_integ(nb, base, &integ);
	i = 0;
	while (i++ < 52)
	{
		nb *= nb;
		frac <<= 1;
		if (nb >= base)
		{
			frac |= 1;
			nb /= base;
		}
	}
	return (integ + ((double)frac / (1LLU << 52)));
}

float				ft_logf(float nb, const float base)
{
	uint16_t	i;
	uint64_t	integ;
	uint64_t	frac;

	if (nb < 1)
		return (ft_logf(1.0 / nb, base));
	frac = 0;
	nb = ft_get_integ(nb, base, &integ);
	i = 0;
	while (i++ < 23)
	{
		nb *= nb;
		frac <<= 1;
		if (nb >= base)
		{
			frac |= 1;
			nb /= base;
		}
	}
	return (integ + ((float)frac / (1LLU << 23)));
}

/*
**	Doesn't work perfectly for long double...
*/

long double			ft_logl(long double nb, const long double base)
{
	uint16_t	i;
	uint64_t	integ;
	uint64_t	frac;

	if (nb < 1)
		return (ft_logl(1.0 / nb, base));
	frac = 0;
	nb = ft_get_integ(nb, base, &integ);
	i = 0;
	while (i++ < 63)
	{
		nb *= nb;
		frac <<= 1;
		if (nb >= base)
		{
			frac |= 1;
			nb /= base;
		}
	}
	return (integ + ((long double)frac / (1LLU << 63)));
}
