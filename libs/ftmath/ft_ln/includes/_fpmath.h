/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _fpmath.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 17:11:13 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/20 21:35:34 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _FPMATH_H
# define _FPMATH_H

union IEEEl2bits {
	long double	e;
	struct {
		unsigned int	manl	:32;
		unsigned int	manh	:32;
		unsigned int	exp	:15;
		unsigned int	sign	:1;
		unsigned int	junkl	:16;
		unsigned int	junkh	:32;
	} bits;
	struct {
		unsigned long	man	:64;
		unsigned int	expsign	:16;
		unsigned long	junk	:48;
	} xbits;
};

//# define	LDBL_NBIT	0x80000000
//# define	mask_nbit_l(u)	((u).bits.manh &= ~LDBL_NBIT)

//# define	LDBL_MANH_SIZE	32
//# define	LDBL_MANL_SIZE	32

/*
# define	LDBL_TO_ARRAY32(u, a) do {			\
	(a)[0] = (uint32_t)(u).bits.manl;		\
	(a)[1] = (uint32_t)(u).bits.manh;		\
} while (0)
*/
#endif
