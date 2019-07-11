/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expention.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 13:59:10 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/11 15:19:46 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftregex.h"
#include "ftlib.h"
#include "ftio.h"

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
		}
		cur = cur->next;
	}
}
