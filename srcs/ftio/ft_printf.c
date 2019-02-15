/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 21:56:12 by abaurens          #+#    #+#             */
/*   Updated: 2019/02/15 18:57:24 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>
#include "ftio/ft_error.h"
#include "ftio/ft_core.h"
#include "ftio/parser.h"
#include "ftlib.h"

int				ft_vprintf(const char *format, va_list ap)
{
	int			size;
	t_printf	data;

	if (!format)
		return (ERROR);
	ft_bzero(&data, sizeof(data));
	data.err = get_errno();
	data.use_chain_format = MAYBE;
	if (!(data.vals = ft_memalloc(sizeof(t_arg) * (count_args(format) + 1))))
		return (-1);
	va_copy(data.va_lst, ap);
	if ((size = get_non_arg(format, &data)) < 0)
		return (ft_freturn(data.buf, ERROR));
	while (*(format += size))
	{
		if ((size = parse_conversion(&format, &data)) < 0)
			return (ft_freturn(data.buf, ERROR));
		if ((size = get_non_arg(format, &data)) < 0)
			return (ft_freturn(data.buf, ERROR));
	}
	va_end(data.va_lst);
	clear_list(&data.args);
	return (ft_freturn(data.buf, write(1, data.buf, data.len)));
}

int				ft_printf(const char *format, ...)
{
	int			l;
	va_list		ap;

	va_start(ap, format);
	l = ft_vprintf(format, ap);
	va_end(ap);
	return (l);
}
