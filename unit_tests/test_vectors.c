/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_vectors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 11:32:18 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 12:57:49 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdlib.h>
#include "ftvector.h"
#include "ftlib.h"
#include "ftio.h"
#include "vectors/vectest_core.h"

/*
static char	check_vec2(void *vec, char tp, t_ldbl__ x, t_ldbl__ y)
{
	char	t[40];
	char	s[40];

	switch (tp)
	{
		case 0:
			sprintf(t, "{%d, %d}\n", (int)x, (int)y);
			sprintf(s, "{%d, %d}\n", ((t_vec2i*)vec)->x, ((t_vec2i*)vec)->y);
			break;
		case 1:
			sprintf(t, "{%f, %f}\n", (float)x, (float)y);
			sprintf(s, "{%f, %f}\n", ((t_vec2f*)vec)->x, ((t_vec2f*)vec)->y);
			break;
		case 2:
			sprintf(t, "{%f, %f}\n", (double)x, (double)y);
			sprintf(s, "{%f, %f}\n", ((t_vec2*)vec)->x, ((t_vec2*)vec)->y);
			break;
		case 3:
			sprintf(t, "{%Lf, %Lf}\n", (long double)x, (long double)y);
			sprintf(s, "{%Lf, %Lf}\n", ((t_vec2l*)vec)->x, ((t_vec2l*)vec)->y);
			break;
		default:
			ft_printf("\e[31munknown vector type: %d\e[0m\n", tp);
			g_stop_test = 1;
			return (-1);
	}
	return (ft_strequ(s, t));
}

static char	check_vec3(void *vec, char tp, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z)
{
	char	t[40];
	char	s[40];

	switch (tp)
	{
		case 0:
			sprintf(t, "{%d, %d, %d}\n", (int)x, (int)y, (int)z);
			sprintf(s, "{%d, %d, %d}\n", ((t_vec3i*)vec)->x, ((t_vec3i*)vec)->y, ((t_vec3i*)vec)->z);
			break;
		case 1:
			sprintf(t, "{%f, %f, %f}\n", (float)x, (float)y, (float)z);
			sprintf(s, "{%f, %f, %f}\n", ((t_vec3f*)vec)->x, ((t_vec3f*)vec)->y, ((t_vec3f*)vec)->z);
			break;
		case 2:
			sprintf(t, "{%f, %f, %f}\n", (double)x, (double)y, (double)z);
			sprintf(s, "{%f, %f, %f}\n", ((t_vec3*)vec)->x, ((t_vec3*)vec)->y,  ((t_vec3*)vec)->z);
			break;
		case 3:
			sprintf(t, "{%Lf, %Lff, %Lf}\n", (long double)x, (long double)y, (long double)z);
			sprintf(s, "{%Lf, %Lff, %Lf}\n", ((t_vec3l*)vec)->x, ((t_vec3l*)vec)->y, ((t_vec3l*)vec)->z);
			break;
		default:
			ft_printf("\e[31munknown vector type: %d\e[0m\n", tp);
			g_stop_test = 1;
			return (-1);
	}
	return (ft_strequ(s, t));
}
*/

/*
**	norm computation
*/

void	test_norm(void)
{
	t_vec2	v2d;
	t_vec2i	v2i;
	t_vec2f	v2f;
	t_vec2l	v2l;

	t_vec3i	v3i;
	t_vec3	v3d;
	t_vec3f	v3f;
	t_vec3l	v3l;

	v2d = vec2(2, 0);
	v2i = vec2i(0, 2);
	v2f = vec2f(0, 4);
	v2l = vec2l(4, 0);

	v3d = vec3(1, 1, 1);
	v3i = vec3i(2, 2, 2);
	v3f = vec3f(3, 3, 3);
	v3l = vec3l(4, 4, 4);

	ft_printf("len of v2i =  {%d, %d} = ", DECOMP2(v2i));
	t_dbl__ lv2id = TEST_FUNC(norm, v2i);
	ft_printf("%f\n", lv2id);

	ft_printf("lenf of v2i = {%d, %d} = ", DECOMP2(v2i));
	t_flt__ lv2if = TEST_FUNC(normf, v2i);
	ft_printf("%f\n", lv2if);

	ft_printf("lenl of v2i = {%d, %d} = ", DECOMP2(v2i));
	t_ldbl__ lv2il = TEST_FUNC(norml, v2i);
	ft_printf("%Lf\n", lv2il);

	ft_printf("len  of v2d = {%f, %f} = ", DECOMP2(v2d));
	double lv2d = TEST_FUNC(norm, v2d);
	ft_printf("%f\n", lv2d);

	ft_printf("len  of v2f = {%f, %f} = ", DECOMP2(v2f));
	float lv2f = TEST_FUNC(norm, v2f);
	ft_printf("%f\n", lv2f);

	ft_printf("len  of v2l = {%Lf, %Lf} = ", DECOMP2(v2l));
	long double lv2l = TEST_FUNC(norm, v2l);
	ft_printf("%Lf\n\n", lv2l);


	ft_printf("len  of v3i = {%d, %d, %d} = ", DECOMP3(v3i));
	double lv3id = TEST_FUNC(norm, v3i);
	ft_printf("%f\n", lv3id);

	ft_printf("len  of v3i = {%d, %d, %d} = ", DECOMP3(v3i));
	float lv3if = TEST_FUNC(normf, v3i);
	ft_printf("%f\n", lv3if);

	ft_printf("len  of v3i = {%d, %d, %d} = ", DECOMP3(v3i));
	long double lv3il = TEST_FUNC(norml, v3i);
	ft_printf("%Lf\n", lv3il);

	ft_printf("len  of v3d = {%f, %f, %f} = ", DECOMP3(v3d));
	double lv3d = TEST_FUNC(norm, v3d);
	ft_printf("%f\n", lv3d);

	ft_printf("len  of v3f = {%f, %f, %f} = ", DECOMP3(v3f));
	float lv3f = TEST_FUNC(norm, v3f);
	ft_printf("%f\n", lv3f);

	ft_printf("len  of v3l = {%Lf, %Lf, %Lf} = ", DECOMP3(v3l));
	long double lv3l = TEST_FUNC(norm, v3l);
	ft_printf("%Lf\n", lv3l);

}

