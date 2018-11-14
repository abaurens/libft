# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 16:08:06 by abaurens          #+#    #+#              #
#    Updated: 2018/11/14 19:58:10 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=		libft.a

SRC_DIR	=		srcs
SRC		=		ft_strmapi.c		\
				ft_strsub.c			\
				ft_strnequ.c		\
				ft_striteri.c		\
				ft_strjoin.c		\
				ft_strmap.c			\
				ft_strequ.c			\
				ft_striter.c		\
				ft_strsplit.c		\
				ft_strtrim.c		\
				ft_memalloc.c		\
				ft_strnew.c			\
				ft_memdel.c			\
				ft_strdel.c			\
				ft_strclr.c			\
				ft_itoa.c			\
				ft_putnbr_base.c	\
				ft_putnbr_base_fd.c	\
				ft_isbase.c			\
				ft_putnbr.c			\
				ft_putstr.c			\
				ft_putchar.c		\
				ft_putendl.c		\
				ft_putnbr_fd.c		\
				ft_putstr_fd.c		\
				ft_putchar_fd.c		\
				ft_putendl_fd.c		\
				ft_idxof.c			\
				ft_contains.c		\
				ft_atol_base.c		\
				ft_isupper.c		\
				ft_islower.c		\
				ft_memset.c			\
				ft_bzero.c			\
				ft_memcpy.c			\
				ft_memccpy.c		\
				ft_memmove.c		\
				ft_memchr.c			\
				ft_memcmp.c			\
				ft_strlen.c			\
				ft_strdup.c			\
				ft_strcpy.c			\
				ft_strncpy.c		\
				ft_strcat.c			\
				ft_strncat.c		\
				ft_strlcat.c		\
				ft_strchr.c			\
				ft_strrchr.c		\
				ft_strstr.c			\
				ft_strnstr.c		\
				ft_strcmp.c			\
				ft_strncmp.c		\
				ft_atoi.c			\
				ft_isalpha.c		\
				ft_isdigit.c		\
				ft_isalnum.c		\
				ft_isascii.c		\
				ft_isprint.c		\
				ft_toupper.c		\
				ft_tolower.c		\
				ft_lstnew.c			\
				ft_lstdelone.c		\
				ft_lstdel.c			\
				ft_lstadd.c			\
				ft_lstiter.c		\
				ft_lstmap.c

OBJ_DIR	=		objs
SRCS	=		$(addprefix $(SRC_DIR)/,$(SRC))
OBJ		=		$(addprefix $(OBJ_DIR)/,$(SRC:.c=.o))

RM		=		rm -rf

CC		=		gcc

CP		=		cp

LINKER	=		ar rc

INCLUDE	=		-I./includes

CFLAGS	=		$(INCLUDE) -W -Wall -Wextra -Werror -ansi

$(NAME):	$(OBJ)
	$(LINKER) $(NAME) $(OBJ)
	ranlib $(NAME)

#rule for .o files creation from .c files
#	($@ is the current target)
#	($< is the first dependency)
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	@printf "\e[32;10m"
	$(CC) $(CFLAGS) -o $@ -c $<
	@printf "\e[32;0m"

all: $(NAME)

clean:
	$(RM) $(OBJ_DIR)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
