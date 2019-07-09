/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:56:49 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/09 22:25:54 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "ftregex.h"

void		print_tokenlist(t_toklst *lst, char sep)
{
	t_token	*cur;

	cur = lst->edges[HEAD];
	while (cur)
	{
		if (sep)
			printf("%c[%dm'%s'%c[0m%s", 27, cur->type + 31, cur->s, 27,
				cur->lnks[NEXT] ? ", " : "\n");
		else
			printf("%c[%dm%c%c[0m%s", 27, cur->type + 31, cur->c, 27,
				cur->lnks[NEXT] ? "" : "\n");
		cur = cur->lnks[NEXT];
	}
}

static char	get_pair(char c)
{
	register char	*t;

	if ((t = strchr(RE_SCP_OPN, c)) != NULL)
		return (RE_SCP_CLS[t - RE_SCP_OPN]);
	else if ((t = strchr(RE_SCP_CLS, c)) != NULL)
		return (RE_SCP_OPN[t - RE_SCP_CLS]);
	return (0);
}

void		to_postfix(t_toklst *lst)
{
	t_toklst	new;
	t_toklst	stack;
	t_token		*cur;

	cur = lst->edges[HEAD];
	bzero(&new, sizeof(t_toklst));
	bzero(&stack, sizeof(t_toklst));
	while (lst->size)
	{
		cur = pop_tok(lst, lst->edges[HEAD]);
		if (cur->type == CHAR || cur->type == SPECIAL || cur->type == QUANTIFIER)
			insert(&new, cur, TAIL);
		else if (cur->type == SCOPE_OPEN)
			insert(&stack, cur, HEAD);
		else if (cur->type == OP)
		{
			if (!stack.size || stack.edges[HEAD]->type == SCOPE_OPEN
				|| stack.edges[HEAD]->priority < cur->priority)
				insert(&stack, cur, HEAD);
			else
			{
				insert(&new, pop_tok(&stack, stack.edges[HEAD]), TAIL);
				insert(&stack, cur, HEAD);
			}
		}
		else if (cur->type == SCOPE_CLOSE)
		{
			while (stack.size && stack.edges[HEAD]->type != SCOPE_OPEN
				&& get_pair(cur->c) != stack.edges[HEAD]->c)
				insert(&new, pop_tok(&stack, stack.edges[HEAD]), TAIL);
			free(pop_tok(&stack, stack.edges[HEAD]));
			free(cur);
		}
	}
	while (stack.size)
		insert(&new, pop_tok(&stack, stack.edges[HEAD]), TAIL);
	*lst = new;
}

void		explicit_ops(t_toklst *lst)
{
	t_toklst	new;
	t_token		*cur;
	t_token		*concat;
	char		mode;

	mode = 0;
	bzero(&new, sizeof(t_toklst));
	while (lst->size)
	{
		cur = pop_tok(lst, lst->edges[HEAD]);
		if (new.size
			&& (new.edges[TAIL]->type == CHAR
				|| new.edges[TAIL]->type == SPECIAL
				|| new.edges[TAIL]->type == QUANTIFIER
				|| new.edges[TAIL]->type == SCOPE_CLOSE)
			&& (cur->type != OP && cur->type != QUANTIFIER
				&& cur->type != SCOPE_CLOSE))
		{
			if (!(concat = new_token(mode ? '|' : '+', OP)))
				return ;
			insert(&new, concat, TAIL);
		}
		if (cur->type == SCOPE_OPEN && cur->c == '[')
			mode = 1;
		if (cur->type == SCOPE_CLOSE && cur->c == ']')
			mode = 0;
		insert(&new, cur, TAIL);
	}
	*lst = new;
}

void		generate_automata(t_toklst *lst)
{
	(void)lst;
}

t_regex		*ft_regex(const char *str)
{
	t_toklst	tokens;

	if (tokenize(&tokens, str, 0))
		return (NULL);
	printf("came as ---------> ");
	print_tokenlist(&tokens, 0);
	printf("explicit concat -> ");
	explicit_ops(&tokens);
	print_tokenlist(&tokens, 0);
	to_postfix(&tokens);
	printf("postfix ---------> ");
	print_tokenlist(&tokens, 0);
	generate_automata(&tokens);
	return (NULL);
}
