# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    variables.mk                                       :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 01:35:40 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

RM		:=	rm -rf
CP		:=	cp -rf
LN		:=	ln -s

PWD		:=	$(dir $(abspath $(firstword $(MAKEFILE_LIST))))
ROOT	:=	$(PWD)
ifneq ($(lastword $(subst /, ,$(ROOT))), libft)
	ROOT := $(shell echo $(ROOT) | sed 's:libft/.*:libft/:g')
endif
LIBS_D	:=	$(ROOT)libs

GRN		:=	\e[1;92m
BLE		:=	\e[1;34m
CYA		:=	\e[1;96m
MAG		:=	\e[1;35m
RED		:=	\e[1;91m
NRM		:=	\e[0m

CURUP	:=	\e[1A
CLEAR	:=	\e[0K
HIDE	:=	\e[?25l
SHOW	:=	\e[?25h

SRCD	:=	srcs
OBJD	:=	objs

CMPT	:=	0
FCNT	:=	$(words $(SRC))

INCLDS	:=	-I$(ROOT)includes
override CFLAGS	:=	$(CFLAGS) $(INCLDS) -MMD -MP -W -Wall -Wextra -Werror

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))
DEP		:=	$(OBJ:.o=.d)

define vinfo
	@$(eval LEN = $(shell printf '$(1)'|awk '{print length}'))
	@$(eval MOD = $(shell echo "$(LEN)%2"|bc))
	@$(eval DASH = $(shell seq 1 $(shell echo "37-$(LEN)/2"|bc)))
	@$(eval FTRES = $(shell printf "$(GRN)<-";\
		for i in $(DASH); do printf "-"; done;\
		printf " $(1) "; if [[ $(MOD) -eq 0 ]]; then printf '-'; fi;\
		for i in $(DASH); do printf "-"; done;\
		printf ">$(NRM)"))
	$(eval $(2) := $$(FTRES))
endef

define pinfo
	@$(call vinfo,$(1),PINFO)
	@printf '$(PINFO)\n'
endef

define libpath
	"$(LIBS_D)/$(1)/$(1)$(SUB_EXT)"
endef

LINE	:=	"[$(CYA)%d/%d$(NRM)] $(RED)%-$(MAX_LEN)s$(NRM) $(CYA)[%3d%%]  \
$(BLE)%-24s $(MAG)=>$(BLE)    %s$(NRM)$(CLEAR)\n"

EMPTY	:=	$(shell printf '%80s' "")#80 spaces

ifndef SUBID
SUBID	:=	1
endif
ifndef TOTAL_SIZE
TOTAL_SIZE	:=	1
endif
ifndef MAX_LEN
MAX_LEN	:=	1
endif

ifndef ENABLE_TERMCAPS
ENABLE_TERMCAPS	:=	0
endif

SUB_EXT	:=	.ao

ifneq ($(PWD), $(ROOT))
NAME	:=	$(addsuffix $(SUB_EXT),$(addprefix $(LIBS_D)/,$(NAME)))
endif

# RULES

%$(SUB_EXT):
	@printf "$(HIDE)"
	@$(call vinfo,Compiling...,TEXT)
	@if [[ $(CMPT) -eq 0 ]]; then printf "$(TEXT)\n"; fi
	$(eval FCNT	= $(words $(LIBS)))
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	@$(CC) $(basename $@) SUBID=$(CMPT) TOTAL_SIZE=$(FCNT) MAX_LEN=$(MAX_LEN)\
	|| printf "$(SHOW)"
