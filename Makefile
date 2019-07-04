# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/04 00:51:05 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 15:13:03 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include variables.mk

CC			:=	make --no-print-dir -C
RM			:=	rm -rf
CP			:=	cp -rf

LIBS	:=	\
			ftlib.a		\
			ftcipher.a	\
			ftmath.a	\
			ftregex.a

LIBS	:=	$(shell echo $(LIBS)|tr ' ' '\n'|awk '{print length,$$0}'|sort -n|\
			cut -d' ' -f2)

CFLAGS	:=	-I./includes -W -Wall -Wextra -Werror

MAX_LEN	:=	$(shell echo $(lastword $(LIBS)) | awk '{print length}')

all:	$(LIBS)
	@$(call pinfo,DONE!)

%.a:	$(basename %)/Makefile
	@$(call vinfo,Compiling...,TEXT)
	@if [[ $(CMPT) -eq 0 ]]; then printf "$(TEXT)\n"; fi
	$(eval FCNT	= $(words $(LIBS)))
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	@$(CC) $(basename $@) SUBID=$(CMPT) TOTAL_SIZE=$(FCNT) MAX_LEN=$(MAX_LEN)
	@$(CP) $(basename $@)/$@ ./

clean:
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) clean;)

fclean:
	@$(RM) $(LIBS)
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) fclean;)

re:		fclean all

.PHONY: all clean fclean re
