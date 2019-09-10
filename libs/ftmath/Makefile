# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/09/10 11:39:48 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#LINKER	:=	ar rc
LINKER	:=	gcc -r -nostdlib -o
NAME	:=	ftmath

# SOURCES

FLPM	:=	fp32math.c fp64math.c fp80math.c
FLPM	:=	$(addprefix fpmath/, $(FLPM))

VEC		:=	add.c new.c sub.c norm.c

VEC3	:=	$(addprefix vec3/,$(VEC))
VEC3F	:=	$(addprefix vec3f/,$(VEC))
VEC3L	:=	$(addprefix vec3l/,$(VEC))
VEC3I	:=	$(addprefix vec3i/,$(VEC))

VECTORS	:=	$(VEC3I)
VECTORS	:=	$(addprefix vectors/,$(VECTORS))

SRC		:=	\
		$(FLPM)		$(VECTORS)	\
		ft_min.c	ft_max.c	\
		ft_abs.c	ft_nan.c	\
		ft_rad.c	ft_pow.c	\
		ft_sqrt.c	cordic.c	\
		ft_log.c	ft_logl.c	\
		ft_expl.c	ft_exp.c	\
		ft_expf.c

include variables.mk
include rules.mk
#override CFLAGS	+=	-ansi -pedantic
