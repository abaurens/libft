/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   escape_sequences.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 16:15:57 by abaurens          #+#    #+#             */
/*   Updated: 2019/08/28 18:00:26 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ftio/line_editor.h"
#include "ftmath.h"
#include "ftlib.h"
#include "ftio.h"

static const t_escape_dispatch	g_subseq_crochet[] = {
	{'A', esc_up_arrow},
	{'B', esc_down_arrow},
	{'D', esc_left_arrow},
	{'C', esc_right_arrow},
	{0, 0},
};

static char	esc_crochet(const int fd, char buf[MAX_CMD + 1], uint32_t *i)
{
	uint32_t	j;
	char		key;

	j = 0;
	if (read(fd, &key, 1) < 0)
		return (1);
	while (g_subseq_crochet[j].c && g_subseq_crochet[j].c != key)
		j++;
	if (g_subseq_crochet[j].c && g_subseq_crochet[j].func)
		return (g_subseq_crochet[j].func(fd, buf, i));
	ft_dprintf(2, "\e[31m\\e[%c(%d) -> %d\e[0m\n", key, key, j);
	sleep(2);
	return (0);
}

static const t_escape_dispatch	g_subseq_capital_o[] = {
	{'F', esc_end_key},
	{'H', esc_begin_key},
	{0, 0},
};

static char	esc_capital_o(const int fd, char buf[MAX_CMD + 1], uint32_t *i)
{
	uint32_t	j;
	char		key;

	j = 0;
	if (read(fd, &key, 1) < 0)
		return (1);
	while (g_subseq_capital_o[j].c && g_subseq_capital_o[j].c != key)
		j++;
	if (g_subseq_capital_o[j].c && g_subseq_capital_o[j].func)
		return (g_subseq_capital_o[j].func(fd, buf, i));
	ft_dprintf(2, "\e[31m\\eO%c(%d)\e[0m\n", key, key);
	sleep(2);
	return (0);
}

static const t_escape_dispatch	g_subseq[] = {
	{'[', esc_crochet},
	{'O', esc_capital_o},
	{0, 0}
};

char		esc_sequence(const int fd, char buf[MAX_CMD + 1], uint32_t *i)
{
	uint32_t	j;
	char		key;

	j = 0;
	if (read(fd, &key, 1) < 0)
		return (1);
	while (g_subseq[j].c && g_subseq[j].c != key)
		j++;
	if (g_subseq[j].c && g_subseq[j].func)
		return (g_subseq[j].func(fd, buf, i));
	ft_dprintf(2, "\e[31m\\e%c(%d)\e[0m\n", key, key);
	sleep(2);
	return (0);
}
