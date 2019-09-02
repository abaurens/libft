# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 00:51:05 by abaurens          #+#    #+#              #
#    Updated: 2019/09/02 23:32:25 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	TODO:

include	variables.mk

override LDFLAGS :=	$(LDFLAGS) -L. -lft -g

ifdef ENABLE_TERMCAPS
ifeq ($(ENABLE_TERMCAPS), 1)
override LDFLAGS :=	$(LDFLAGS) -lncurses
endif
endif

override LDFLAGS :=	$(LDFLAGS) -lreadline

CC		:=	make --no-print-dir -I$(ROOT) -C
NAME	:=	libft.a
LINKER	:=	ar rc

LIBS	:=	\
			ftio		\
			ftlib		\
			ftmath		\
			ftregex		\
			ftcipher
LIBS	:=	$(addsuffix $(SUB_EXT),$(LIBS))

LIBS	:=	$(shell echo $(LIBS)|tr ' ' '\n'|awk '{print length,$$0}'|sort -n|\
			cut -d' ' -f2)
LIBS	:=	$(addprefix $(LIBS_D)/, $(LIBS))

MAX_LEN	:=	$(shell echo $(basename $(notdir $(lastword $(LIBS))))|\
			awk '{print length}')


VAR_	:=	$(strip $(foreach mk, $(LIBS),	\
	$(shell $(CC) $(basename $(mk))/ -q || $(RM) $(mk))))

.DEFAULT:	$(NAME)
$(NAME):	$(LIBS)
	@$(LINKER) $(NAME) $(LIBS)
	@ranlib $(NAME)
	@$(call pinfo,DONE!)

all:	$(NAME)

clean:
	@$(RM) $(OBJD)
	@$(RM) $(LIBS)
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) clean;)

fclean:	testclean
	@$(RM) $(NAME)
	@$(RM) $(LIBS)
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) fclean;)

re:		fclean all

.PHONY:		all clean fclean re

#	test part

testclean:
	@$(RM) test

test:	$(NAME) main.c
	gcc -o test main.c $(strip $(CFLAGS)) $(strip $(LDFLAGS))

.PHONY:	testclean
