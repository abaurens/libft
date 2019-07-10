/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_postfix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 21:39:00 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/10 21:44:11 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ftregex.h"
#include "ftlib.h"

static char	get_pair(char c)
{
	register char	*t;

	if ((t = ft_strchr(RE_SCP_OPN, c)) != NULL)
		return (RE_SCP_CLS[t - RE_SCP_OPN]);
	else if ((t = ft_strchr(RE_SCP_CLS, c)) != NULL)
		return (RE_SCP_OPN[t - RE_SCP_CLS]);
	return (0);
}

static void	handle_operators(t_toklst *new, t_toklst *stack, t_token *cur)
{
	if (stack->size && stack->edges[HEAD]->type != SCOPE_OPN
		&& stack->edges[HEAD]->priority >= cur->priority)
		insert(new, pop_tok(stack, stack->edges[HEAD]), TAIL);
	insert(stack, cur, HEAD);
}

static void	handle_scopes(t_toklst *new, t_toklst *stack, t_token *cur)
{
	while (stack->size && stack->edges[HEAD]->type != SCOPE_OPN
		&& get_pair(cur->c) != stack->edges[HEAD]->c)
		insert(new, pop_tok(stack, stack->edges[HEAD]), TAIL);
	free(pop_tok(stack, stack->edges[HEAD]));
	free(cur);
}

void		to_postfix(t_toklst *lst)
{
	t_toklst	new;
	t_toklst	stack;
	t_token		*cur;

	cur = lst->edges[HEAD];
	ft_bzero(&new, sizeof(t_toklst));
	ft_bzero(&stack, sizeof(t_toklst));
	while (lst->size)
	{
		cur = pop_tok(lst, lst->edges[HEAD]);
		if (is_operand(cur) || cur->type == QUANT)
			insert(&new, cur, TAIL);
		else if (cur->type == SCOPE_OPN)
			insert(&stack, cur, HEAD);
		else if (cur->type == OP)
			handle_operators(&new, &stack, cur);
		else if (cur->type == SCOPE_CLS)
			handle_scopes(&new, &stack, cur);
	}
	while (stack.size)
		insert(&new, pop_tok(&stack, stack.edges[HEAD]), TAIL);
	*lst = new;
}
