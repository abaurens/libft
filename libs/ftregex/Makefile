# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 13:34:16 by abaurens          #+#    #+#              #
#    Updated: 2019/09/02 21:56:26 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
LINKER	:=	ar rc
LINKER	:=	gcc -r -nostdlib -o
NAME	:=	ftregex

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

include variables.mk
include rules.mk
CFLAGS	:=	-g $(CFLAGS) -ansi -pedantic

#	test part
FTIO	:=	$(call libpath,ftio)
LIBFT	:=	$(call libpath,ftlib)
FTMATH	:=	$(call libpath,ftmath)

test:	$(NAME) $(FTIO) $(LIBFT) $(FTMATH)
	@$(CC) -o test $(CFLAGS) main.c $(NAME) $(LIBFT) $(FTMATH) $(FTIO)

cleantest:
	@$(RM) test

retest:	clean cleantest test

.PHONY: cleantest retest