/*
**	vector to vector operations
*/
void	test_addv(void)
{
	t_vec2	v2d;
	t_vec3	v3d;
	t_vec2i	v2i;
	t_vec3i	v3i;
	t_vec2f	v2f;
	t_vec3f	v3f;
	t_vec2l	v2l;
	t_vec3l	v3l;

	v2d = vec2(1, 1);
	v2i = vec2i(2, 2);
	v2f = vec2f(3, 3);
	v2l = vec2l(4, 4);
	v3d = vec3(1, 1, 1);
	v3i = vec3i(2, 2, 2);
	v3f = vec3f(3, 3, 3);
	v3l = vec3l(4, 4, 4);

	ft_printf("v2i = {%d, %d}\n", DECOMP2(v2i));
	v2i = TEST_FUNC(addv, v2i, &v2i);
	ft_printf("      {%d, %d}\n", DECOMP2(v2i));

	ft_printf("v2d = {%f, %f}\n", DECOMP2(v2d));
	v2d = TEST_FUNC(addv, v2d, &v2d);
	ft_printf("      {%f, %f}\n", DECOMP2(v2d));

	ft_printf("v2f = {%f, %f}\n", DECOMP2(v2f));
	v2f = TEST_FUNC(addv, v2f, &v2f);
	ft_printf("      {%f, %f}\n", DECOMP2(v2f));

	ft_printf("v2l = {%Lf, %Lf}\n", DECOMP2(v2l));
	v2l = TEST_FUNC(addv, v2l, &v2l);
	ft_printf("      {%Lf, %Lf}\n\n", DECOMP2(v2l));

	ft_printf("v3i = {%d, %d, %d}\n", DECOMP3(v3i));
	v3i = TEST_FUNC(addv, v3i, &v3i);
	ft_printf("      {%d, %d, %d}\n", DECOMP3(v3i));

	ft_printf("v3d = {%f, %f, %f}\n", DECOMP3(v3d));
	v3d = TEST_FUNC(addv, v3d, &v3d);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3d));

	ft_printf("v3f = {%f, %f, %f}\n", DECOMP3(v3f));
	v3f = TEST_FUNC(addv, v3f, &v3f);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3f));

	ft_printf("v3l = {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
	v3l = TEST_FUNC(addv, v3l, &v3l);
	ft_printf("      {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
}

void	test_subv(void)
{
	t_vec2	v2d;
	t_vec3	v3d;
	t_vec2i	v2i;
	t_vec3i	v3i;
	t_vec2f	v2f;
	t_vec3f	v3f;
	t_vec2l	v2l;
	t_vec3l	v3l;

	v2d = vec2(1, 1);
	v2i = vec2i(2, 2);
	v2f = vec2f(3, 3);
	v2l = vec2l(4, 4);
	v3d = vec3(1, 1, 1);
	v3i = vec3i(2, 2, 2);
	v3f = vec3f(3, 3, 3);
	v3l = vec3l(4, 4, 4);

	ft_printf("v2i = {%d, %d}\n", DECOMP2(v2i));
	v2i = TEST_FUNC(subv, v2i, &v2i);
	ft_printf("      {%d, %d}\n", DECOMP2(v2i));

	ft_printf("v2d = {%f, %f}\n", DECOMP2(v2d));
	v2d = TEST_FUNC(subv, v2d, &v2d);
	ft_printf("      {%f, %f}\n", DECOMP2(v2d));

	ft_printf("v2f = {%f, %f}\n", DECOMP2(v2f));
	v2f = TEST_FUNC(subv, v2f, &v2f);
	ft_printf("      {%f, %f}\n", DECOMP2(v2f));

	ft_printf("v2l = {%Lf, %Lf}\n", DECOMP2(v2l));
	v2l = TEST_FUNC(subv, v2l, &v2l);
	ft_printf("      {%Lf, %Lf}\n\n", DECOMP2(v2l));

	ft_printf("v3i = {%d, %d, %d}\n", DECOMP3(v3i));
	v3i = TEST_FUNC(subv, v3i, &v3i);
	ft_printf("      {%d, %d, %d}\n", DECOMP3(v3i));

	ft_printf("v3d = {%f, %f, %f}\n", DECOMP3(v3d));
	v3d = TEST_FUNC(subv, v3d, &v3d);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3d));

	ft_printf("v3f = {%f, %f, %f}\n", DECOMP3(v3f));
	v3f = TEST_FUNC(subv, v3f, &v3f);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3f));

	ft_printf("v3l = {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
	v3l = TEST_FUNC(subv, v3l, &v3l);
	ft_printf("      {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
}

void	test_mulv(void)
{
	t_vec2	v2d;
	t_vec3	v3d;
	t_vec2i	v2i;
	t_vec3i	v3i;
	t_vec2f	v2f;
	t_vec3f	v3f;
	t_vec2l	v2l;
	t_vec3l	v3l;

	v2d = vec2(1, 1);
	v2i = vec2i(2, 2);
	v2f = vec2f(3, 3);
	v2l = vec2l(4, 4);
	v3d = vec3(1, 1, 1);
	v3i = vec3i(2, 2, 2);
	v3f = vec3f(3, 3, 3);
	v3l = vec3l(4, 4, 4);

	ft_printf("v2i = {%d, %d}\n", DECOMP2(v2i));
	v2i = TEST_FUNC(mulv, v2i, &v2i);
	ft_printf("      {%d, %d}\n", DECOMP2(v2i));

	ft_printf("v2d = {%f, %f}\n", DECOMP2(v2d));
	v2d = TEST_FUNC(mulv, v2d, &v2d);
	ft_printf("      {%f, %f}\n", DECOMP2(v2d));

	ft_printf("v2f = {%f, %f}\n", DECOMP2(v2f));
	v2f = TEST_FUNC(mulv, v2f, &v2f);
	ft_printf("      {%f, %f}\n", DECOMP2(v2f));

	ft_printf("v2l = {%Lf, %Lf}\n", DECOMP2(v2l));
	v2l = TEST_FUNC(mulv, v2l, &v2l);
	ft_printf("      {%Lf, %Lf}\n\n", DECOMP2(v2l));

	ft_printf("v3i = {%d, %d, %d}\n", DECOMP3(v3i));
	v3i = TEST_FUNC(mulv, v3i, &v3i);
	ft_printf("      {%d, %d, %d}\n", DECOMP3(v3i));

	ft_printf("v3d = {%f, %f, %f}\n", DECOMP3(v3d));
	v3d = TEST_FUNC(mulv, v3d, &v3d);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3d));

	ft_printf("v3f = {%f, %f, %f}\n", DECOMP3(v3f));
	v3f = TEST_FUNC(mulv, v3f, &v3f);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3f));

	ft_printf("v3l = {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
	v3l = TEST_FUNC(mulv, v3l, &v3l);
	ft_printf("      {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
}

/*
**	scalar to vector operations
*/
void	test_add1(void)
{
	t_vec2	v2d;
	t_vec3	v3d;
	t_vec2i	v2i;
	t_vec3i	v3i;
	t_vec2f	v2f;
	t_vec3f	v3f;
	t_vec2l	v2l;
	t_vec3l	v3l;

	v2d = vec2(0, 0);
	v2i = vec2i(0, 0);
	v2f = vec2f(0, 0);
	v2l = vec2l(0, 0);
	v3d = vec3(0, 0, 0);
	v3i = vec3i(0, 0, 0);
	v3f = vec3f(0, 0, 0);
	v3l = vec3l(0, 0, 0);

	ft_printf("v2i = {%d, %d}\n", DECOMP2(v2i));
	v2i = TEST_FUNC(add1, v2i, 1);
	ft_printf("      {%d, %d}\n", DECOMP2(v2i));

	ft_printf("v2d = {%f, %f}\n", DECOMP2(v2d));
	v2d = TEST_FUNC(add1, v2d, 2);
	ft_printf("      {%f, %f}\n", DECOMP2(v2d));

	ft_printf("v2f = {%f, %f}\n", DECOMP2(v2f));
	v2f = TEST_FUNC(add1, v2f, 3);
	ft_printf("      {%f, %f}\n", DECOMP2(v2f));

	ft_printf("v2l = {%Lf, %Lf}\n", DECOMP2(v2l));
	v2l = TEST_FUNC(add1, v2l, 4);
	ft_printf("      {%Lf, %Lf}\n\n", DECOMP2(v2l));

	ft_printf("v3i = {%d, %d, %d}\n", DECOMP3(v3i));
	v3i = TEST_FUNC(add1, v3i, 1);
	ft_printf("      {%d, %d, %d}\n", DECOMP3(v3i));

	ft_printf("v3d = {%f, %f, %f}\n", DECOMP3(v3d));
	v3d = TEST_FUNC(add1, v3d, 2);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3d));

	ft_printf("v3f = {%f, %f, %f}\n", DECOMP3(v3f));
	v3f = TEST_FUNC(add1, v3f, 3);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3f));

	ft_printf("v3l = {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
	v3l = TEST_FUNC(add1, v3l, 4);
	ft_printf("      {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
}

void	test_sub1(void)
{
	t_vec2	v2d;
	t_vec3	v3d;
	t_vec2i	v2i;
	t_vec3i	v3i;
	t_vec2f	v2f;
	t_vec3f	v3f;
	t_vec2l	v2l;
	t_vec3l	v3l;

	v2d = vec2(1, 1);
	v2i = vec2i(2, 2);
	v2f = vec2f(3, 3);
	v2l = vec2l(4, 4);
	v3d = vec3(1, 1, 1);
	v3i = vec3i(2, 2, 2);
	v3f = vec3f(3, 3, 3);
	v3l = vec3l(4, 4, 4);

	ft_printf("v2i = {%d, %d}\n", DECOMP2(v2i));
	v2i = TEST_FUNC(sub1, v2i, 1);
	ft_printf("      {%d, %d}\n", DECOMP2(v2i));

	ft_printf("v2d = {%f, %f}\n", DECOMP2(v2d));
	v2d = TEST_FUNC(sub1, v2d, 2);
	ft_printf("      {%f, %f}\n", DECOMP2(v2d));

	ft_printf("v2f = {%f, %f}\n", DECOMP2(v2f));
	v2f = TEST_FUNC(sub1, v2f, 3);
	ft_printf("      {%f, %f}\n", DECOMP2(v2f));

	ft_printf("v2l = {%Lf, %Lf}\n", DECOMP2(v2l));
	v2l = TEST_FUNC(sub1, v2l, 4);
	ft_printf("      {%Lf, %Lf}\n\n", DECOMP2(v2l));

	ft_printf("v3i = {%d, %d, %d}\n", DECOMP3(v3i));
	v3i = TEST_FUNC(sub1, v3i, 1);
	ft_printf("      {%d, %d, %d}\n", DECOMP3(v3i));

	ft_printf("v3d = {%f, %f, %f}\n", DECOMP3(v3d));
	v3d = TEST_FUNC(sub1, v3d, 2);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3d));

	ft_printf("v3f = {%f, %f, %f}\n", DECOMP3(v3f));
	v3f = TEST_FUNC(sub1, v3f, 3);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3f));

	ft_printf("v3l = {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
	v3l = TEST_FUNC(sub1, v3l, 4);
	ft_printf("      {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
}

void	test_mul1(void)
{
	t_vec2	v2d;
	t_vec3	v3d;
	t_vec2i	v2i;
	t_vec3i	v3i;
	t_vec2f	v2f;
	t_vec3f	v3f;
	t_vec2l	v2l;
	t_vec3l	v3l;

	v2d = vec2(1, 1);
	v2i = vec2i(2, 2);
	v2f = vec2f(3, 3);
	v2l = vec2l(4, 4);
	v3d = vec3(1, 1, 1);
	v3i = vec3i(2, 2, 2);
	v3f = vec3f(3, 3, 3);
	v3l = vec3l(4, 4, 4);

	ft_printf("v2i = {%d, %d}\n", DECOMP2(v2i));
	v2i = TEST_FUNC(mul1, v2i, 2);
	ft_printf("      {%d, %d}\n", DECOMP2(v2i));

	ft_printf("v2d = {%f, %f}\n", DECOMP2(v2d));
	v2d = TEST_FUNC(mul1, v2d, 2);
	ft_printf("      {%f, %f}\n", DECOMP2(v2d));

	ft_printf("v2f = {%f, %f}\n", DECOMP2(v2f));
	v2f = TEST_FUNC(mul1, v2f, 2);
	ft_printf("      {%f, %f}\n", DECOMP2(v2f));

	ft_printf("v2l = {%Lf, %Lf}\n", DECOMP2(v2l));
	v2l = TEST_FUNC(mul1, v2l, 2);
	ft_printf("      {%Lf, %Lf}\n\n", DECOMP2(v2l));

	ft_printf("v3i = {%d, %d, %d}\n", DECOMP3(v3i));
	v3i = TEST_FUNC(mul1, v3i, 2);
	ft_printf("      {%d, %d, %d}\n", DECOMP3(v3i));

	ft_printf("v3d = {%f, %f, %f}\n", DECOMP3(v3d));
	v3d = TEST_FUNC(mul1, v3d, 2);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3d));

	ft_printf("v3f = {%f, %f, %f}\n", DECOMP3(v3f));
	v3f = TEST_FUNC(mul1, v3f, 2);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3f));

	ft_printf("v3l = {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
	v3l = TEST_FUNC(mul1, v3l, 2);
	ft_printf("      {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
}

/*
**	decomposed vector to vector operation
*/
void	test_addc(void)
{
	t_vec2	v2d;
	t_vec2i	v2i;
	t_vec2f	v2f;
	t_vec2l	v2l;

	t_vec3	v3d;
	t_vec3i	v3i;
	t_vec3f	v3f;
	t_vec3l	v3l;

	v2d = vec2(0, 0);
	v2i = vec2i(0, 0);
	v2f = vec2f(0, 0);
	v2l = vec2l(0, 0);
	v3d = vec3(0, 0, 0);
	v3i = vec3i(0, 0, 0);
	v3f = vec3f(0, 0, 0);
	v3l = vec3l(0, 0, 0);

	ft_printf("v2i = {%d, %d}\n", DECOMP2(v2i));
	v2i = TEST_FUNC(addc, v2i, 2, 1, 2);
	ft_printf("      {%d, %d}\n", DECOMP2(v2i));

	ft_printf("v2d = {%f, %f}\n", DECOMP2(v2d));
	v2d = TEST_FUNC(addc, v2d, 2, 3, 4);
	ft_printf("      {%f, %f}\n", DECOMP2(v2d));

	ft_printf("v2f = {%f, %f}\n", DECOMP2(v2f));
	v2f = TEST_FUNC(addc, v2f, 2, 5, 6);
	ft_printf("      {%f, %f}\n", DECOMP2(v2f));

	ft_printf("v2l = {%Lf, %Lf}\n", DECOMP2(v2l));
	v2l = TEST_FUNC(addc, v2l, 2, 7, 8);
	ft_printf("      {%Lf, %Lf}\n\n", DECOMP2(v2l));

	ft_printf("v3i = {%d, %d, %d}\n", DECOMP3(v3i));
	v3i = TEST_FUNC(addc, v3i, 3, 1, 2, 3);
	ft_printf("      {%d, %d, %d}\n", DECOMP3(v3i));

	ft_printf("v3d = {%f, %f, %f}\n", DECOMP3(v3d));
	v3d = TEST_FUNC(addc, v3d, 3, 4, 5, 6);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3d));

	ft_printf("v3f = {%f, %f, %f}\n", DECOMP3(v3f));
	v3f = TEST_FUNC(addc, v3f, 3, 7, 8, 9);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3f));

	ft_printf("v3l = {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
	v3l = TEST_FUNC(addc, v3l, 3, 10, 11, 12);
	ft_printf("      {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
}

void	test_subc(void)
{
	t_vec2	v2d;
	t_vec2i	v2i;
	t_vec2f	v2f;
	t_vec2l	v2l;

	t_vec3	v3d;
	t_vec3i	v3i;
	t_vec3f	v3f;
	t_vec3l	v3l;

	v2d = vec2(1, 2);
	v2i = vec2i(3, 4);
	v2f = vec2f(5, 6);
	v2l = vec2l(7, 8);
	v3d = vec3(1, 2, 3);
	v3i = vec3i(4, 5, 5);
	v3f = vec3f(7, 8, 9);
	v3l = vec3l(10, 11, 12);

	ft_printf("v2i = {%d, %d}\n", DECOMP2(v2i));
	v2i = TEST_FUNC(subc, v2i, 2, 1, 2);
	ft_printf("      {%d, %d}\n", DECOMP2(v2i));

	ft_printf("v2d = {%f, %f}\n", DECOMP2(v2d));
	v2d = TEST_FUNC(subc, v2d, 2, 3, 4);
	ft_printf("      {%f, %f}\n", DECOMP2(v2d));

	ft_printf("v2f = {%f, %f}\n", DECOMP2(v2f));
	v2f = TEST_FUNC(subc, v2f, 2, 5, 6);
	ft_printf("      {%f, %f}\n", DECOMP2(v2f));

	ft_printf("v2l = {%Lf, %Lf}\n", DECOMP2(v2l));
	v2l = TEST_FUNC(subc, v2l, 2, 7, 8);
	ft_printf("      {%Lf, %Lf}\n\n", DECOMP2(v2l));

	ft_printf("v3i = {%d, %d, %d}\n", DECOMP3(v3i));
	v3i = TEST_FUNC(subc, v3i, 3, 1, 2, 3);
	ft_printf("      {%d, %d, %d}\n", DECOMP3(v3i));

	ft_printf("v3d = {%f, %f, %f}\n", DECOMP3(v3d));
	v3d = TEST_FUNC(subc, v3d, 3, 4, 5, 6);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3d));

	ft_printf("v3f = {%f, %f, %f}\n", DECOMP3(v3f));
	v3f = TEST_FUNC(subc, v3f, 3, 7, 8, 9);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3f));

	ft_printf("v3l = {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
	v3l = TEST_FUNC(subc, v3l, 3, 10, 11, 12);
	ft_printf("      {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
}

void	test_mulc(void)
{
	t_vec2	v2d;
	t_vec2i	v2i;
	t_vec2f	v2f;
	t_vec2l	v2l;

	t_vec3	v3d;
	t_vec3i	v3i;
	t_vec3f	v3f;
	t_vec3l	v3l;

	v2d = vec2(1, 2);
	v2i = vec2i(1, 2);
	v2f = vec2f(1, 2);
	v2l = vec2l(1, 2);
	v3d = vec3(1, 2, 3);
	v3i = vec3i(1, 2, 3);
	v3f = vec3f(1, 2, 3);
	v3l = vec3l(1, 2, 3);

	ft_printf("v2i = {%d, %d}\n", DECOMP2(v2i));
	v2i = TEST_FUNC(mulc, v2i, 2, 2, 4);
	ft_printf("      {%d, %d}\n", DECOMP2(v2i));

	ft_printf("v2d = {%f, %f}\n", DECOMP2(v2d));
	v2d = TEST_FUNC(mulc, v2d, 2, 2, 4);
	ft_printf("      {%f, %f}\n", DECOMP2(v2d));

	ft_printf("v2f = {%f, %f}\n", DECOMP2(v2f));
	v2f = TEST_FUNC(mulc, v2f, 2, 2, 4);
	ft_printf("      {%f, %f}\n", DECOMP2(v2f));

	ft_printf("v2l = {%Lf, %Lf}\n", DECOMP2(v2l));
	v2l = TEST_FUNC(mulc, v2l, 2, 2, 4);
	ft_printf("      {%Lf, %Lf}\n\n", DECOMP2(v2l));

	ft_printf("v3i = {%d, %d, %d}\n", DECOMP3(v3i));
	v3i = TEST_FUNC(mulc, v3i, 3, 2, 4, 8);
	ft_printf("      {%d, %d, %d}\n", DECOMP3(v3i));

	ft_printf("v3d = {%f, %f, %f}\n", DECOMP3(v3d));
	v3d = TEST_FUNC(mulc, v3d, 3, 2, 4, 8);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3d));

	ft_printf("v3f = {%f, %f, %f}\n", DECOMP3(v3f));
	v3f = TEST_FUNC(mulc, v3f, 3, 2, 4, 8);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3f));

	ft_printf("v3l = {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
	v3l = TEST_FUNC(mulc, v3l, 3, 2, 4, 8);
	ft_printf("      {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
}

/*
**	normalization operation
*/
void	test_normalize(void)
{
	t_vec2	v2d;
	t_vec3	v3d;
	t_vec2i	v2i;
	t_vec3i	v3i;
	t_vec2f	v2f;
	t_vec3f	v3f;
	t_vec2l	v2l;
	t_vec3l	v3l;

	v2d = vec2(2, 2);
	v2i = vec2i(0, 2);
	v2f = vec2f(2, 0);
	v2l = vec2l(0, 2);
	v3d = vec3(2, 2, 2);
	v3i = vec3i(2, 0, 0);
	v3f = vec3f(0, 2, 0);
	v3l = vec3l(0, 0, 2);
	ft_printf("v2i = {%d, %d}\n", DECOMP2(v2i));
	v2i = TEST_FUNC(normalize, v2i);
	ft_printf("      {%d, %d}\n", DECOMP2(v2i));

	ft_printf("v2d = {%f, %f}\n", DECOMP2(v2d));
	v2d = TEST_FUNC(normalize, v2d);
	ft_printf("      {%f, %f}\n", DECOMP2(v2d));

	ft_printf("v2f = {%f, %f}\n", DECOMP2(v2f));
	v2f = TEST_FUNC(normalize, v2f);
	ft_printf("      {%f, %f}\n", DECOMP2(v2f));

	ft_printf("v2l = {%Lf, %Lf}\n", DECOMP2(v2l));
	v2l = TEST_FUNC(normalize, v2l);
	ft_printf("      {%Lf, %Lf}\n\n", DECOMP2(v2l));

	ft_printf("v3i = {%d, %d, %d}\n", DECOMP3(v3i));
	v3i = TEST_FUNC(normalize, v3i);
	ft_printf("      {%d, %d, %d}\n", DECOMP3(v3i));

	ft_printf("v3d = {%f, %f, %f}\n", DECOMP3(v3d));
	v3d = TEST_FUNC(normalize, v3d);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3d));

	ft_printf("v3f = {%f, %f, %f}\n", DECOMP3(v3f));
	v3f = TEST_FUNC(normalize, v3f);
	ft_printf("      {%f, %f, %f}\n", DECOMP3(v3f));

	ft_printf("v3l = {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
	v3l = TEST_FUNC(normalize, v3l);
	ft_printf("      {%Lf, %Lf, %Lf}\n", DECOMP3(v3l));
}

