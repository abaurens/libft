/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:14:20 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/25 19:05:13 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmatrix/t_midx.h"
#include "ftmatrix/t_mat4.h"
#include "ftlib.h"	/**/
#include "ftio.h"	/**/

/*
**	TODO:
**		finish the inversion matrix function.
**		checkout
**			[https://fr.wikipedia.org/wiki/Matrice_transpos%C3%A9e]
**			[https://fr.wikipedia.org/wiki/Comatrice]
**			[https://fr.wikipedia.org/wiki/Matrice_inversible#M%C3%A9thodes_d'inversion]
**			and [https://en.wikipedia.org/wiki/Invertible_matrix#Inversion_of_4_%C3%97_4_matrices]
**		to do the actual algorithm.
**		use [https://calculis.net/matrice-inverse] to check results.
*/

double	m4_det(t_mat4 *m);

t_mat4	m4_invert(t_mat4 *m)
{
	t_mat4	res;

	ft_memcpy(&res, m, sizeof(res));
	ft_printf("determinant = %f\n", m4_det(m));
	return (res);
}
