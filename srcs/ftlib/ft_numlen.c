/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/12 23:25:16 by abaurens          #+#    #+#             */
/*   Updated: 2019/03/27 17:28:52 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t		ft_numlen(long int nb)
{
	size_t	len;

	len = 1;
	if (nb < 0)
		len++;
	while ((nb /= 10) != 0)
		len++;
	return (len);
}
