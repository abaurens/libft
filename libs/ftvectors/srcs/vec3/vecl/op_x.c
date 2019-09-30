/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 12:49:08 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ftvectors/vec3/t_vec3_t.h"

t_vec3l	v3l_addc(t_vec3l *v, uint32_t c, ...)
{
	t_vec3l	r;
	va_list	ap;

	r.x = v->x;
	r.y = v->y;
	r.z = v->z;
	va_start(ap, c);
	if (c && c--)
		r.x += va_arg(ap, t_ldbl__);
	if (c && c--)
		r.y += va_arg(ap, t_ldbl__);
	if (c && c--)
		r.z += va_arg(ap, t_ldbl__);
	va_end(ap);
	return (r);
}

t_vec3l	v3l_subc(t_vec3l *v, uint32_t c, ...)
{
	t_vec3l	r;
	va_list	ap;

	r.x = v->x;
	r.y = v->y;
	r.z = v->z;
	va_start(ap, c);
	if (c && c--)
		r.x -= va_arg(ap, t_ldbl__);
	if (c && c--)
		r.y -= va_arg(ap, t_ldbl__);
	if (c && c--)
		r.z -= va_arg(ap, t_ldbl__);
	va_end(ap);
	return (r);
}

t_vec3l	v3l_mulc(t_vec3l *v, uint32_t c, ...)
{
	t_vec3l	r;
	va_list	ap;

	r.x = v->x;
	r.y = v->y;
	r.z = v->z;
	va_start(ap, c);
	if (c && c--)
		r.x *= va_arg(ap, t_ldbl__);
	if (c && c--)
		r.y *= va_arg(ap, t_ldbl__);
	if (c && c--)
		r.z *= va_arg(ap, t_ldbl__);
	va_end(ap);
	return (r);
}
