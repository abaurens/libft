/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:56:49 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/09 20:02:20 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ftregex.h"

void		print_tokenlist(t_toklst *lst)
{
	t_token	*cur;

	cur = lst->edges[HEAD];
	while (cur)
	{
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
		if (cur->type == CHAR || cur->type == SPECIAL)
			insert(&new, cur, TAIL);
		else if (cur->type == SCOPE_OPEN)
			insert(&stack, cur, HEAD);
		else if (cur->type == OP)
		{
			if (!stack.size || stack.edges[HEAD]->type == SCOPE_OPEN)
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

t_regex		*ft_regex(const char *str)
{
	t_toklst	tokens;

	if (tokenize(&tokens, str, 0))
		return (NULL);
	printf("came as : ");
	print_tokenlist(&tokens);
	printf("postfix : ");
	to_postfix(&tokens);
	print_tokenlist(&tokens);
	return (NULL);
}
