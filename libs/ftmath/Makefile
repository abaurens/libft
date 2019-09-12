# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/09/12 17:29:52 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LINKER	:=	gcc -r -nostdlib -o
NAME	:=	ftmath

# SOURCES

FLPM	:=	fp32math.c fp64math.c fp80math.c
FLPM	:=	$(addprefix fpmath/, $(FLPM))

VEC	:=	op_v.c op_x.c op_1.c op_len.c

VECI	:=	$(addprefix veci/,$(VEC))
VECF	:=	$(addprefix vecf/,$(VEC))
VECD	:=	$(addprefix vecd/,$(VEC))
VECL	:=	$(addprefix vecl/,$(VEC))

VEC		:=	set.c $(VEC) $(VECI) $(VECF) $(VECD) $(VECL)

VEC2	:=	$(addprefix vec2/,$(VEC))
VEC3	:=	$(addprefix vec3/,$(VEC))

VECTORS	:=	$(VEC3) $(VEC2)
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
