# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 00:51:05 by abaurens          #+#    #+#              #
#    Updated: 2019/08/07 18:11:06 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	TODO
#	- vérifier la norme (le PDF) et voir si de courtes macro-fonctions
#		pourraient passer, ce qui permettrait de ne pas rendre accessible des
#		des fonctions internes

#include variables.mk

CC			:=	make --no-print-dir -C
LINKER		:=	libtool -static -o
RM			:=	rm -rf
CP			:=	cp -rf
NAME		:=	libft.a

#CMPT	:=	0
LIBS_D	:=	libs
LIBS	:=	\
			ftio.a		\
			ftlib.a		\
			ftcipher.a	\
			ftmath.a	\
			ftregex.a

include	variables.mk

LIBS	:=	$(shell echo $(LIBS)|tr ' ' '\n'|awk '{print length,$$0}'|sort -n|\
			cut -d' ' -f2)
LIBS	:=	$(addprefix $(LIBS_D)/, $(LIBS))

CFLAGS	:=	-I./includes -W -Wall -Wextra -Werror

MAX_LEN	:=	$(shell echo $(basename $(notdir $(lastword $(LIBS))))|\
			awk '{print length}')

#define vinfo
#	@$(eval LEN = $(shell printf '$(1)'|awk '{print length}'))
#	@$(eval MOD = $(shell echo "$(LEN)%2"|bc))
#	@$(eval DASH = $(shell seq 1 $(shell echo "37-$(LEN)/2"|bc)))
#	@$(eval FTRES = $(shell printf "$(GRN)<-";\
#		for i in $(DASH); do printf "-"; done;\
#		printf " $(1) "; if [[ $(MOD) -eq 0 ]]; then printf '-'; fi;\
#		for i in $(DASH); do printf "-"; done;\
#		printf ">$(NRM)"))
#	$(eval $(2) := $$(FTRES))
#endef

$(NAME):	$(LIBS)
	@$(LINKER) $(NAME) $(LIBS)
	@$(call pinfo,DONE!)

all:	$(NAME)

clean:
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) clean;)

fclean:
	@$(RM) $(NAME)
	@$(RM) $(LIBS)
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) fclean;)

re:		fclean all

.PHONY: all clean fclean re
