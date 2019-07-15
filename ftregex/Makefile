# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 13:34:16 by abaurens          #+#    #+#              #
#    Updated: 2019/07/15 21:00:38 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	ar rc
NAME	:=	ftregex.a
LIBFT	:=	../ftlib/ftlib.a
FTMATH	:=	../ftmath/ftmath.a

NFA		:=	\
			nfa.c		\
			states.c	\
			nfa_stack.c	\
			elementary_op.c
NFA		:=	$(addprefix nfa/,$(NFA))

SRC		:=	$(NFA)			\
			regex.c			\
			token.c			\
			toklst.c		\
			tokenize.c		\
			to_postfix.c	\
			to_automaton.c

include ../variables.mk

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

CFLAGS	:=	-g -I../includes -W -Wall -Wextra -ansi -pedantic #-Werror

$(NAME):	$(OBJ)
	@$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

$(LIBFT):
	@make -C $(dir $(LIBFT))

$(FTMATH):
	@make -C $(dir $(FTMATH))

all:	$(NAME)

test:	$(NAME) $(LIBFT) $(FTMATH)
	@$(CC) -o test $(CFLAGS) main.c $(NAME) $(LIBFT) $(FTMATH)

cleantest:
	@$(RM) test

retest:	clean cleantest test

clean:
	$(call pinfo,Cleaning $(NAME))
	@$(RM) $(OBJD)

fclean:
	$(call pinfo,Fcleaning $(NAME))
	@$(RM) $(OBJD)
	@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re cleantest retest
