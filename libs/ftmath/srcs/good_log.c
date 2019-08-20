/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   good_log.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 11:25:32 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/20 12:05:19 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <float.h>
#include "ftfloat.h"
#include "ftmath.h"
#include "ftio.h"

long double	ft_ln(long double x)
{
	t_float	flt;

	if (x < 0.0 || fnan(x))
		return (0.0 / 0.0);
	if (x == 0)
		return (-(1.0 / 0.0));
	flt = get_float_components(x);
	ft_printf("2^%d * %Lf\n", flt.exponent, ft_powl(2, -flt.mantissa));
	return (0);
}
