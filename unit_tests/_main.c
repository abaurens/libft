/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:17:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/20 08:24:00 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#define FT_DISABLE_WARNINGS
*/
#include <locale.h>
#include <stdio.h>
#include <errno.h>
#include "ftlib.h"
#include "ftio.h"

void	test_vector_all(void);

int		main(void)
{
	/*test_vector_all();*/
	/*setlocale(LC_ALL, "");*/
	errno = -15;
	ft_printf("test: %d, %s, %c, %f, %x, %+e, %C, %m\n", 42, "test string a bit long", 'C', 42.42, 0x42, -52.84e-17, L'a');
	   printf("test: %d, %s, %c, %f, %x, %+e, %C, %m\n", 42, "test string a bit long", 'C', 42.42, 0x42, -52.84e-17, L'a');
	return (0);
}
