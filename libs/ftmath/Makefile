# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/09/02 21:44:46 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
LINKER	:=	ar rc
LINKER	:=	gcc -r -nostdlib -o
NAME	:=	ftmath

# SOURCES

FLPM	:=	fp32math.c fp64math.c fp80math.c
FLPM	:=	$(addprefix fpmath/, $(FLPM))



SRC		:=	\
		$(FLPM)		\
		ft_min.c	ft_max.c	\
		ft_abs.c	ft_nan.c	\
		ft_rad.c	ft_pow.c	\
		ft_sqrt.c	cordic.c	\
		ft_log.c	ft_logl.c	\
		ft_expl.c	ft_exp.c	\
		ft_expf.c

include variables.mk
include rules.mk
CFLAGS	:=	$(CFLAGS) -ansi -pedantic
