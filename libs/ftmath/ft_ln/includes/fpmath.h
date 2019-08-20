/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fpmath.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 16:59:41 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/20 19:23:03 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FPMATH_H_
# define _FPMATH_H_

# include "_fpmath.h"

# ifndef _IEEE_WORD_ORDER
#  define	_IEEE_WORD_ORDER	_BYTE_ORDER
# endif

union IEEEf2bits {
	float	f;
	struct {
# if _BYTE_ORDER == _LITTLE_ENDIAN
		unsigned int	man	:23;
		unsigned int	exp	:8;
		unsigned int	sign	:1;
# else /* _BIG_ENDIAN */
		unsigned int	sign	:1;
		unsigned int	exp	:8;
		unsigned int	man	:23;
# endif
	} bits;
};

# define	DBL_MANH_SIZE	20
# define	DBL_MANL_SIZE	32

union IEEEd2bits {
	double	d;
	struct {
# if _BYTE_ORDER == _LITTLE_ENDIAN
		unsigned int	manl	:32;
		unsigned int	manh	:20;
		unsigned int	exp	:11;
		unsigned int	sign	:1;
# else /* _BIG_ENDIAN */
		unsigned int	sign	:1;
		unsigned int	exp	:11;
		unsigned int	manh	:20;
		unsigned int	manl	:32;
# endif
	} bits;
};

#endif
