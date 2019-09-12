/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:20:22 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/12 17:32:58 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_DISABLE_WARNINGS

#include <float.h>
#include <stdlib.h>
#include <stdio.h>
#include "ftlib.h"
#include "ftio.h"

#include "ftvector.h"

#define TEST(fnc) ft_printf("\e[31m%s:\e[0m\n", (#fnc));fnc();ft_printf("\n");
#define SUBTEST(fnc) ft_printf("  \e[35m%s:\e[0m\n", (#fnc));fnc();ft_printf("\n");

void		test_readline(void)
{
	char	*line;
	char	loop;

	loop = 1;
	while (loop)
	{
		if (!(line = ft_readline("21sh $>")))
			continue;
		if (!(line))
			loop = 0;
		if (ft_strequ(line, "exit"))
			loop = 0;
		else
			ft_printf("line : '%s'\n", line);
		free(line);
	}
}

void		tst_vec3i(void)
{
	t_vec3i	v;

	init_vec3i(&v, 10, 20, 30);
	ft_printf("vec: {%d, %d, %d}\n", v.x, v.y, v.z);
	g_vec3.add3(&v, 30, 20, 10);
	ft_printf("vec: {%d, %d, %d}\n", v.x, v.y, v.z);
	g_vec3.add(&v, 15);
	ft_printf("vec: {%d, %d, %d}\n", v.x, v.y, v.z);
}

void		tst_vec3(void)
{
	t_vec3	v;

	init_vec3(&v, 10.3, 20.2, 30.1);
	ft_printf("vec: {%f, %f, %f}\n", v.x, v.y, v.z);
	g_vec3.add3(&v, 30.1, 20.2, 10.3);
	ft_printf("vec: {%f, %f, %f}\n", v.x, v.y, v.z);
	g_vec3.add(&v, 15.1);
	g_vec3.mul(&v, 10);
	ft_printf("vec: {%f, %f, %f}\n", v.x, v.y, v.z);
}

void		tst_vec3f(void)
{
	t_vec3f	v;

	init_vec3f(&v, 10.3, 20.2, 30.1);
	ft_printf("vec: {%f, %f, %f}\n", v.x, v.y, v.z);
	g_vec3.add3(&v, 30.1, 20.2, 10.3);
	ft_printf("vec: {%f, %f, %f}\n", v.x, v.y, v.z);
	g_vec3.add(&v, 15.1);
	g_vec3.mul(&v, 10);
	ft_printf("vec: {%f, %f, %f}\n", v.x, v.y, v.z);
}

void		tst_vec3l(void)
{
	t_vec3l	v;

	init_vec3l(&v, 10.3L, 20.2L, 30.1L);
	ft_printf("vec: {%Lf, %Lf, %Lf}\n", v.x, v.y, v.z);
	g_vec3.add3(&v, 30.1L, 20.2L, 10.3L);
	ft_printf("vec: {%Lf, %Lf, %Lf}\n", v.x, v.y, v.z);
	g_vec3.add(&v, 15.1L);
	g_vec3.mul(&v, 10.0L);
	ft_printf("vec: {%Lf, %Lf, %Lf}\n", v.x, v.y, v.z);
}

void		tst_vec2i(void)
{
	t_vec2i	v;

	init_vec2i(&v, 10, 20);
	ft_printf("vec: {%d, %d}\n", v.x, v.y);
	g_vec2.add2(&v, 20, 10);
	ft_printf("vec: {%d, %d}\n", v.x, v.y);
	g_vec2.add(&v, 15);
	ft_printf("vec: {%d, %d}\n", v.x, v.y);
}

void		tst_vec2(void)
{
	t_vec2	v;

	init_vec2(&v, 10.2, 20.1);
	ft_printf("vec: {%f, %f}\n", v.x, v.y);
	g_vec2.add2(&v, 20.1, 10.2);
	ft_printf("vec: {%f, %f}\n", v.x, v.y);
	g_vec2.add(&v, 15.1);
	g_vec2.mul(&v, 10);
	ft_printf("vec: {%f, %f}\n", v.x, v.y);
}

void		tst_vec2f(void)
{
	t_vec2f	v;

	init_vec2f(&v, 10.2, 20.1);
	ft_printf("vec: {%f, %f}\n", v.x, v.y);
	g_vec2.add2(&v, 20.1, 10.2);
	ft_printf("vec: {%f, %f}\n", v.x, v.y);
	g_vec2.add(&v, 15.1);
	g_vec2.mul(&v, 10);
	ft_printf("vec: {%f, %f}\n", v.x, v.y);
}

void		tst_vec2l(void)
{
	t_vec2l	v;

	init_vec2l(&v, 10.2L, 20.1L);
	ft_printf("vec: {%Lf, %Lf}\n", v.x, v.y);
	g_vec2.add2(&v, 20.1L, 10.2L);
	ft_printf("vec: {%Lf, %Lf}\n", v.x, v.y);
	g_vec2.add(&v, 15.1L);
	g_vec2.mul(&v, 10.0L);
	ft_printf("vec: {%Lf, %Lf}\n", v.x, v.y);
}

static void	test_vec2(void)
{
	SUBTEST(tst_vec2);
	SUBTEST(tst_vec2i);
	SUBTEST(tst_vec2f);
	SUBTEST(tst_vec2l);
}

static void	test_vec3(void)
{
	SUBTEST(tst_vec3);
	SUBTEST(tst_vec3i);
	SUBTEST(tst_vec3f);
	SUBTEST(tst_vec3l);
}

int			main(void)
{
	TEST(test_vec2);
	TEST(test_vec3);
	return (0);
}
