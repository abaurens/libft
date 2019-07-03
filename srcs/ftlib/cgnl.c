/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cgnl.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 21:33:40 by abaurens          #+#    #+#             */
/*   Updated: 2019/06/26 15:55:37 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ftlib.h"

static char		*ft_gnlcat(const char *s1, const char *s2, int n)
{
	int			i;
	int			len;
	char		*res;

	i = 0;
	if ((len = ft_idxof(0, s1) + ft_idxof(0, s2)) > n && n >= 0)
		len = n;
	if (!(res = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len] = 0;
	while (s1 && *s1 && i < len)
		res[i++] = *s1++;
	while (s2 && *s2 && i < len)
		res[i++] = *s2++;
	return (res);
}

static char		is_authorized(const char c, register const char *crset)
{
	while (crset && *crset)
		if (c == *crset++)
			return (1);
	return (0);
}

static char		check_read(const char *sample, size_t size, const char *crset)
{
	while (sample && size--)
		if (!is_authorized(*sample++, crset))
			return (0);
	return (1);
}

int				cgnl(const int fd, char **line, const char *crset)
{
	static char	*save = NULL;
	char		buff[BUFF_SIZE + 1];
	char		*tmp;
	size_t		l;
	int			n;

	while ((l = ft_idxof('\n', save)) == ft_idxof(0, save))
	{
		if ((n = read(fd, buff, BUFF_SIZE)) < 0 || !check_read(buff, n, crset))
			return (-1);
		if (n == 0)
			break ;
		buff[n] = 0;
		if (!(tmp = ft_gnlcat(save, buff, -1)))
			return (-1);
		free(save);
		save = tmp;
	}
	tmp = save;
	if (tmp && !(*line = ft_gnlcat(NULL, tmp, l)))
		return (-1);
	n = (tmp && (!tmp[l] || (tmp[l] == '\n' && ++l)));
	save = ((tmp && tmp[l]) ? ft_gnlcat(0x0, tmp + l, -1) : 0x0);
	free(tmp);
	return (n != 0 || save != NULL);
}