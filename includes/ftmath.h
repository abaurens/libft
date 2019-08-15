/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 02:29:20 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/15 11:51:23 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTMATH_H
# define FTMATH_H

# define FT_PI	3.14159265359

char		fnan(long double d);

float		ft_fabsf(float x);
double		ft_fabs(double x);
long double	ft_fabsl(long double x);

float		ft_fminf(float a, float b);
double		ft_fmin(double a, double b);
long double	ft_fminl(long double a, long double b);

float		ft_fmaxf(float a, float b);
double		ft_fmax(double a, double b);
long double	ft_fmaxl(long double a, long double b);

float		ft_powf(float x, float y);
double		ft_pow(double x, double y);
long double	ft_powl(long double x, long double y);

float		ft_sqrtf(float nb);
double		ft_sqrt(double nb);
long double	ft_sqrtl(long double nb);

float		ft_radf(float a);
double		ft_rad(double a);

#endif
