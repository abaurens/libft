/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_matrix.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:25:11 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 19:17:42 by abaurens         ###   ########.fr       */
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
	t_vec4	p;
	t_vec4	proj;

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
	m2 = m4_mul(&r, &m1);
	PRINT_MATRIX(&m2);
	ft_printf("\n");

	p = vec4(2, 3, 4, 1);
	m1.m[M00] = 1; m1.m[M10] = 0; m1.m[M20] = 0; m1.m[M30] = 0;
	m1.m[M01] = 0; m1.m[M11] = 1; m1.m[M21] = 0; m1.m[M31] = 0;
	m1.m[M02] = 0; m1.m[M12] = 0; m1.m[M22] = 1; m1.m[M32] = 0;
	m1.m[M03] = 0; m1.m[M13] = 0; m1.m[M23] = 1; m1.m[M33] = 0;
	PRINT_MATRIX(&m1);
	ft_printf("\n");
	proj = m4_mulv(&m1, &p);
	ft_printf("projected = {{%f, %f, %f}, %f}", proj.x, proj.y, proj.z, proj.w);
	proj = v4_div1(&proj, proj.w);
	ft_printf(" = {%f, %f, %f}\n", proj.x, proj.y, proj.z);
}
