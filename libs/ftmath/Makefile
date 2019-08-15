# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/08/15 10:11:47 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
LINKER	:=	ar rc
LINKER	:=	gcc -r -nostdlib -o
NAME	:=	ftmath.ao

# SOURCES

SRC	:=	\
		ft_min.c	ft_max.c	\
		ft_abs.c	ft_nan.c	\
		ft_rad.c

include variables.mk
include rules.mk
CFLAGS	:=	$(CFLAGS) -ansi -pedantic
