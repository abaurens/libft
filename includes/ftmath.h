/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 02:29:20 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/04 02:31:00 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTMATH_H
# define FTMATH_H

# define FT_PI	3.14159265359

char	fnan(long double d);

long	ft_abs(long int nb);
long	ft_min(long int a, long int b);
long	ft_max(long int a, long int b);

double	ft_rad(double a);

float	ft_radf(float a);

#endif
