/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/11 13:53:50 by abaurens          #+#    #+#             */
/*   Updated: 2019/02/02 21:04:15 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_H
# define CONVERTER_H

# include "ftio/ft_types.h"

/*
**	convert/
*/
char			*convert_percent(t_printf *data, t_arg *arg);
char			*convert_integer(t_printf *const data, t_arg *const arg);
char			*convert_linteger(t_printf *const data, t_arg *const arg);
char			*convert_u_integer(t_printf *data, t_arg *arg);
char			*convert_u_linteger(t_printf *data, t_arg *arg);
char			*convert_u_integer_octal(t_printf *data, t_arg *arg);
char			*convert_u_linteger_octal(t_printf *data, t_arg *arg);
char			*convert_u_integer_hexa(t_printf *data, t_arg *arg);
char			*convert_double_floating(t_printf *data, t_arg *arg);
char			*convert_double_scientific(t_printf *data, t_arg *arg);
char			*convert_double_compact(t_printf *data, t_arg *arg);
char			*convert_double_hexa(t_printf *data, t_arg *arg);
char			*convert_char(t_printf *data, t_arg *arg);
char			*convert_wchar(t_printf *data, t_arg *arg);
char			*convert_string(t_printf *data, t_arg *arg);
char			*convert_wstring(t_printf *data, t_arg *arg);
char			*convert_wide_char_string(t_printf *data, t_arg *arg);
char			*convert_pointer(t_printf *data, t_arg *arg);
char			*convert_length(t_printf *data, t_arg *arg);
char			*convert_strerror(t_printf *data, t_arg *arg);
char			*convert_u_integer_binary(t_printf *data, t_arg *arg);
char			*convert_non_printable_string(t_printf *data, t_arg *arg);

# ifdef BONUS

char			*convert_iso_date(t_printf *data, t_arg *arg);

# endif

/*
**	double_scientific.c
*/
char			*printf_ldbl_s(t_arg *const ar);

/*
**	double_floating.c
*/
char			*printf_ldbl(t_printf *const data, t_arg *const arg);

/*
**	% = only print a percent char
**		(because % is used to escape conversions) (NO ARG)
**	i, d = signed decimal
**	o = unsigned octal
**	u = unsigned decimal
**	x, X = unsigned hexadecimal (low and up case)
**	f = double (and floats casted to double)
**	F = double (and floats casted to double) but NAN and INFINITY are upcase
**	e = double (and floats casted to double) but printd in the form xxxxe+-yyy
**	E = same as e but the exposant letter 'e' is upcase
**	g = the most compact between f and e
**	G = same as g but between f and E
**	a = double (and floats casted to double) in lowcase hexadecimal
**		with the form [-]0xh.hhhhp+-dd
**	A = double (and floats casted to double) in upcase hexadecimal
**		with the form [-]0Xh.hhhhP+-dd (same as a, but X and P are upcase)
**	c = 1 byte character
**	C = wide character (wchar)
**	s = 1 byte character string
**	S = wide character string
**	p = pointer address (in hexadecimal format)
**	n = place the number of character writed by this printf until this
**		convertion into an int pointer
**	b = unsigned binary
**		(prefixed with 0b with flag #)
**	r = string avec caracteres non imprimable
**		(prints the null terminating zero with flag #)
**
**	[BONUS ONLY]
**	k = ISO formated date (ls formated with flag #)
**	m = prints the value of strerror(errno) (NO ARG)
*/

static const t_converter	g_converters[] =
{
	{'%', FALSE, convert_percent},
	{'d', TRUE, convert_integer},
	{'D', TRUE, convert_linteger},
	{'i', TRUE, convert_integer},
	{'u', TRUE, convert_u_integer},
	{'U', TRUE, convert_u_linteger},
	{'o', TRUE, convert_u_integer_octal},
	{'O', TRUE, convert_u_linteger_octal},
	{'x', TRUE, convert_u_integer_hexa},
	{'X', TRUE, convert_u_integer_hexa},
	{'f', TRUE, convert_double_floating},
	{'F', TRUE, convert_double_floating},
	{'e', TRUE, convert_double_scientific},
	{'E', TRUE, convert_double_scientific},
	{'g', TRUE, convert_double_compact},
	{'G', TRUE, convert_double_compact},
	{'a', TRUE, convert_double_hexa},
	{'A', TRUE, convert_double_hexa},
	{'c', TRUE, convert_char},
	{'C', TRUE, convert_wchar},
	{'s', TRUE, convert_string},
	{'S', TRUE, convert_wstring},
	{'p', TRUE, convert_pointer},
	{'n', TRUE, convert_length},
	{'b', TRUE, convert_u_integer_binary},
	{'r', TRUE, convert_non_printable_string},

# ifdef BONUS

	{'m', FALSE, convert_strerror},
	{'k', TRUE, convert_iso_date},

# endif

	{'\0', MAYBE, (void *)0x0}
};

#endif
