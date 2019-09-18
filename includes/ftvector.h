/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftvector.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:52:22 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/18 13:26:57 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTVECTOR_H
# define FTVECTOR_H

# include "vectors/t_vec2.h"
# include "vectors/t_vec3.h"

t_vec2	vec2(t_dbl__ x, t_dbl__ y);
t_vec2i	vec2i(t_int__ x, t_int__ y);
t_vec2f	vec2f(t_flt__ x, t_flt__ y);
t_vec2l	vec2l(t_ldbl__ x, t_ldbl__ y);

t_vec2	init_vec2(t_vec2 *v, t_dbl__ x, t_dbl__ y);
t_vec2i	init_vec2i(t_vec2i *v, t_int__ x, t_int__ y);
t_vec2f	init_vec2f(t_vec2f *v, t_flt__ x, t_flt__ y);
t_vec2l	init_vec2l(t_vec2l *v, t_ldbl__ x, t_ldbl__ y);

t_vec3	vec3(t_dbl__ x, t_dbl__ y, t_dbl__ z);
t_vec3i	vec3i(t_int__ x, t_int__ y, t_int__ z);
t_vec3f	vec3f(t_flt__ x, t_flt__ y, t_flt__ z);
t_vec3l	vec3l(t_ldbl__ x, t_ldbl__ y, t_ldbl__ z);

t_vec3	init_vec3(t_vec3 *v, t_dbl__ x, t_dbl__ y, t_dbl__ z);
t_vec3i	init_vec3i(t_vec3i *v, t_int__ x, t_int__ y, t_int__ z);
t_vec3f	init_vec3f(t_vec3f *v, t_flt__ x, t_flt__ y, t_flt__ z);
t_vec3l	init_vec3l(t_vec3l *v, t_ldbl__ x, t_ldbl__ y, t_ldbl__ z);

#endif
