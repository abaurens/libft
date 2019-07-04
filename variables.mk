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

GRN		:=	\e[1;92m
BLE		:=	\e[1;34m
CYA		:=	\e[1;96m
MAG		:=	\e[1;35m
RED		:=	\e[1;91m
NRM		:=	\e[0m

CURUP	:=	\e[1A

SRCD	:=	srcs
OBJD	:=	objs

CMPT	:=	0
FCNT	:=	$(words $(SRC))

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

LINE	:=	" [$(CYA)%d/%d$(NRM)] $(RED)%-$(MAX_LEN)s$(NRM) $(CYA)[%3d%%]  \
$(BLE)%-24s $(MAG)=>$(BLE)\t%-24s$(NRM)\n"

EMPTY	:=	$(shell printf '%80s' "")#80 spaces

$(OBJD)/%.o:	$(SRCD)/%.c
	@if [[ $(CMPT) -ne 0 ]]; then printf "$(CURUP)"; fi
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	$(eval PRC = $(shell echo "$(CMPT)/$(FCNT)*100"|bc -l|sed 's/^\./0./'))
	@printf $(LINE) $(SUBID) $(TOTAL_SIZE) $(basename $(NAME)) $(shell echo $(PRC)\
	|sed -E "s:\.[0-9]{20}::") $(notdir $<) $(notdir $@)
	@printf "\e[0m"
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $<
