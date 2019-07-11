/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   regex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 14:56:49 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/11 15:22:15 by abaurens         ###   ########.fr       */
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
	cur = lst->head;
	while (cur)
	{
		*t = cur->c;
		if (sep)
			ft_printf("%c[%dm'%r'%c[0m%s", 27, cur->type + 31, cur->s, 27,
				cur->next ? ", " : "\n");
		else
			ft_printf("%c[%dm%r%c[0m%s", 27, cur->type + 31, t, 27,
				cur->next ? "" : "\n");
		cur = cur->next;
	}
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
	/*expend_shortcut(&tokens);*/
	ft_printf("expanded as -----> ");
	print_tokenlist(&tokens, 0);
	to_postfix(&tokens);
	ft_printf("postfix ---------> ");
	print_tokenlist(&tokens, 0);
	clear_toklst(&tokens);
	return (NULL);
}
