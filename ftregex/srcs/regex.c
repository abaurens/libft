/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:56:49 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/10 21:39:22 by abaurens         ###   ########.fr       */
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
