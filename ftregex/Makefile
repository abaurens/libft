# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 13:34:16 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 14:12:42 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../variables.mk

CC			:=	gcc
RM			:=	rm -rf
CP			:=	cp -rf
LINKER		:=	ar rc
NAME		:=	ftregex.a

SRC			:=

OBJ			:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC			:=	$(addprefix $(SRCD)/,$(SRC))

CFLAGS		:=	-I./includes -W -Wall -Wextra -Werror

$(NAME):	$(OBJ)
	@touch $(NAME)
	@printf $(LINE) $(SUBID) $(TOTAL_SIZE) $(basename $(NAME)) 100 "" ""
	@#$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

$(OBJD)/%.o:	$(SRCD)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(call pinfo,Cleaning $(NAME))
	@$(RM) $(OBJD)

fclean:
	$(call pinfo,Fcleaning $(NAME))
	@$(RM) $(OBJD)
	@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