/*
**	dot product operation
*/
void	test_dot(void)
{
	t_vec2	v2d[2];
	t_vec2i	v2i[2];
	t_vec2f	v2f[2];
	t_vec2l	v2l[2];

	t_vec3i	v3i[2];
	t_vec3	v3d[2];
	t_vec3f	v3f[2];
	t_vec3l	v3l[2];

	v2d[0] = vec2(0, 1);		v2d[1] = vec2(1, 0);
	v2i[0] = vec2i(1, 0);		v2i[1] = vec2i(0, 1);
	v2f[0] = vec2f(0, 1);		v2f[1] = vec2f(1, 0);
	v2l[0] = vec2l(1, 0);		v2l[1] = vec2l(0, 1);

	v3d[0] = vec3(0, 0, 1);		v3d[1] = vec3(0, 1, 0);
	v3i[0] = vec3i(0, 1, 0);	v3i[1] = vec3i(1, 0, 0);
	v3f[0] = vec3f(1, 0, 0);	v3f[1] = vec3f(0, 0, 1);
	v3l[0] = vec3l(0, 0, 1);	v3l[1] = vec3l(1, 0, 0);

	ft_printf("doti {%d, %d}.{%d, %d} = ", DECOMP2(v2i[0]), DECOMP2(v2i[1]));
	double dot2i = TEST_FUNC(dot, v2i[0], &v2i[1]);
	ft_printf("%.f\n", dot2i);
	ft_printf("doti {%d, %d}.{%d, %d} = ", DECOMP2(v2i[0]), DECOMP2(v2i[0]));
	dot2i = TEST_FUNC(dot, *v2i, v2i);
	ft_printf("%.f\n", dot2i);

	ft_printf("dotd {%.f, %.f}.{%.f, %.f} = ", DECOMP2(v2d[0]), DECOMP2(v2d[1]));
	double dot2d = TEST_FUNC(dot, v2d[0], &v2d[1]);
	ft_printf("%.f\n", dot2d);
	ft_printf("dotd {%.f, %.f}.{%.f, %.f} = ", DECOMP2(v2d[0]), DECOMP2(v2d[0]));
	dot2d = TEST_FUNC(dot, *v2d, v2d);
	ft_printf("%.f\n", dot2d);

	ft_printf("dotf {%.f, %.f}.{%.f, %.f} = ", DECOMP2(v2f[0]), DECOMP2(v2f[1]));
	float dot2f = TEST_FUNC(dot, v2f[0], &v2f[1]);
	ft_printf("%.f\n", dot2f);
	ft_printf("dotf {%.f, %.f}.{%.f, %.f} = ", DECOMP2(v2f[0]), DECOMP2(v2f[0]));
	dot2f = TEST_FUNC(dot, *v2f, v2f);
	ft_printf("%.f\n", dot2f);

	ft_printf("dotl {%.Lf, %.Lf}.{%.Lf, %.Lf} = ", DECOMP2(v2l[0]), DECOMP2(v2l[1]));
	long double dot2l = TEST_FUNC(dot, v2l[0], &v2l[1]);
	ft_printf("%.Lf\n", dot2l);
	ft_printf("dotl {%.Lf, %.Lf}.{%.Lf, %.Lf} = ", DECOMP2(v2l[0]), DECOMP2(v2l[0]));
	dot2l = TEST_FUNC(dot, *v2l, v2l);
	ft_printf("%.Lf\n\n", dot2l);

	ft_printf("doti {%d, %d, %d}.{%d, %d, %d} = ", DECOMP3(v3i[0]), DECOMP3(v3i[1]));
	double dot3i = TEST_FUNC(dot, v3i[0], &v3i[1]);
	ft_printf("%.f\n", dot3i);
	ft_printf("doti {%d, %d, %d}.{%d, %d, %d} = ", DECOMP3(v3i[0]), DECOMP3(v3i[0]));
	dot3i = TEST_FUNC(dot, *v3i, v3i);
	ft_printf("%.f\n", dot3i);

	ft_printf("dotd {%.f, %.f, %.f}.{%.f, %.f, %.f} = ", DECOMP3(v3d[0]), DECOMP3(v3d[1]));
	double dot3d = TEST_FUNC(dot, v3d[0], &v3d[1]);
	ft_printf("%.f\n", dot3d);
	ft_printf("dotd {%.f, %.f, %.f}.{%.f, %.f, %.f} = ", DECOMP3(v3d[0]), DECOMP3(v3d[0]));
	dot3d = TEST_FUNC(dot, *v3d, v3d);
	ft_printf("%.f\n", dot3d);

	ft_printf("dotf {%.f, %.f, %.f}.{%.f, %.f, %.f} = ", DECOMP3(v3f[0]), DECOMP3(v3f[1]));
	float dot3f = TEST_FUNC(dot, v3f[0], &v3f[1]);
	ft_printf("%.f\n", dot3f);
	ft_printf("dotf {%.f, %.f, %.f}.{%.f, %.f, %.f} = ", DECOMP3(v3f[0]), DECOMP3(v3f[0]));
	dot3f = TEST_FUNC(dot, *v3f, v3f);
	ft_printf("%.f\n", dot3f);

	ft_printf("dotl {%.Lf, %.Lf, %.Lf}.{%.Lf, %.Lf, %.Lf} = ", DECOMP3(v3l[0]), DECOMP3(v3l[1]));
	long double dot3l = TEST_FUNC(dot, v3l[0], &v3l[1]);
	ft_printf("%.Lf\n", dot3l);
	ft_printf("dotl {%.Lf, %.Lf, %.Lf}.{%.Lf, %.Lf, %.Lf} = ", DECOMP3(v3l[0]), DECOMP3(v3l[0]));
	dot3l = TEST_FUNC(dot, *v3l, v3l);
	ft_printf("%.Lf\n", dot3l);
}

