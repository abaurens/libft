/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftvector.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 20:52:22 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/10 15:40:19 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTVECTOR_H
# define FTVECTOR_H

# include "ftmath/t_vec2.h"
# include "ftmath/t_vec3.h"

t_vec3f	*init_vec3(t_vec3f *v, t_dbl x, t_dbl y, t_dbl z);
t_vec3i	*init_vec3i(t_vec3i *v, t_int x, t_int y, t_int z);
t_vec3f	*init_vec3f(t_vec3f *v, t_flt x, t_flt y, t_flt z);
t_vec3f	*init_vec3l(t_vec3f *v, t_ldbl x, t_ldbl y, t_ldbl z);

#endif
