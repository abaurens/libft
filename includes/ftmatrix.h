/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmatrix.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baurens <baurens@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:57:09 by baurens           #+#    #+#             */
/*   Updated: 2019/09/28 19:56:29 by baurens          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTMATRIX_H
# define FTMATRIX_H

# include "ftmatrix/t_midx.h"
# include "ftmatrix/t_mat4.h"

double	m4_det(t_mat4 *m);

t_mat4	m4_null(void);
t_mat4	m4_identity(void);
t_mat4	m4_inv(t_mat4 *m);
t_mat4	m4_add(t_mat4 *m1, t_mat4 *m2);
t_mat4	m4_sub(t_mat4 *m1, t_mat4 *m2);
t_mat4	m4_mul(t_mat4 *m1, t_mat4 *m2);

t_mat4	m4_muli(t_mat4 *m, double d);

#endif
