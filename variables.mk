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

LINE	:=	" [$(CYA)%d/%d$(NRM)] $(RED)%-$(MAX_LEN)s$(NRM) $(CYA)[%3d%%]  \
$(BLE)%-24s $(MAG)=>$(BLE)\t%-24s$(NRM)\n"

EMPTY	:=	$(shell printf '%80s' "")#80 spaces

$(OBJD)/%.o:	$(SRCD)/%.c
	@if [[ $(CMPT) -eq 0 ]]; then printf "";\
	else printf "$(CURUP)"; fi
	$(eval FCNT	= $(words $(SRC)))
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	$(eval PRC = $(shell echo "$(CMPT)/$(FCNT)*100"|bc -l|sed 's/^\./0./'))
	@printf $(LINE) $(SUBID) $(TOTAL_SIZE) $(NAME) $(shell echo $(PRC)|sed -E \
	"s:\.[0-9]{20}::") $(notdir $<) $(notdir $@)
	@printf "\e[0m"
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $<
