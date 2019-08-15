/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 11:35:28 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/15 11:41:09 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float		ft_powf(float x, float y)
{
	if (y == 0)
		return (1);
	return (x * ft_powf(x, y - 1));
}

double		ft_pow(double x, double y)
{
	if (y == 0)
		return (1);
	return (x * ft_pow(x, y - 1));
}

long double	ft_powl(long double x, long double y)
{
	if (y == 0)
		return (1);
	return (x * ft_powl(x, y - 1));
}
