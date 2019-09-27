/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   invert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:14:20 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/27 20:39:06 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmatrix/t_midx.h"
#include "ftmatrix/t_mat4.h"
#include "ftlib.h"

double	m4_det(t_mat4 *m);

void	append_identity(double to[32], t_m mat)
{
	int		x;
	int		y;

	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 8)
		{
			to[x + (y * 8)] = (x < 4 ? mat[x + y * 4] : ((x - 4) == y));
			++x;
		}
		++y;
	}
}

/*
**	Gauss-Jordan method:
**	Reminder:
**		valid operations are :
**			Swapping two rows,
**			Multiplying a row by a nonzero number,
**			Adding a multiple of one row to another row.
**
**		| 5  2  3 |
**	A = | 4  9  9 |
**		| 7 10  6 |
**
**	1 - augment the matrix to the right with identity:
**
*		| 5  2  3 | 1  0  0 |
**	A = | 4  9  9 | 0  1  0 |
**		| 7 10  6 | 0  0  1 |
**
**	2 - proceede to the reduction:
**
**	p = 1
**	pivots: (n-ieme ligne)
**		TAij = ((Ann * Aij - Ain * Anj) / p)
**
**		TA21 = ((Ann * A21 - A2n * An1) / p) = ((5 * 4 - 4 * 5) / p) = 0
**		TA22 = ((Ann * A22 - A2n * An2) / p) = ((5 * 9 - 4 * 2) / p) = 37
**		TA23 = ((Ann * A23 - A2n * An3) / p) = ((5 * 9 - 4 * 3) / p) = 33
**		TA24 = ((Ann * A24 - A2n * An4) / p) = ((5 * 0 - 4 * 1) / p) = -4
**
**		TA31 = ((A11 * A31 - A31 * A11) / p) = ((5 * 7 - 7 * 5) / p) = 0
**									...
**		| 5  2  3 | 1  0  0 |
**	TA= | 0 37 33 |-4 .. .. |
**		| 0 .. .. |   .. .. |
**	p = Ann
**	A = TA
**
**	int		x;
**	int		y;
**	double	p;
**
**	for (int n = 1; n < 4; ++s)
**	{
**		p = 1.0;
**		for (y = 1; y < 4; ++y)
**		{
**			if (y == n)
**				continue ;
**			for (x = 1; x < 2*4; ++x)
**			{
**				R[y][x] = ((M[n][n] * M[y][x] - M[y][n] * M[n][x]) / p);
**			}
**		}
**		p = M[n][n];
**		M = R;
**	}
*/

/*
**	Tyx = ((Ann * Ayx - Ayn * Anx) / p)
*/

int	pivot(int s, double p, double a[32])
{
	int		x;
	int		y;
	double	np;
	double	r[32];

	y = 4;
	np = a[s + s * 8];
	while (y-- > 0)
	{
		x = 8;
		if (y == s)
		{
			while (x-- > 0)
				r[x + y * 8] = a[x + y * 8];
			continue ;
		}
		while (x-- > 0)
		{
			r[x + y * 8] = (np * a[x + y * 8] - a[s + y * 8] * a[x + s * 8]);
			r[x + y * 8] /= p;
		}
	}
	ft_memcpy(a, r, sizeof(r));
	return (np);
}

