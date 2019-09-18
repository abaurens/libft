# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/16 11:40:47 by abaurens          #+#    #+#              #
#    Updated: 2019/09/16 15:25:51 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	gcc -o
NAME	:=	../test

#ifndef DISABLE_TERMCAPS
#override LDFLAGS +=	-lncurses
#endif

#override LDFLAGS +=	-lreadline

SRC		:=	\
			main.c			\
			test_vectors.c	\
			test_readline.c

OBJ		:=	$(SRC:.c=.o)
DEP		:=	$(OBJ:.o=.d)

CFLAGS	:=	-g -I../includes -MMD -MP -W -Wall -Wextra -Werror
LDFLAGS	:=	-L../ -lft

.DEFAULT:	$(NAME)
$(NAME):	$(LIB) $(OBJ)
	$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

-include $(DEP)

all:	$(NAME)

clean:
	$(RM) $(OBJ)
	$(RM) $(DEP)

fclean:
	$(RM) $(OBJ)
	$(RM) $(DEP)
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
