# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 00:51:05 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 02:41:01 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include variables.mk

CC			:=	make --no-print-dir -C
RM			:=	rm -rf
CP			:=	cp -rf

LIBS	:=	\
			ftlib.a		\
			ftio.a		\
			ftcipher.a	\
			ftmath.a
LIBS	:=	$(shell echo $(LIBS)|tr ' ' '\n'|sort -R|awk '{print length,$$0}'|sort -n|cut -d' ' -f2)

CFLAGS	:=	-I./includes -W -Wall -Wextra -Werror

MAX_LEN	:=	$(shell echo -e $(lastword $(LIBS)) | awk '{print length}')

all:	$(LIBS)


%.a:
	$(eval FCNT	= $(words $(LIBS)))
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	@$(CC) $(basename $@) SUBID=$(CMPT) TOTAL_SIZE=$(FCNT) MAX_LEN=$(MAX_LEN)

clean:
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) clean;)

fclean:
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) fclean;)

re:		fclean all

.PHONY: all clean fclean re
