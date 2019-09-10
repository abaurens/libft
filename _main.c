/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 17:20:22 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 19:57:44 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_DISABLE_WARNINGS

#include <float.h>
#include <stdlib.h>
#include <stdio.h>
#include "ftlib.h"
#include "ftio.h"

#include "ftvector.h"

void		test_readline(void)
{
	char	*line;
	char	loop;

	loop = 1;
	while (loop)
	{
		if (!(line = ft_readline("21sh $>")) && !(loop = 0))
			continue;
		if (ft_strequ(line, "exit"))
			loop = 0;
		else
			ft_printf("line : '%s'\n", line);
		free(line);
	}
}

void		test_vec3(void)
{
	t_vec3i	v;

	v.x = 10;
	v.y = 20;
	v.z = 30;
	ft_printf("vec: {%d, %d, %d}\n", v.x, v.y, v.z);
	g_vec3i.add3(&v, 10, 10, 10);
	ft_printf("vec: {%d, %d, %d}\n\n", v.x, v.y, v.z);
	init_vec3i(&v, 30, 20, 10);
	ft_printf("vec: {%d, %d, %d}\n", v.x, v.y, v.z);
	g_vec3i.add3(&v, 10, 20, 30);
	ft_printf("vec: {%d, %d, %d}\n", v.x, v.y, v.z);
	g_vec3i.add(&v, 15);
	ft_printf("vec: {%d, %d, %d}\n", v.x, v.y, v.z);
}

void		test_vec2(void)
{
	t_vec2f	v;

	v.x = 10.0;
	v.y = 20.0;
	ft_printf("vec: {%f, %f}\n", v.x, v.y);
	g_vec2f.add2(&v, 20.5, 10.5);
	ft_printf("vec: {%f, %f}\n", v.x, v.y);
}

int			main(void)
{
	test_vec2();
	return (0);
}
