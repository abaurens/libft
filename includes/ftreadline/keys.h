/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keys.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 16:55:44 by abaurens          #+#    #+#             */
/*   Updated: 2019/10/02 19:19:40 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KEYS_H
# define KEYS_H

char				key_up(void);
char				key_end(void);
char				key_down(void);
char				key_left(void);
char				key_home(void);
char				key_right(void);

typedef char	(*t_key_func)(void);

static const struct	s_func_assignment
{
	char			*keycode;
	t_key_func		func;
}					g_tb[] = {
	{"[A", &key_up},
	{"[B", &key_down},
	{"[C", &key_right},
	{"[D", &key_left},
	{"OA", &key_up},
	{"OB", &key_down},
	{"OC", &key_right},
	{"OD", &key_left},
	{"OH", &key_home},
	{"OF", &key_end},
	{0x0, 0x0},
};

/*
**	the above is wrong because of the terminal i use in atom. gonna test each
**	keys of the keyboard and report them in this comment for both application
**	and classical mode
**
**	up		: \e[A \eOA
**	down	: \e[B \eOB
**	left	: \e[D \eOD
**	right	: \e[C \eOC
**	home	: \e[H \eOH
**	end		: \e[F \eOF
*/

#endif
