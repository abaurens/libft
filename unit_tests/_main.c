/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:17:31 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/20 08:43:43 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#define FT_DISABLE_WARNINGS

#include <locale.h>
#include <stdio.h>
#include <errno.h>
#include "ftlib.h"
#include "ftio.h"

void	test_vector_all(void);

int		main(void)
{
	/*test_vector_all();*/
	errno = -15;
	setlocale(LC_CTYPE, "");
	ft_printf("test: %d, %s, %c, %f, %x, %+e, %C, %m | %R, %#R\n", 42, "test string a bit long", 'C', 42.42, 0x42, -52.84e-17, L'💜', '\033', '\033');
	   printf("test: %d, %s, %c, %f, %x, %+e, %C, %m\n", 42, "test string a bit long", 'C', 42.42, 0x42, -52.84e-17, L'💜');
	return (0);
}
