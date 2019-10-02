/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_readline.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/27 21:39:12 by abaurens          #+#    #+#             */
/*   Updated: 2019/10/02 18:24:51 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define FT_DISABLE_WARNINGS

#include "ftreadline/ft_inputrc.h"
#include "ftio.h"

void	print_input_tree(t_tree *root, int j)
{
	size_t	i;

	i = 0;
	ft_printf("%*s%#R :\n%*s", j, "", root->c, j, "");
	while (i < root->ncnt)
	{
		ft_printf("'%#R'%s", root->nexts[i]->c, i + 1 < root->ncnt ? ", " : "");
		++i;
	}
	if (i)
		ft_printf("\n");
	i = 0;
	while (i < root->ncnt)
		print_input_tree(root->nexts[i++], j + 4);
	if (root->f)
	{
		ft_printf("    ");
		root->f();
	}
}

char	*ft_readline(const char *prompt)
{
	t_tree	*tree;

	(void)prompt;
	tree = get_input_tree();
	print_input_tree(tree, 0);
	return (0);
}
