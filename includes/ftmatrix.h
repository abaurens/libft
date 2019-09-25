/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmatrix.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baurens <baurens@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/23 20:57:09 by baurens           #+#    #+#             */
/*   Updated: 2019/09/25 17:31:36 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTMATRIX_H
# define FTMATRIX_H

# include "ftmatrix/t_midx.h"
# include "ftmatrix/t_mat4.h"

t_mat4	m4_null(void);
t_mat4	m4_identity(void);

t_mat4	m4_transpose(t_mat4 *m);
void	m4p_transpose(t_mat4 *r, t_mat4 *m);

t_mat4	m4_invert(t_mat4 *m);
t_mat4	m4p_invert(t_mat4 *r, t_mat4 *m);

t_mat4	m4_add(t_mat4 *m1, t_mat4 *m2);
t_mat4	m4_sub(t_mat4 *m1, t_mat4 *m2);
t_mat4	m4_mul(t_mat4 *m1, t_mat4 *m2);

void	m4p_add(t_mat4 *r, t_mat4 *m1, t_mat4 *m2);
void	m4p_sub(t_mat4 *r, t_mat4 *m1, t_mat4 *m2);
void	m4p_mul(t_mat4 *r, t_mat4 *m1, t_mat4 *m2);

#endif
