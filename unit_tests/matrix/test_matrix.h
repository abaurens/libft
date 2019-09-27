/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_matrix.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:24:43 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/27 20:11:47 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_MATRIX_H
# define TEST_MATRIX_H

# define DECOMP(mat)\
	(mat)->m[0], (mat)->m[1], (mat)->m[2], (mat)->m[3]\
	(mat)->m[4], (mat)->m[5], (mat)->m[6], (mat)->m[7]\
	(mat)->m[8], (mat)->m[9], (mat)->m[10], (mat)->m[11]\
	(mat)->m[12], (mat)->m[13], (mat)->m[14], (mat)->m[15]

# define PRINT_MATRIX(mat) {\
	ft_printf("%8.3f, %8.3f, %8.3f, %8.3f\n", (mat)->m[0], (mat)->m[1],\
	(mat)->m[2], (mat)->m[3]);\
	ft_printf("%8.3f, %8.3f, %8.3f, %8.3f\n", (mat)->m[4], (mat)->m[5],\
	(mat)->m[6], (mat)->m[7]);\
	ft_printf("%8.3f, %8.3f, %8.3f, %8.3f\n", (mat)->m[8], (mat)->m[9],\
	(mat)->m[10], (mat)->m[11]);\
	ft_printf("%8.3f, %8.3f, %8.3f, %8.3f\n", (mat)->m[12], (mat)->m[13],\
	(mat)->m[14], (mat)->m[15]);\
}

#endif
