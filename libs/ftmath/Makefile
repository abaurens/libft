# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/09/10 15:34:35 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#LINKER	:=	ar rc
LINKER	:=	gcc -r -nostdlib -o
NAME	:=	ftmath

# SOURCES

FLPM	:=	fp32math.c fp64math.c fp80math.c
FLPM	:=	$(addprefix fpmath/, $(FLPM))

VEC		:=	set.c op_v.c op_1.c op_3.c op_len.c

VECI	:=	$(addprefix veci/,$(VEC))
VECF	:=	$(addprefix vecf/,$(VEC))
VECD	:=	$(addprefix vecd/,$(VEC))
VECL	:=	$(addprefix vecl/,$(VEC))
VEC	:=	$(VECI) $(VECF) $(VECD) $(VECL)

VECTORS	:=	$(VEC)
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
