# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 13:34:16 by abaurens          #+#    #+#              #
#    Updated: 2019/08/15 01:03:56 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
LINKER	:=	ar rc
LINKER	:=	gcc -r -nostdlib -o
NAME	:=	ftregex.ao
FTIO	:=	../ftio/ftio.ao
LIBFT	:=	../ftlib/ftlib.ao
FTMATH	:=	../ftmath/ftmath.ao

OPER	:=	\
			nfa_union.c	\
			nfa_concat.c
OPER	:=	$(addprefix operations/,$(OPER))

QUANT	:=	\
			nfa_once.c	\
			nfa_closure.c
QUANT	:=	$(addprefix quantifiers/,$(QUANT))

NFA		:=	\
			$(OPER)		\
			$(QUANT)	\
			nfa.c		\
			states.c	\
			nfa_stack.c
NFA		:=	$(addprefix nfa/,$(NFA))

SRC		:=	$(NFA)			\
			regex.c			\
			token.c			\
			toklst.c		\
			tokenize.c		\
			to_postfix.c	\
			to_automaton.c

include ../../variables.mk
include ../../rules.mk
CFLAGS	:=	-g $(CFLAGS) -ansi -pedantic

test:	$(NAME) $(FTIO) $(LIBFT) $(FTMATH)
	@$(CC) -o test $(CFLAGS) main.c $(NAME) $(LIBFT) $(FTMATH) $(FTIO)

cleantest:
	@$(RM) test

retest:	clean cleantest test

.PHONY: cleantest retest