/*
**	cross product operation
*/

void	test_cross(void)
{
	t_vec2	v2d;
	t_vec2i	v2i;
	t_vec2f	v2f;
	t_vec2l	v2l;

	t_vec3i	v3i[2];
	t_vec3	v3d[2];
	t_vec3f	v3f[2];
	t_vec3l	v3l[2];

	v2d = vec2(-0.0, 1);
	v2i = vec2i(1, 0);
	v2f = vec2f(-0.0, -1);
	v2l = vec2l(-1, -0.0);

	v3d[0] = vec3(0, 0, 1);		v3d[1] = vec3(0, 1, 0);
	v3i[0] = vec3i(0, 1, 0);	v3i[1] = vec3i(1, 0, 0);
	v3f[0] = vec3f(1, 0, 0);	v3f[1] = vec3f(0, 0, 1);
	v3l[0] = vec3l(0, 0, 1);	v3l[1] = vec3l(1, 0, 0);

	ft_printf("crossi {%+d, %+d} = ", DECOMP2(v2i));
	t_vec2i cross2i = TEST_FUNC(cross, v2i);
	ft_printf("{%+d, %+d} (%+f)\n", DECOMP2(cross2i), TEST_FUNC(dot, v2i, &cross2i));

	ft_printf("X crossd {%+.f, %+.f} = ", DECOMP2(v2d));
	t_vec2 cross2d = TEST_FUNC(cross, v2d);
	ft_printf("{%+.f, %+.f} (%+f)\n", DECOMP2(cross2d), TEST_FUNC(dot, v2d, &cross2d));

	ft_printf("X crossf {%+.f, %+.f} = ", DECOMP2(v2f));
	t_vec2f cross2f = TEST_FUNC(cross, v2f);
	ft_printf("{%+.f, %+.f} (%+f)\n", DECOMP2(cross2f), TEST_FUNC(dot, v2f, &cross2f));

	ft_printf("X crossl {%+.Lf, %+.Lf} = ", DECOMP2(v2l));
	t_vec2l cross2l = TEST_FUNC(cross, v2l);
	ft_printf("{%+.Lf, %+.Lf} (%+Lf)\n", DECOMP2(cross2l), TEST_FUNC(dot, v2l, &cross2l));

	ft_printf("crossi {%+d, %+d, %+d} x {%+d, %+d, %+d} = ", DECOMP3(v3i[0]), DECOMP3(v3i[1]));
	t_vec3i cross3i = TEST_FUNC(cross, v3i[0], &v3i[1]);
	ft_printf("{%+d, %+d, %+d} (%+f)\n", DECOMP3(cross3i), TEST_FUNC(dot, *v3i, &cross3i));

	ft_printf("crossd {%+.f, %+.f, %+.f} x {%+.f, %+.f, %+.f} = ", DECOMP3(v3d[0]), DECOMP3(v3d[1]));
	t_vec3 cross3d = TEST_FUNC(cross, v3d[0], &v3d[1]);
	ft_printf("{%+.f, %+.f, %+.f} (%+f)\n", DECOMP3(cross3d), TEST_FUNC(dot, *v3d, &cross3d));

	ft_printf("crossf {%+.f, %+.f, %+.f} x {%+.f, %+.f, %+.f} = ", DECOMP3(v3f[0]), DECOMP3(v3f[1]));
	t_vec3f cross3f = TEST_FUNC(cross, v3f[0], &v3f[1]);
	ft_printf("{%+.f, %+.f, %+.f} (%+f)\n", DECOMP3(cross3f), TEST_FUNC(dot, *v3f, &cross3f));

	ft_printf("crossl {%+.Lf, %+.Lf, %+.Lf} x {%+.Lf, %+.Lf, %+.Lf} = ", DECOMP3(v3l[0]), DECOMP3(v3l[1]));
	t_vec3l cross3l = TEST_FUNC(cross, v3l[0], &v3l[1]);
	ft_printf("{%+.Lf, %+.Lf, %+.Lf} (%+Lf)\n", DECOMP3(cross3l), TEST_FUNC(dot, *v3l, &cross3l));
}

