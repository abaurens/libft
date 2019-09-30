/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/10 11:07:30 by abaurens          #+#    #+#             */
/*   Updated: 2019/09/30 11:35:11 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ftvectors/vec4/t_vec4_t.h"

t_vec4l	v4l_addc(t_vec4l *v, uint32_t c, ...)
{
	t_vec4l	r;
	va_list	ap;

	r.x = v->x;
	r.y = v->y;
	r.z = v->z;
	r.w = v->w;
	va_start(ap, c);
	if (c && c--)
		r.x += va_arg(ap, t_ldbl__);
	if (c && c--)
		r.y += va_arg(ap, t_ldbl__);
	if (c && c--)
		r.z += va_arg(ap, t_ldbl__);
	if (c && c--)
		r.w += va_arg(ap, t_ldbl__);
	va_end(ap);
	return (r);
}

t_vec4l	v4l_subc(t_vec4l *v, uint32_t c, ...)
{
	t_vec4l	r;
	va_list	ap;

	va_start(ap, c);
	r.x = v->x;
	r.y = v->y;
	r.z = v->z;
	r.w = v->w;
	if (c && c--)
		r.x -= va_arg(ap, t_ldbl__);
	if (c && c--)
		r.y -= va_arg(ap, t_ldbl__);
	if (c && c--)
		r.z -= va_arg(ap, t_ldbl__);
	if (c && c--)
		r.w -= va_arg(ap, t_ldbl__);
	va_end(ap);
	return (r);
}

t_vec4l	v4l_mulc(t_vec4l *v, uint32_t c, ...)
{
	t_vec4l	r;
	va_list	ap;

	va_start(ap, c);
	r.x = v->x;
	r.y = v->y;
	r.z = v->z;
	r.w = v->w;
	if (c && c--)
		r.x *= va_arg(ap, t_ldbl__);
	if (c && c--)
		r.y *= va_arg(ap, t_ldbl__);
	if (c && c--)
		r.z *= va_arg(ap, t_ldbl__);
	if (c && c--)
		r.w *= va_arg(ap, t_ldbl__);
	va_end(ap);
	return (r);
}
