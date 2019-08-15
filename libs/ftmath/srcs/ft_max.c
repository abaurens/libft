/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/13 16:51:24 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/15 11:51:12 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float		ft_fmaxf(float a, float b)
{
	return (a > b ? a : b);
}

double		ft_fmax(double a, double b)
{
	return (a > b ? a : b);
}

long double	ft_fmaxl(long double a, long double b)
{
	return (a > b ? a : b);
}
