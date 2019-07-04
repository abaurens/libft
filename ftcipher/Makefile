# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 12:54:21 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../variables.mk

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	ar rc
NAME	:=	ftcipher.a

CFLAGS	:=	-I../includes -W -Wall -Wextra -ansi -pedantic -Werror

GCC_STR	:=
CLN_STR	:=	<-------------------- Cleaning  $(NAME)... -------------------->
FCL_STR	:=	<-------------------- Fcleaning $(NAME)... -------------------->
LNK_STR	:=	<--------------------- Linking $(NAME)... --------------------->
DNE_STR	:=	<--------------------------- DONE ! --------------------------->

# SOURCES

CORE	:=	cipher_core.c
CORE	:=	$(addprefix core/, $(CICORE))

SRC		:=	$(CICORE)	\
			ft_cipher.c
OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

FCNT	:=	$(words $(SRC))

# RULES

$(NAME):	$(OBJ)
	@$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

clean:
	@printf "$(GRN)$(CLN_STR)$(NRM)\n"
	@$(RM) $(OBJD)

fclean:
	@printf "$(GRN)$(FCL_STR)$(NRM)\n"
	@$(RM) $(OBJD)
	@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
