# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 00:51:05 by abaurens          #+#    #+#              #
#    Updated: 2019/09/02 19:40:39 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	TODO
#	- vérifier la norme (le PDF) et voir si de courtes macro-fonctions
#		pourraient passer, ce qui permettrait de ne pas rendre accessible des
#		des fonctions internes

include	variables.mk

override LDFLAGS :=	$(LDFLAGS) -L. -lft -g

ifdef ENABLE_TERMCAPS
ifeq ($(ENABLE_TERMCAPS), 1)
override LDFLAGS :=	$(LDFLAGS) -lncurses
endif
endif

override LDFLAGS :=	$(LDFLAGS) -lreadline

CC		:=	make --no-print-dir -I$(PWD) -C
NAME	:=	libft.a
LINKER	:=	ar rc

LIBS_D	:=	libs
LIBS	:=	\
			ftio.ao		\
			ftlib.ao	\
			ftcipher.ao	\
			ftmath.ao	\
			ftregex.ao

LIBS	:=	$(shell echo $(LIBS)|tr ' ' '\n'|awk '{print length,$$0}'|sort -n|\
			cut -d' ' -f2)
LIBS	:=	$(addprefix $(LIBS_D)/, $(LIBS))

MAX_LEN	:=	$(shell echo $(basename $(notdir $(lastword $(LIBS))))|\
			awk '{print length}')


VAR_	:=	$(strip $(foreach mk,	\
	$(LIBS),	\
	$(shell make -I$(PWD) -qC $(basename $(mk))/ || echo "$(RM) $(mk)")))

$(NAME):	$(LIBS)
	@printf "var: '$(VAR_)'\n"
	@$(LINKER) $(NAME) $(LIBS)
	@ranlib $(NAME)
	@$(call pinfo,DONE!)
	@printf "$(SHOW)"

.PHONY: $(NAME)

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
	gcc -o test main.c $(strip $(CFLAGS)) $(strip $(LDFLAGS))

.PHONY:		all clean fclean re
.DEFAULT:	$(NAME)