/*
void	pivot1(double a[32])
{
	double	r[32];
	double	np;
	double	p;

	p = 1.0;
	np = a[0 + 0 * 8];
	r[7 + 0 * 8] = a[7 + 0 * 8];
	r[6 + 0 * 8] = a[6 + 0 * 8];
	r[5 + 0 * 8] = a[5 + 0 * 8];
	r[4 + 0 * 8] = a[4 + 0 * 8];
	r[3 + 0 * 8] = a[3 + 0 * 8];
	r[2 + 0 * 8] = a[2 + 0 * 8];
	r[1 + 0 * 8] = a[1 + 0 * 8];
	r[0 + 0 * 8] = a[0 + 0 * 8];
	r[7 + 3 * 8] = (np * a[7 + 3 * 8] - a[0 + 3 * 8] * a[7 + 0 * 8]) / p;
	r[6 + 3 * 8] = (np * a[6 + 3 * 8] - a[0 + 3 * 8] * a[6 + 0 * 8]) / p;
	r[5 + 3 * 8] = (np * a[5 + 3 * 8] - a[0 + 3 * 8] * a[5 + 0 * 8]) / p;
	r[4 + 3 * 8] = (np * a[4 + 3 * 8] - a[0 + 3 * 8] * a[4 + 0 * 8]) / p;
	r[3 + 3 * 8] = (np * a[3 + 3 * 8] - a[0 + 3 * 8] * a[3 + 0 * 8]) / p;
	r[2 + 3 * 8] = (np * a[2 + 3 * 8] - a[0 + 3 * 8] * a[2 + 0 * 8]) / p;
	r[1 + 3 * 8] = (np * a[1 + 3 * 8] - a[0 + 3 * 8] * a[1 + 0 * 8]) / p;
	r[0 + 3 * 8] = (np * a[0 + 3 * 8] - a[0 + 3 * 8] * a[0 + 0 * 8]) / p;
	r[7 + 2 * 8] = (np * a[7 + 2 * 8] - a[0 + 2 * 8] * a[7 + 0 * 8]) / p;
	r[6 + 2 * 8] = (np * a[6 + 2 * 8] - a[0 + 2 * 8] * a[6 + 0 * 8]) / p;
	r[5 + 2 * 8] = (np * a[5 + 2 * 8] - a[0 + 2 * 8] * a[5 + 0 * 8]) / p;
	r[4 + 2 * 8] = (np * a[4 + 2 * 8] - a[0 + 2 * 8] * a[4 + 0 * 8]) / p;
	r[3 + 2 * 8] = (np * a[3 + 2 * 8] - a[0 + 2 * 8] * a[3 + 0 * 8]) / p;
	r[2 + 2 * 8] = (np * a[2 + 2 * 8] - a[0 + 2 * 8] * a[2 + 0 * 8]) / p;
	r[1 + 2 * 8] = (np * a[1 + 2 * 8] - a[0 + 2 * 8] * a[1 + 0 * 8]) / p;
	r[0 + 2 * 8] = (np * a[0 + 2 * 8] - a[0 + 2 * 8] * a[0 + 0 * 8]) / p;
	r[7 + 1 * 8] = (np * a[7 + 1 * 8] - a[0 + 1 * 8] * a[7 + 0 * 8]) / p;
	r[6 + 1 * 8] = (np * a[6 + 1 * 8] - a[0 + 1 * 8] * a[6 + 0 * 8]) / p;
	r[5 + 1 * 8] = (np * a[5 + 1 * 8] - a[0 + 1 * 8] * a[5 + 0 * 8]) / p;
	r[4 + 1 * 8] = (np * a[4 + 1 * 8] - a[0 + 1 * 8] * a[4 + 0 * 8]) / p;
	r[3 + 1 * 8] = (np * a[3 + 1 * 8] - a[0 + 1 * 8] * a[3 + 0 * 8]) / p;
	r[2 + 1 * 8] = (np * a[2 + 1 * 8] - a[0 + 1 * 8] * a[2 + 0 * 8]) / p;
	r[1 + 1 * 8] = (np * a[1 + 1 * 8] - a[0 + 1 * 8] * a[1 + 0 * 8]) / p;
	r[0 + 1 * 8] = (np * a[0 + 1 * 8] - a[0 + 1 * 8] * a[0 + 0 * 8]) / p;
	p = np;
	ft_memcpy(a, r, sizeof(r));
	np = a[1 + 1 * 8];
	r[7 + 1 * 8] = a[7 + 1 * 8];
	r[6 + 1 * 8] = a[6 + 1 * 8];
	r[5 + 1 * 8] = a[5 + 1 * 8];
	r[4 + 1 * 8] = a[4 + 1 * 8];
	r[3 + 1 * 8] = a[3 + 1 * 8];
	r[2 + 1 * 8] = a[2 + 1 * 8];
	r[1 + 1 * 8] = a[1 + 1 * 8];
	r[0 + 1 * 8] = a[0 + 1 * 8];
	r[7 + 3 * 8] = (np * a[7 + 3 * 8] - a[1 + 3 * 8] * a[7 + 1 * 8]) / p;
	r[6 + 3 * 8] = (np * a[6 + 3 * 8] - a[1 + 3 * 8] * a[6 + 1 * 8]) / p;
	r[5 + 3 * 8] = (np * a[5 + 3 * 8] - a[1 + 3 * 8] * a[5 + 1 * 8]) / p;
	r[4 + 3 * 8] = (np * a[4 + 3 * 8] - a[1 + 3 * 8] * a[4 + 1 * 8]) / p;
	r[3 + 3 * 8] = (np * a[3 + 3 * 8] - a[1 + 3 * 8] * a[3 + 1 * 8]) / p;
	r[2 + 3 * 8] = (np * a[2 + 3 * 8] - a[1 + 3 * 8] * a[2 + 1 * 8]) / p;
	r[1 + 3 * 8] = (np * a[1 + 3 * 8] - a[1 + 3 * 8] * a[1 + 1 * 8]) / p;
	r[0 + 3 * 8] = (np * a[0 + 3 * 8] - a[1 + 3 * 8] * a[0 + 1 * 8]) / p;
	r[7 + 2 * 8] = (np * a[7 + 2 * 8] - a[1 + 2 * 8] * a[7 + 1 * 8]) / p;
	r[6 + 2 * 8] = (np * a[6 + 2 * 8] - a[1 + 2 * 8] * a[6 + 1 * 8]) / p;
	r[5 + 2 * 8] = (np * a[5 + 2 * 8] - a[1 + 2 * 8] * a[5 + 1 * 8]) / p;
	r[4 + 2 * 8] = (np * a[4 + 2 * 8] - a[1 + 2 * 8] * a[4 + 1 * 8]) / p;
	r[3 + 2 * 8] = (np * a[3 + 2 * 8] - a[1 + 2 * 8] * a[3 + 1 * 8]) / p;
	r[2 + 2 * 8] = (np * a[2 + 2 * 8] - a[1 + 2 * 8] * a[2 + 1 * 8]) / p;
	r[1 + 2 * 8] = (np * a[1 + 2 * 8] - a[1 + 2 * 8] * a[1 + 1 * 8]) / p;
	r[0 + 2 * 8] = (np * a[0 + 2 * 8] - a[1 + 2 * 8] * a[0 + 1 * 8]) / p;
	r[7 + 0 * 8] = (np * a[7 + 0 * 8] - a[1 + 0 * 8] * a[7 + 1 * 8]) / p;
	r[6 + 0 * 8] = (np * a[6 + 0 * 8] - a[1 + 0 * 8] * a[6 + 1 * 8]) / p;
	r[5 + 0 * 8] = (np * a[5 + 0 * 8] - a[1 + 0 * 8] * a[5 + 1 * 8]) / p;
	r[4 + 0 * 8] = (np * a[4 + 0 * 8] - a[1 + 0 * 8] * a[4 + 1 * 8]) / p;
	r[3 + 0 * 8] = (np * a[3 + 0 * 8] - a[1 + 0 * 8] * a[3 + 1 * 8]) / p;
	r[2 + 0 * 8] = (np * a[2 + 0 * 8] - a[1 + 0 * 8] * a[2 + 1 * 8]) / p;
	r[1 + 0 * 8] = (np * a[1 + 0 * 8] - a[1 + 0 * 8] * a[1 + 1 * 8]) / p;
	r[0 + 0 * 8] = (np * a[0 + 0 * 8] - a[1 + 0 * 8] * a[0 + 1 * 8]) / p;
	p = np;
	ft_memcpy(a, r, sizeof(r));
	np = a[2 + 2 * 8];
	r[7 + 2 * 8] = a[7 + 2 * 8];
	r[6 + 2 * 8] = a[6 + 2 * 8];
	r[5 + 2 * 8] = a[5 + 2 * 8];
	r[4 + 2 * 8] = a[4 + 2 * 8];
	r[3 + 2 * 8] = a[3 + 2 * 8];
	r[2 + 2 * 8] = a[2 + 2 * 8];
	r[1 + 2 * 8] = a[1 + 2 * 8];
	r[0 + 2 * 8] = a[0 + 2 * 8];
	r[7 + 3 * 8] = (np * a[7 + 3 * 8] - a[2 + 3 * 8] * a[7 + 2 * 8]) / p;
	r[6 + 3 * 8] = (np * a[6 + 3 * 8] - a[2 + 3 * 8] * a[6 + 2 * 8]) / p;
	r[5 + 3 * 8] = (np * a[5 + 3 * 8] - a[2 + 3 * 8] * a[5 + 2 * 8]) / p;
	r[4 + 3 * 8] = (np * a[4 + 3 * 8] - a[2 + 3 * 8] * a[4 + 2 * 8]) / p;
	r[3 + 3 * 8] = (np * a[3 + 3 * 8] - a[2 + 3 * 8] * a[3 + 2 * 8]) / p;
	r[2 + 3 * 8] = (np * a[2 + 3 * 8] - a[2 + 3 * 8] * a[2 + 2 * 8]) / p;
	r[1 + 3 * 8] = (np * a[1 + 3 * 8] - a[2 + 3 * 8] * a[1 + 2 * 8]) / p;
	r[0 + 3 * 8] = (np * a[0 + 3 * 8] - a[2 + 3 * 8] * a[0 + 2 * 8]) / p;
	r[7 + 1 * 8] = (np * a[7 + 1 * 8] - a[2 + 1 * 8] * a[7 + 2 * 8]) / p;
	r[6 + 1 * 8] = (np * a[6 + 1 * 8] - a[2 + 1 * 8] * a[6 + 2 * 8]) / p;
	r[5 + 1 * 8] = (np * a[5 + 1 * 8] - a[2 + 1 * 8] * a[5 + 2 * 8]) / p;
	r[4 + 1 * 8] = (np * a[4 + 1 * 8] - a[2 + 1 * 8] * a[4 + 2 * 8]) / p;
	r[3 + 1 * 8] = (np * a[3 + 1 * 8] - a[2 + 1 * 8] * a[3 + 2 * 8]) / p;
	r[2 + 1 * 8] = (np * a[2 + 1 * 8] - a[2 + 1 * 8] * a[2 + 2 * 8]) / p;
	r[1 + 1 * 8] = (np * a[1 + 1 * 8] - a[2 + 1 * 8] * a[1 + 2 * 8]) / p;
	r[0 + 1 * 8] = (np * a[0 + 1 * 8] - a[2 + 1 * 8] * a[0 + 2 * 8]) / p;
	r[7 + 0 * 8] = (np * a[7 + 0 * 8] - a[2 + 0 * 8] * a[7 + 2 * 8]) / p;
	r[6 + 0 * 8] = (np * a[6 + 0 * 8] - a[2 + 0 * 8] * a[6 + 2 * 8]) / p;
	r[5 + 0 * 8] = (np * a[5 + 0 * 8] - a[2 + 0 * 8] * a[5 + 2 * 8]) / p;
	r[4 + 0 * 8] = (np * a[4 + 0 * 8] - a[2 + 0 * 8] * a[4 + 2 * 8]) / p;
	r[3 + 0 * 8] = (np * a[3 + 0 * 8] - a[2 + 0 * 8] * a[3 + 2 * 8]) / p;
	r[2 + 0 * 8] = (np * a[2 + 0 * 8] - a[2 + 0 * 8] * a[2 + 2 * 8]) / p;
	r[1 + 0 * 8] = (np * a[1 + 0 * 8] - a[2 + 0 * 8] * a[1 + 2 * 8]) / p;
	r[0 + 0 * 8] = (np * a[0 + 0 * 8] - a[2 + 0 * 8] * a[0 + 2 * 8]) / p;
	p = np;
	ft_memcpy(a, r, sizeof(r));
	np = a[3 + 3 * 8];
	r[7 + 3 * 8] = a[7 + 3 * 8];
	r[6 + 3 * 8] = a[6 + 3 * 8];
	r[5 + 3 * 8] = a[5 + 3 * 8];
	r[4 + 3 * 8] = a[4 + 3 * 8];
	r[3 + 3 * 8] = a[3 + 3 * 8];
	r[2 + 3 * 8] = a[2 + 3 * 8];
	r[1 + 3 * 8] = a[1 + 3 * 8];
	r[0 + 3 * 8] = a[0 + 3 * 8];
	r[7 + 2 * 8] = (np * a[7 + 2 * 8] - a[3 + 2 * 8] * a[7 + 3 * 8]) / p;
	r[6 + 2 * 8] = (np * a[6 + 2 * 8] - a[3 + 2 * 8] * a[6 + 3 * 8]) / p;
	r[5 + 2 * 8] = (np * a[5 + 2 * 8] - a[3 + 2 * 8] * a[5 + 3 * 8]) / p;
	r[4 + 2 * 8] = (np * a[4 + 2 * 8] - a[3 + 2 * 8] * a[4 + 3 * 8]) / p;
	r[3 + 2 * 8] = (np * a[3 + 2 * 8] - a[3 + 2 * 8] * a[3 + 3 * 8]) / p;
	r[2 + 2 * 8] = (np * a[2 + 2 * 8] - a[3 + 2 * 8] * a[2 + 3 * 8]) / p;
	r[1 + 2 * 8] = (np * a[1 + 2 * 8] - a[3 + 2 * 8] * a[1 + 3 * 8]) / p;
	r[0 + 2 * 8] = (np * a[0 + 2 * 8] - a[3 + 2 * 8] * a[0 + 3 * 8]) / p;
	r[7 + 1 * 8] = (np * a[7 + 1 * 8] - a[3 + 1 * 8] * a[7 + 3 * 8]) / p;
	r[6 + 1 * 8] = (np * a[6 + 1 * 8] - a[3 + 1 * 8] * a[6 + 3 * 8]) / p;
	r[5 + 1 * 8] = (np * a[5 + 1 * 8] - a[3 + 1 * 8] * a[5 + 3 * 8]) / p;
	r[4 + 1 * 8] = (np * a[4 + 1 * 8] - a[3 + 1 * 8] * a[4 + 3 * 8]) / p;
	r[3 + 1 * 8] = (np * a[3 + 1 * 8] - a[3 + 1 * 8] * a[3 + 3 * 8]) / p;
	r[2 + 1 * 8] = (np * a[2 + 1 * 8] - a[3 + 1 * 8] * a[2 + 3 * 8]) / p;
	r[1 + 1 * 8] = (np * a[1 + 1 * 8] - a[3 + 1 * 8] * a[1 + 3 * 8]) / p;
	r[0 + 1 * 8] = (np * a[0 + 1 * 8] - a[3 + 1 * 8] * a[0 + 3 * 8]) / p;
	r[7 + 0 * 8] = (np * a[7 + 0 * 8] - a[3 + 0 * 8] * a[7 + 3 * 8]) / p;
	r[6 + 0 * 8] = (np * a[6 + 0 * 8] - a[3 + 0 * 8] * a[6 + 3 * 8]) / p;
	r[5 + 0 * 8] = (np * a[5 + 0 * 8] - a[3 + 0 * 8] * a[5 + 3 * 8]) / p;
	r[4 + 0 * 8] = (np * a[4 + 0 * 8] - a[3 + 0 * 8] * a[4 + 3 * 8]) / p;
	r[3 + 0 * 8] = (np * a[3 + 0 * 8] - a[3 + 0 * 8] * a[3 + 3 * 8]) / p;
	r[2 + 0 * 8] = (np * a[2 + 0 * 8] - a[3 + 0 * 8] * a[2 + 3 * 8]) / p;
	r[1 + 0 * 8] = (np * a[1 + 0 * 8] - a[3 + 0 * 8] * a[1 + 3 * 8]) / p;
	r[0 + 0 * 8] = (np * a[0 + 0 * 8] - a[3 + 0 * 8] * a[0 + 3 * 8]) / p;
	ft_memcpy(a, r, sizeof(r));
}
*/

t_mat4	m4_invert(t_mat4 *m)
{
	int		i;
	int		j;
	double	det;
	t_mat4	res;
	double	tmp[32];

	ft_bzero(&res, sizeof(res));
	if ((det = m4_det(m)) == 0.0)
		return (res);
	append_identity(tmp, m->m);
	det = pivot(3, pivot(2, pivot(1, pivot(0, 1.0, tmp), tmp), tmp), tmp);
	i = 4;
	while (i-- > 0)
	{
		j = 4;
		while (j-- > 0)
			res.m[j + i * 4] = tmp[j + 4 + (i * 8)] / det;
	}
	return (res);
}
