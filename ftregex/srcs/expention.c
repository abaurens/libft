/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expention.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:59:10 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/11 22:13:11 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftregex.h"
#include "ftlib.h"
#include "ftio.h"

chr		expand_word(t_toklst *lst, t_token *cur, char in_or, char neg)
{
	int	i;

	i = 0;
	const char	*tks = (in_or ? "a-zA-Z0-9_" : "[a-zA-Z0-9_]");

}

chr		expand_digit(t_toklst *lst, t_token *cur, char in_or, char neg)
{

}

chr		expand_whitespace(t_toklst *lst, t_token *cur, char in_or, char neg)
{

}

void		expend_shortcut(t_toklst *lst)
{
	t_toklst	new;
	t_token		*cur;

	cur = lst->head;
	ft_bzero(&new, sizeof(t_toklst));
	while (cur)
	{
		if (cur->type == SHORT)
		{
			ft_printf("found shortcut: '%c'\n", cur->c);
			switch (cur->c)
			{
				case 's':
					ft_printf("  whitespaces\n");
					break ;
				case 'S':
					ft_printf("  non-whitespaces\n");
					break ;
				case 'd':
					ft_printf("  digit\n");
					break ;
				case 'D':
					ft_printf("  non-digit\n");
					break ;
				case 'w':
					ft_printf("  word\n");
					break ;
				case 'W':
					ft_printf("  non-word\n");
					break ;
			}
		}
		cur = cur->next;
	}
}
