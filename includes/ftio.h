/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftio.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:32:55 by abaurens          #+#    #+#             */
/*   Updated: 2019/02/15 14:35:40 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTIO_H
# define FTIO_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>

int				ft_printf(const char *frm,
							...) __attribute__((format(printf,1,2)));
int				ft_dprintf(int fd, const char *frm,
							...) __attribute__((format(printf,2,3)));
int				ft_sprintf(char *str, const char *frm,
							...) __attribute__((format(printf,2,3)));
int				ft_asprintf(char **ret, const char *frm,
							...) __attribute__((format(printf,2,3)));
int				ft_snprintf(char *str, size_t size, const char *frm,
							...) __attribute__((format(printf,3,4)));
int				ft_fprintf(FILE *stream, const char *frm,
							...) __attribute__((format(printf,2,3)));

int				ft_vprintf(const char *frm, va_list ap);
int				ft_vdprintf(int fd, const char *frm, va_list ap);
int				ft_vsprintf(char *str, const char *frm, va_list ap);
int				ft_vasprintf(char **ret, const char *frm, va_list ap);
int				ft_vfprintf(FILE *stream, const char *frm, va_list ap);
int				ft_vsnprintf(char *dst, size_t ln, const char *frm, va_list ap);

#endif
