# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 16:08:06 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 02:54:40 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../variables.mk

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	ar rc
NAME	:=	ftlib.a

CFLAGS	:=	-I../includes -W -Wall -Wextra -ansi -Werror

GCC_STR	:=
CLN_STR	:=	<---------------------- Cleaning $(NAME)... ---------------------->
FCL_STR	:=	<--------------------- Fcleaning  $(NAME)... --------------------->
LNK_STR	:=	<---------------------- Linking $(NAME)... ---------------------->
DNE_STR	:=	<---------------------------- DONE ! ---------------------------->

# SOURCES

CORE	:=	cipher_core.c
CORE	:=	$(addprefix core/, $(CICORE))

SRC		:=	\
			ft_match.c				\
			ft_idxof.c				\
			ft_bzero.c				\
			ft_split.c				\
			ft_strequ.c				\
			ft_strlen.c				\
			ft_strmap.c				\
			ft_strnew.c				\
			ft_isbase.c				\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_memcpy.c				\
			ft_memdel.c				\
			ft_memset.c				\
			ft_numlen.c				\
			ft_strcat.c				\
			ft_strchr.c				\
			ft_strclr.c				\
			ft_strcmp.c				\
			ft_strcpy.c				\
			ft_strdel.c				\
			ft_strdup.c				\
			ft_strstr.c				\
			ft_strsub.c				\
			ft_strncat.c			\
			ft_isupper.c			\
			ft_strncmp.c			\
			ft_freturn.c			\
			ft_strnstr.c			\
			ft_strrchr.c			\
			ft_strmapi.c			\
			ft_strmcat.c			\
			ft_memmove.c			\
			ft_strncpy.c			\
			ft_strnequ.c			\
			ft_striter.c			\
			ft_strjoin.c			\
			ft_strlcat.c			\
			ft_strtrim.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_isdigit.c			\
			ft_islower.c			\
			ft_isprint.c			\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_memccpy.c			\
			ft_striteri.c			\
			ft_strsplit.c			\
			ft_contains.c			\
			ft_memalloc.c			\
			ft_strupcase.c			\
			ft_count_words.c		\
			ft_unsignedlen.c		\
			ft_unsignedlen_base.c

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

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
