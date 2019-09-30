/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:25:11 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 08:49:35 by baurens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "matrix/test_matrix.h"
#include "ftmatrix.h"
#include "ftmath.h"
#include "math.h"
#include "ftlib.h"
#include "ftio.h"

void	test_matrix(void)
{
	t_mat4	m1;
	t_mat4	m2;
	t_mat4	r;

	m1.m[M00] = 12; m1.m[M10] = 3; m1.m[M20] = 2; m1.m[M30] = 7;
	m1.m[M01] = 4; m1.m[M11] = 8; m1.m[M21] = 0; m1.m[M31] = 0;
	m1.m[M02] = 1; m1.m[M12] = 2; m1.m[M22] = 2; m1.m[M32] = 9;
	m1.m[M03] = 0; m1.m[M13] = 5; m1.m[M23] = 1; m1.m[M33] = 13;
/*
	m1.m[M00] = 1; m1.m[M10] = 2; m1.m[M20] = 3; m1.m[M30] = 4;
	m1.m[M01] = 5; m1.m[M11] = 6; m1.m[M21] = 7; m1.m[M31] = 8;
	m1.m[M02] = 9; m1.m[M12] = 10; m1.m[M22] = 11; m1.m[M32] = 12;
	m1.m[M03] = 13; m1.m[M13] = 14; m1.m[M23] = 15; m1.m[M33] = 16;
*/
	PRINT_MATRIX(&m1);
	ft_printf("\n");
	/*r = m4_inv(&m1);*/
	r = m4_inv(&m1);
	PRINT_MATRIX(&r);
	ft_printf("\n");
	m2 = m4_mul(&m1, &r);
	PRINT_MATRIX(&m2);
}