void 	test_vec4(void)
{
	t_vec4i	v4i[3];
	t_vec4	v4d[3];
	t_vec4f	v4f[3];
	t_vec4l	v4l[3];

	v4d[0] =  vec4(1, 0, 0, 0);	v4d[1] = vec4(0, 1, 0, 0);	v4d[2] = vec4(0, 0, 1, 0);
	v4i[0] = vec4i(0, 1, 0, 0);	v4i[1] = vec4i(0, 0, 1, 0);	v4i[2] = vec4i(0, 0, 0, 1);
	v4f[0] = vec4f(0, 0, 1, 0);	v4f[1] = vec4f(0, 0, 0, 1);	v4f[2] = vec4f(1, 0, 0, 0);
	v4l[0] = vec4l(0, 0, 0, 1);	v4l[1] = vec4l(1, 0, 0, 0);	v4l[2] = vec4l(0, 1, 0, 0);

	ft_printf("crossd {%+.f, %+.f, %+.f, %+.f} x {%+.f, %+.f, %+.f, %+.f} x {%+.f, %+.f, %+.f, %+.f} = ", DECOMP4(v4d[0]), DECOMP4(v4d[1]), DECOMP4(v4d[2]));
	t_vec4 cross4d = TEST_FUNC(cross, v4d[0], &v4d[1], &v4d[2]);
	ft_printf("{%+.f, %+.f, %+.f, %+.f} (%+f)\n", DECOMP4(cross4d), TEST_FUNC(dot, *v4d, &cross4d));

	ft_printf("crossi {%+d, %+d, %+d, %+d} x {%+d, %+d, %+d, %+d} x {%+d, %+d, %+d, %+d} = ", DECOMP4(v4i[0]), DECOMP4(v4i[1]), DECOMP4(v4i[2]));
	t_vec4i cross4i = TEST_FUNC(cross, v4i[0], &v4i[1], &v4i[2]);
	ft_printf("{%+d, %+d, %+d, %+d} (%+f)\n", DECOMP4(cross4i), TEST_FUNC(dot, *v4i, &cross4i));

	ft_printf("crossf {%+.f, %+.f, %+.f, %+.f} x {%+.f, %+.f, %+.f, %+.f} x {%+.f, %+.f, %+.f, %+.f} = ", DECOMP4(v4f[0]), DECOMP4(v4f[1]), DECOMP4(v4f[2]));
	t_vec4f cross4f = TEST_FUNC(cross, v4f[0], &v4f[1], &v4f[2]);
	ft_printf("{%+.f, %+.f, %+.f, %+.f} (%+f)\n", DECOMP4(cross4f), TEST_FUNC(dot, *v4f, &cross4f));

	ft_printf("crossl {%+.Lf, %+.Lf, %+.Lf, %+.Lf} x {%+.Lf, %+.Lf, %+.Lf, %+.Lf} x {%+.Lf, %+.Lf, %+.Lf, %+.Lf} = ", DECOMP4(v4l[0]), DECOMP4(v4l[1]), DECOMP4(v4l[2]));
	t_vec4l cross4l = TEST_FUNC(cross, v4l[0], &v4l[1], &v4l[2]);
	ft_printf("{%+.Lf, %+.Lf, %+.Lf, %+.Lf} (%+Lf)\n", DECOMP4(cross4l), TEST_FUNC(dot, *v4l, &cross4l));
}

void	test_vectors(void)
{
	TEST(dot);
	TEST(norm);
	TEST(add1);
	TEST(sub1);
	TEST(mul1);
	TEST(addc);
	TEST(subc);
	TEST(mulc);
	TEST(cross);
	TEST(normalize);
	test_vec4();
}
