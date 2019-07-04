# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 15:12:07 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	ar rc
NAME	:=	ftmath.a

CFLAGS	:=	-I../includes -W -Wall -Wextra -ansi -pedantic -Werror

# SOURCES

SRC	:=	\
		ft_min.c	ft_max.c	\
		ft_abs.c	ft_nan.c	\
		ft_rad.c

include ../variables.mk

OBJ	:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC	:=	$(addprefix $(SRCD)/,$(SRC))


# RULES

$(NAME):	$(OBJ)
	@$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

clean:
	@#printf "$(GRN)$(CLN_STR)$(NRM)\n"
	$(call pinfo,Cleaning $(NAME))
	@$(RM) $(OBJD)

fclean:
	@#printf "$(GRN)$(FCL_STR)$(NRM)\n"
	$(call pinfo,Fcleaning $(NAME))
	@$(RM) $(OBJD)
	@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
