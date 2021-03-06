/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_mat4.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 10:29:50 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/25 14:42:55 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_MAT4_H
# define T_MAT4_H

typedef struct s_mat4		t_mat4;
typedef double				t_m[16];

struct			s_mat4
{
	t_m			m;
};

#endif
