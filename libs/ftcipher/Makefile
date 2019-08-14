# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/08/15 01:03:38 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
LINKER	:=	ar rc
LINKER	:=	gcc -r -nostdlib -o
NAME	:=	ftcipher.ao

# SOURCES

CORE	:=	cipher_core.c
CORE	:=	$(addprefix core/, $(CORE))

SRC		:=	$(CORE)	\
			ft_cipher.c

include ../../variables.mk
include ../../rules.mk
CFLAGS	:=	$(CFLAGS) -ansi -pedantic
