/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsignedlen_base.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 23:30:48 by abaurens          #+#    #+#             */
/*   Updated: 2019/03/30 14:33:35 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "ftlib.h"

size_t		ft_unsignedlen_base(unsigned long int nb, const char *base)
{
	size_t	len;
	size_t	blen;

	len = 1;
	if (!base || !ft_isbase(base))
		return (0);
	blen = ft_strlen(base);
	while ((nb /= blen) != 0)
		len++;
	return (len);
}
