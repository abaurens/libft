# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 00:51:05 by abaurens          #+#    #+#              #
#    Updated: 2019/08/19 16:02:40 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	TODO
#	- vérifier la norme (le PDF) et voir si de courtes macro-fonctions
#		pourraient passer, ce qui permettrait de ne pas rendre accessible des
#		des fonctions internes

include	variables.mk

CC			:=	make --no-print-dir -I$(PWD) -C
LINKER		:=	ar rc
RM			:=	rm -rf
CP			:=	cp -rf
NAME		:=	libft.a

LIBS_D	:=	libs
LIBS	:=	\
			ftio.ao		\
			ftlib.ao		\
			ftcipher.ao	\
			ftmath.ao	\
			ftregex.ao

LIBS	:=	$(shell echo $(LIBS)|tr ' ' '\n'|awk '{print length,$$0}'|sort -n|\
			cut -d' ' -f2)
LIBS	:=	$(addprefix $(LIBS_D)/, $(LIBS))

MAX_LEN	:=	$(shell echo $(basename $(notdir $(lastword $(LIBS))))|\
			awk '{print length}')

$(NAME):	$(LIBS)
	@$(LINKER) $(NAME) $(LIBS)
	@ranlib $(NAME)
	@$(call pinfo,DONE!)

all:	$(NAME)

clean:
	@$(RM) $(OBJD)
	@$(RM) $(LIBS)
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) clean;)

fclean:
	@$(RM) $(NAME)
	@$(RM) $(LIBS)
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) fclean;)

re:		fclean all

test:	$(NAME) main.c
	gcc -o test main.c -I./includes -L. -lft #-ansi -pedantic

.PHONY: all clean fclean re
