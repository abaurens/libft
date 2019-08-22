# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/08/20 15:21:34 by abaurens          #+#    #+#              #
#    Updated: 2019/08/22 17:08:27 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			:=	gcc
RM			:=	rm -rf
CP			:=	cp -rf
LINKER		:=	gcc -o
NAME		:=	ft_ln

SRCD		:=	srcs
OBJD		:=	objs

SRC			:=	main.c s_logl.c s_expl.c

OBJ			:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC			:=	$(addprefix $(SRCD)/,$(SRC))

CFLAGS		:=	-I./includes -W -Wall -Wextra
LDFLAGS		:=	-lm

$(NAME):	$(OBJ)
	$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

$(OBJD)/%.o:	$(SRCD)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJD)

fclean:
	$(RM) $(OBJD)
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
