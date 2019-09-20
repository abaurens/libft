/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dragon.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 20:45:57 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/20 03:09:48 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DRAGON_H
# define DRAGON_H

# include <string.h>
# include <stdint.h>

/*
**	# define MASK3			0b111
*/
# define MASK3			7

# define MAX_BINT_BLKS 1000ul
# define MAX_BINT_VALS 0xFFFFFFFF
# define BIT_PER_BLOCK 32

typedef unsigned int	t_block;
typedef unsigned long	t_proc;

typedef struct			s_bint
{
	size_t				len;
	t_block				blks[MAX_BINT_BLKS];
}						t_bint;

t_bint					bi_init(t_bint const *const n);
char					biiszero(t_bint const *const n);
void					bi_set(t_bint *n, unsigned long val);

/*
**	print.c
*/
void					bi_print_dec(t_bint const *const n);
void					bi_print_bin(t_bint const *const n);
void					bi_print_bin_space(t_bint const *const n);

/*
**	bint_cmp.c
*/
long					bicmp(const t_bint *lhs, const t_bint *rhs);
long					bicmplng(const t_bint *lhs, unsigned long v);

/*
**	add.c
*/
void					biincrement(t_bint *n1);
void					biadd(t_bint *res, t_bint *n1, t_bint *n2);
void					biaddint(t_bint *res, t_bint *n1, unsigned int v);

/*
**	sub.c
*/
void					bisub(t_bint *res, t_bint *n1, t_bint *n2);
void					bisubint(t_bint *res, t_bint *n1, unsigned int v);

/*
**	mul.c
*/
void					bimul(t_bint *res, t_bint *n1, t_bint *n2);
void					bimulint(t_bint *res, t_bint *n1, unsigned int v);
void					bimul2(t_bint *res, t_bint *n);
void					bimul10(t_bint *res, t_bint *n);

/*
**	pow.c
*/
void					bimul_pow10(t_bint *res, t_bint *n, unsigned int ex);
void					bipow10(t_bint *const res, unsigned int ex);
void					bimul_pow10(t_bint *res, t_bint *n, unsigned int ex);
void					bipow2(t_bint *res, unsigned int ex);

/*
**	div.c
*/
unsigned int			bidiv_maxq93(t_bint *n1, t_bint *n2);
unsigned int			bidiv_maxq92(t_bint *n1, t_bint *n2);
unsigned int			bidiv10(t_bint *res, t_bint *n1);

/*
**	shift.c
*/
void					bi_shift_left(t_bint *res, unsigned int shift);

/*
**	utils.c
*/
void					swap(uintptr_t *n1, uintptr_t *n2);

/*
**	dragon_buffer.c
*/
size_t					add_digit(char **buffer, const size_t l, const char c);

#endif
