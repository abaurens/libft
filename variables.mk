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

COLOR	:=	RGB

TPUT	:=	2>/dev/null tput
TCOL	:=	$(TPUT) setaf

PWD		:=	$(dir $(abspath $(firstword $(MAKEFILE_LIST))))
ROOT	:=	$(PWD)
ifneq ($(lastword $(subst /, ,$(ROOT))), libft)
	ROOT := $(shell echo $(ROOT) | sed 's:libft/.*:libft/:g')
endif
LIBS_D	:=	$(ROOT)libs

GRN		!=	$(TCOL) 46
BLE		!=	$(TCOL) 12
CYA		!=	$(TCOL) 14
MAG		!=	$(TCOL) 13
RED		!=	$(TCOL) 9
NRM		!=	$(TPUT) sgr0


define rgbcol
$(shell LC_NUMERIC=C;printf '\e[38;2;%.f;%.f;%.fm' $(1) $(2) $(3))
endef

#ifeq ($(COLOR),RGB)
#GRN		:=	$(call rgbcol,0,255,0)
#BLE		:=	$(call rgbcol,0,0,255)
#CYA		:=	$(call rgbcol,0,255,255)
#MAG		:=	$(call rgbcol,255,0,255)
#RED		:=	$(call rgbcol,255,0,0)
#endif

CURUP	!=	$(TPUT) cuu1
CLEAR	!=	$(TPUT) el

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
	$(eval FTRES = $(shell printf '$(GRN)<-';\
		for i in $(DASH); do printf "-"; done;\
		printf " $(1) "; if [[ $(MOD) -eq 0 ]]; then printf '-'; fi;\
		for i in $(DASH); do printf "-"; done;\
		printf '>$(NRM)'))
	$(eval $(2) := $$(FTRES))
endef

define pinfo
	@$(call vinfo,$(1),PINFO)
	@printf '$(PINFO)\n'
endef

define increment
@$(eval TMP = $(shell echo '$(1) + 1' | bc))
$(eval $(2) := $$(TMP))
endef

define purcent
$(shell echo '$(1)/$(2)*100'|bc -l|sed 's/^\./0./'|sed -E 's:\.[0-9]{20}::')
endef

define lerpi
$(shell Vmi=$(1);
		Vma=$(2);
		Vpr=$(3);
		dif=`echo "$$Vma - $$Vmi"|bc -l`;
		echo "$$Vpr * $$dif + $$Vmi"|bc -l|
		sed 's/^\./0./'|sed -E 's:\.[0-9]{20}::')
endef

define lerpf
$(shell Vmi=$(1);
		Vma=$(2);
		Vpr=$(3);
		dif=`echo "$$Vma - $$Vmi"|bc -l`;
		echo "$$Vpr * $$dif + $$Vmi"|bc -l|sed 's/^\./0./')
endef

define toint
$(shell echo '$(1)'|sed 's/^\./0./'|sed -E 's:\.[0-9]{20}::')
endef

define tofloat
$(shell echo '$(1)'|sed 's/^\./0./')
endef

define computei
$(shell echo '$(1)'|bc -l|sed 's/^\./0./'|sed -E 's:\.[0-9]{20}::')
endef

define computef
$(shell echo '$(1)'|bc -l|sed 's/^\./0./')
endef

define progressbar
@$(eval MAX = 42)
@$(eval NORM = $(shell echo '$(1)/100'|bc -l))
@$(eval NORM = $(call computef,$(1) / 100))
@$(eval R = $(call lerpf,255,0,$(NORM)))
@$(eval G = $(call lerpf,0,255,$(NORM)))
@$(eval B = $(call lerpf,0,255,$(NORM)))
@$(eval LEN = $(call computei,$(NORM) * $(MAX)))
@$(eval RES = $(shell LC_NUMERIC=C;
	printf '$(call rgbcol,$(R),$(G),$(B))[';
	for I in $(shell seq 1 $(MAX)); do
		if [[ $$I -le $(LEN) ]]; then
			printf '=';
		else
			printf ' ';
		fi;
	done;
	printf ']$(NRM)'))
$(eval $(2) := $$(RES))
endef

define filename
$(notdir $(basename $(1)))
endef

define libpath
$(LIBS_D)/$(1)/$(1)$(SUB_EXT)
endef

LINE	:=	" [$(CYA)%d/%d$(NRM)] $(RED)%-$(MAX_LEN)s$(NRM) $(CYA)[%3d%%] \
[%3d / %3d] %s$(NRM)\n"

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
	@$(call vinfo,Compiling...,TEXT)
	@if [[ $(CMPT) -eq 0 ]]; then printf "$(TEXT)\n"; fi
	$(eval FCNT	= $(words $(LIBS)))
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	@$(CC) $(basename $@) SUBID=$(CMPT) TOTAL_SIZE=$(FCNT) MAX_LEN=$(MAX_LEN)
