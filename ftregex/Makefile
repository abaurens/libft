# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 13:34:16 by abaurens          #+#    #+#              #
#    Updated: 2019/07/10 20:49:36 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	ar rc
NAME	:=	ftregex.a
LIBFT	:=	../ftlib/ftlib.a

NFA		:=	\

NFA		:=	$(addprefix ft_nfa/,$(NFA))

SRC		:=	$(NFA)		\
			regex.c		\
			token.c		\
			toklst.c	\
			tokenize.c

include ../variables.mk

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

CFLAGS	:=	-g -I../includes -W -Wall -Wextra -Werror -ansi -pedantic

$(NAME):	$(OBJ)
	@$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

$(LIBFT):
	@make -C $(dir $(LIBFT))

all:	$(NAME)

test:	$(NAME) $(LIBFT)
	@$(CC) -o test $(CFLAGS) main.c $(NAME) $(LIBFT)

cleantest:
	@$(RM) test

retest:	clean cleantest test

clean:
	$(call pinfo,Cleaning $(NAME))
	@$(RM) $(OBJD)
	@make -C $(dir $(LIBFT)) clean

fclean:
	$(call pinfo,Fcleaning $(NAME))
	@$(RM) $(OBJD)
	@$(RM) $(NAME)
	@make -C $(dir $(LIBFT)) fclean

re:		fclean all

.PHONY: all clean fclean re cleantest retest
