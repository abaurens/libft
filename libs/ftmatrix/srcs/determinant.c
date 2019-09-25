/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   determinant.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 17:53:22 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/25 19:02:21 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftmatrix/t_midx.h"
#include "ftmatrix/t_mat4.h"

/*
	| a b c d |
	| e f g h |
	| i j k l |
	| m n o p |

det =
	| f g h |
a * | j k l |
	| n o p |
-
	| e g h |
b * | i k l |
	| m o p |
+
	| h e f |
c * | l i j |
	| p m n |
-
	| e f g |
d * | i j k |
	| m n o |

det = 0
	+a(fkp-flo-gjp+gln+hjo-hkn)
	-b(ekp-elo-gip+glm+hio-hkm)
	+c(ejp-eln-fip+flm+hin-hjm)
	-d(ejo-ekn-fio+fkm+gin-gjm)

d = a * (f * k * p - f * l * o - g * j * p + g * l * n + h * j * o - h * k * n)
- b * (e * k * p - e * l * o - g * i * p + g * l * m + h * i * o - h * k * m)
+ c * (e * j * p - e * l * n - f * i * p + f * l * m + h * i * n - h * j * m)
- d * (e * j * o - e * k * n - f * i * o + f * k * m + g * i * n - g * j * m);

*/

double	m4_det(t_mat4 *m)
{
	return (m->m[M00] * (m->m[M11] * m->m[M22] * m->m[M33]
		- m->m[M11] * m->m[M32] * m->m[M23]
		- m->m[M21] * m->m[M12] * m->m[M33]
		+ m->m[M21] * m->m[M32] * m->m[M13]
		+ m->m[M31] * m->m[M12] * m->m[M23]
		- m->m[M31] * m->m[M22] * m->m[M13])
	- m->m[M10] * (m->m[M01] * m->m[M22] * m->m[M33]
		- m->m[M01] * m->m[M32] * m->m[M23]
		- m->m[M21] * m->m[M02] * m->m[M33]
		+ m->m[M21] * m->m[M32] * m->m[M03]
		+ m->m[M31] * m->m[M02] * m->m[M23]
		- m->m[M31] * m->m[M22] * m->m[M03])
	+ m->m[M20] * (m->m[M01] * m->m[M12] * m->m[M33]
		- m->m[M01] * m->m[M32] * m->m[M13]
		- m->m[M11] * m->m[M02] * m->m[M33]
		+ m->m[M11] * m->m[M32] * m->m[M03]
		+ m->m[M31] * m->m[M02] * m->m[M13]
		- m->m[M31] * m->m[M12] * m->m[M03])
	- m->m[M30] * (m->m[M01] * m->m[M12] * m->m[M23]
		- m->m[M01] * m->m[M22] * m->m[M13]
		- m->m[M11] * m->m[M02] * m->m[M23]
		+ m->m[M11] * m->m[M22] * m->m[M03]
		+ m->m[M21] * m->m[M02] * m->m[M13]
		- m->m[M21] * m->m[M12] * m->m[M03]));
}
