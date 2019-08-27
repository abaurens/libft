# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    rules.mk                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 01:35:40 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

$(NAME):	$(OBJ)
	@$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)
ifeq ($(LINKER), ar rc)
	@ranlib $(NAME)
else
	@$(CP) $(NAME) ../
endif

-include $(DEP)

$(OBJD)/%.o:	$(SRCD)/%.c Makefile
	@if [[ $(CMPT) -ne 0 ]]; then printf "$(CURUP)"; fi
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	$(eval PRC = $(shell echo "$(CMPT)/$(FCNT)*100"|bc -l|sed 's/^\./0./'))
	@printf $(LINE) $(SUBID) $(TOTAL_SIZE) $(basename $(NAME)) $(shell echo $(PRC)\
	|sed -E "s:\.[0-9]{20}::") $(notdir $<) $(notdir $@)
	@printf "\e[0m"
	@mkdir -p $(dir $@)
ifndef NO_NOTE
	@$(CC) $(strip $(CFLAGS)) -o $@ -c $<
else
	@2>&1 $(CC) $(strip $(CFLAGS)) -o $@ -c $< | sed $(NO_NOTE)
endif

all:	$(NAME)

clean:
	$(call pinfo,Cleaning $(NAME))
	@$(RM) $(DEP)
	@$(RM) $(OBJD)

fclean:
	$(call pinfo,Fcleaning $(NAME))
	@$(RM) $(DEP)
	@$(RM) $(OBJD)
	@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
