/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftbool.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/25 22:27:07 by abaurens          #+#    #+#             */
/*   Updated: 2019/03/30 14:35:58 by abaurens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTBOOL_H
# define FTBOOL_H

# if !defined TRUE && !defined FALSE

typedef enum e_bool
{
	FALSE,
	TRUE
}			t_bool;

# else

# include <stdbool.h>

typedef bool t_bool;

# endif

#endif
