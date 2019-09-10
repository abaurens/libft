# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 00:51:05 by abaurens          #+#    #+#              #
#    Updated: 2019/09/10 10:32:46 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	TODO:

include	variables.mk

NAME	:=	libft.a
SONM	:=	libft.so

ifdef CAN_RUN

override LDFLAGS =	-L. -lft

#ifndef DISABLE_TERMCAPS
#override LDFLAGS +=	-lncurses
#endif

#override LDFLAGS +=	-lreadline

CC		:=	$(MAKE) --no-print-dir -I$(ROOT) -C
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


VAR_	:=	$(strip $(foreach mk, $(LIBS),\
	$(shell $(CC) $(basename $(mk)) -q || $(RM) $(mk))))

.DEFAULT:	$(NAME)
$(NAME):	$(LIBS)
	@$(LINKER) $(NAME) $(LIBS)
	@ranlib $(NAME)
	@$(call pinfo,DONE!)

$(SONM):	override CFLAGSTO ?= -fPIC
$(SONM):	$(LIBS)
	@gcc -shared -o libft.so $(LIBS)
	@$(call pinfo,DONE!)

so:	$(SONM)

clean:
	@$(RM) $(OBJD)
	@$(RM) $(LIBS)
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) clean;)

fclean:	testclean
	@$(RM) $(NAME)
	@$(RM) $(SONM)
	@$(RM) $(LIBS)
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) fclean;)

else

.DEFAULT:	$(NAME)
$(NAME):
	@$(error missing dependencie(s): $(foreach dep,$(MISSING),'$(dep)'))
	@which -v $(firstword $(MISSING)) >$(NULL) 2>&1

clean:
	$(RM) $(OBJD)
	$(RM) $(LIBS)
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) clean;)

fclean:
	$(RM) $(NAME)
	$(RM) $(SONM)
	$(RM) $(LIBS)
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) fclean;)

endif

ifeq ($(LIB_MODE),$(or $(findstring DYNAMIC,$(LIB_MODE)),$(findstring SHARED,$(LIB_MODE))))
all:	$(SONM)
else
all:	$(NAME)
endif

re:		fclean all

.PHONY:	all clean fclean re so

#	test part

-include test.d

testclean:
	@$(RM) test

test:	$(NAME) main.c
	gcc -o test main.c $(strip $(CFLAGS)) $(strip $(LDFLAGS))

.PHONY:	testclean
