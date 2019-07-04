/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftio.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 14:32:55 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/04 02:17:09 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTIO_H
# define FTIO_H

# include <stdio.h>
# include <stdarg.h>
# include <string.h>

# define BUFF_SIZE	1024
# define FT_LMAX	9223372036854775807ul

int			ft_printf(const char *frm,
							...) __attribute__((format(printf,1,2)));
int			ft_dprintf(int fd, const char *frm,
							...) __attribute__((format(printf,2,3)));
int			ft_sprintf(char *str, const char *frm,
							...) __attribute__((format(printf,2,3)));
int			ft_asprintf(char **ret, const char *frm,
							...) __attribute__((format(printf,2,3)));
int			ft_snprintf(char *str, size_t size, const char *frm,
							...) __attribute__((format(printf,3,4)));
int			ft_fprintf(FILE *stream, const char *frm,
							...) __attribute__((format(printf,2,3)));

int			ft_vprintf(const char *frm, va_list ap);
int			ft_vdprintf(int fd, const char *frm, va_list ap);
int			ft_vsprintf(char *str, const char *frm, va_list ap);
int			ft_vasprintf(char **ret, const char *frm, va_list ap);
int			ft_vfprintf(FILE *stream, const char *frm, va_list ap);
int			ft_vsnprintf(char *dst, size_t ln, const char *frm, va_list ap);

int			gnl(const int fd, char **line);
int			sgnl(const int fd, char **line);
int			cgnl(const int fd, char **line, const char *authorized);
int			get_next_line(const int fd, char **line);

void		ft_putnbr(int n);
void		ft_putchar(int c);
void		ft_putstr(char const *s);
void		ft_putendl(char const *s);
void		ft_putnbr_fd(int n, int fd);
void		ft_putchar_fd(int c, int fd);
void		ft_putstr_fd(char const *s, int fd);
void		ft_putendl_fd(char const *s, int fd);
void		ft_putnbr_base(int n, const char *base);
void		ft_putnbr_base_fd(int n, const char *base, int fd);

char		*ft_itoa(int n);

int			ft_atoi(const char *str);

long		ft_atol(const char *str);
long		ft_atol_base(const char *str, const char *base);


#endif
