/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gnl.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 02:16:52 by abaurens          #+#    #+#             */
/*   Updated: 2019/07/04 02:22:11 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GNL_H
# define GNL_H

# ifndef GNL_BUF
#  define GNL_BUF	1024
# endif

typedef struct s_gnl	t_gnl;

struct		s_gnl
{
	int		fd;
	char	*sv;
	t_gnl	*next;
};

#endif
