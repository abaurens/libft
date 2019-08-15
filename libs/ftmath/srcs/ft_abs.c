/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:49:13 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/15 11:51:17 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <inttypes.h>

float		ft_fabsf(float x)
{
	return (x < 0 ? -x : x);
}

double		ft_fabs(double x)
{
	return (x < 0 ? -x : x);
}

long double	ft_fabsl(long double x)
{
	return (x < 0 ? -x : x);
}
