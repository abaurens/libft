/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftvector.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:52:22 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 17:57:07 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTVECTOR_H
# define FTVECTOR_H

# include "ftmath/t_vec2.h"
# include "ftmath/t_vec3.h"

t_vec2	*init_vec2(t_vec2f *v, t_dbl x, t_dbl y);
t_vec2i	*init_vec2i(t_vec2i *v, t_int x, t_int y);
t_vec2f	*init_vec2f(t_vec2f *v, t_flt x, t_flt y);
t_vec2l	*init_vec2l(t_vec2l *v, t_ldbl x, t_ldbl y);

t_vec3	*init_vec3(t_vec3 *v, t_dbl x, t_dbl y, t_dbl z);
t_vec3i	*init_vec3i(t_vec3i *v, t_int x, t_int y, t_int z);
t_vec3f	*init_vec3f(t_vec3f *v, t_flt x, t_flt y, t_flt z);
t_vec3l	*init_vec3l(t_vec3l *v, t_ldbl x, t_ldbl y, t_ldbl z);

#endif
