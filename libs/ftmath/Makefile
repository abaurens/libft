# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/08/23 06:05:29 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
LINKER	:=	ar rc
LINKER	:=	gcc -r -nostdlib -o
NAME	:=	ftmath.ao

# SOURCES

FLPM	:=	fpmath.c
FLPM	:=	$(addprefix fpmath/, $(FLPM))



SRC		:=	\
		$(FLPM)		\
		ft_min.c	ft_max.c	\
		ft_abs.c	ft_nan.c	\
		ft_rad.c	ft_pow.c	\
		ft_sqrt.c	cordic.c	\
		ft_log.c	ft_logl.c	\
		ft_expl.c	ft_exp.c

include variables.mk
include rules.mk
CFLAGS	:=	$(CFLAGS) -ansi -pedantic
