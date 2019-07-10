/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:56:49 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/10 21:34:01 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_DISABLE_WARNINGS

#include <stdlib.h>
#include "ftregex.h"
#include "ftlib.h"
#include "ftio.h"

void		print_tokenlist(t_toklst *lst, char sep)
{
	t_token	*cur;
	char	t[2];

	t[1] = 0;
	cur = lst->edges[HEAD];
	while (cur)
	{
		*t = cur->c;
		if (sep)
			ft_printf("%c[%dm'%r'%c[0m%s", 27, cur->type + 31, cur->s, 27,
				cur->lnks[NEXT] ? ", " : "\n");
		else
			ft_printf("%c[%dm%r%c[0m%s", 27, cur->type + 31, t, 27,
				cur->lnks[NEXT] ? "" : "\n");
		cur = cur->lnks[NEXT];
	}
}

static char	get_pair(char c)
{
	register char	*t;

	if ((t = ft_strchr(RE_SCP_OPN, c)) != NULL)
		return (RE_SCP_CLS[t - RE_SCP_OPN]);
	else if ((t = ft_strchr(RE_SCP_CLS, c)) != NULL)
		return (RE_SCP_OPN[t - RE_SCP_CLS]);
	return (0);
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
		{
			if (!stack.size || stack.edges[HEAD]->type == SCOPE_OPN
				|| stack.edges[HEAD]->priority < cur->priority)
				insert(&stack, cur, HEAD);
			else
			{
				insert(&new, pop_tok(&stack, stack.edges[HEAD]), TAIL);
				insert(&stack, cur, HEAD);
			}
		}
		else if (cur->type == SCOPE_CLS)
		{
			while (stack.size && stack.edges[HEAD]->type != SCOPE_OPN
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

void		generate_automata(t_toklst *lst)
{
	(void)lst;
}

t_regex		*ft_regex(const char *str)
{
	t_toklst	tokens;

	ft_printf("string is ------> '%c[32m%s%c[0m'\n", 27, str, 27);
	if (tokenize(&tokens, str, 0))
	{
		clear_toklst(&tokens);
		return (NULL);
	}
	ft_printf("came as ---------> ");
	print_tokenlist(&tokens, 0);
	to_postfix(&tokens);
	ft_printf("postfix ---------> ");
	print_tokenlist(&tokens, 0);
	clear_toklst(&tokens);
	/*generate_automata(&tokens);*/
	return (NULL);
}
