# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 13:34:16 by abaurens          #+#    #+#              #
#    Updated: 2019/07/09 20:47:51 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	ar rc
NAME	:=	ftregex.a

NFA		:=	\

NFA		:=	$(addprefix ft_nfa/,$(NFA))

SRC		:=	$(NFA)	\
			regex.c	\
			token.c	\
			toklst.c

include ../variables.mk

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

CFLAGS	:=	-I../includes -W -Wall -Wextra -ansi -pedantic -Werror

$(NAME):	$(OBJ)
	@$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

test:	$(NAME)
	@$(CC) -o test $(CFLAGS) main.c $(NAME)

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
