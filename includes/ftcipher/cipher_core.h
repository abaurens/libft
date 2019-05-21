/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cipher_core.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:08:57 by abaurens          #+#    #+#             */
/*   Updated: 2019/05/21 17:17:36 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CIPHER_CORE_H
# define CIPHER_CORE_H

# include "ft_cipher_types.h"

void		rkey(t_wrd *ptr, t_len size);
t_void		interlace_x(t_coid v1, t_coid v2, t_len size);
void		uninterlace_x(t_coid src, t_coid dst1, t_coid dst2, t_len size);

#endif
