/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nfa.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 16:51:37 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/04 20:00:05 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NFA_H
# define NFA_H

# include <string.h>

/*
**	internal constants and macros
*/
# define NFA_MAX_SIZE	2048

/*
**	structures
*/
typedef struct s_nfa_st	t_nfa_st;
typedef struct s_nfa	t_nfa;

typedef enum	e_nfa_type
{
	SYMBOL,
	EPSYLON,
	UNKNOWN
}				t_nfa_type;

struct			s_nfa_st
{
	t_nfa_type	type;
	char		is_end;
	char		symbol;
	t_nfa_st	*transitions[2];
	size_t		transition_count;
};

struct			s_nfa
{
	t_nfa_st	*end;
	t_nfa_st	*start;
};

/*
**	nfa/states.c
*/
t_nfa_st	*create_state(char is_end);
void		add_epsilon(t_nfa_st *from, t_nfa_st *to);
void		add_symbol(t_nfa_st *from, t_nfa_st *to, char symbol);

/*
**	nfa/nfa.c
*/
t_nfa	*new_nfa(void);
t_nfa	*from_epsilon(void);
t_nfa	*from_symbol(char symbol);

/*
**	nfa/elementary_op.c
*/

t_nfa	*snfa_concat(t_nfa *first, t_nfa *second);
t_nfa	*nfa_union(t_nfa *first, t_nfa *second);
t_nfa	*nfa_closure(t_nfa *nfa);
t_nfa	*nfa_once(t_nfa *nfa);

#endif
