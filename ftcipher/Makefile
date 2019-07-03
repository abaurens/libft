# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/07/03 20:03:26 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	ar rc
NAME	:=	ftcipher.a

CFLAGS	:=	-I../includes -W -Wall -Wextra -Werror

# INTERNAL VARIABLES

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
EMPTY	:=	"                                                                  \n$(CURUP)"
LINE	:=	"\t[$(RED)$(NAME)$(NRM)] $(CYA)[%3d%%]  $(BLE)%-24s $(MAG)=>$(BLE)\t%-24s$(NRM)\n"

GCC_STR	:=
CLN_STR	:=	<---------------------- Cleaning  sources... ---------------------->
FCL_STR	:=	<---------------------- Cleaning  $(NAME)... ---------------------->
LNK_STR	:=	<----------------------- Linking $(NAME)... ----------------------->
DNE_STR	:=	<----------------------------- DONE ! ----------------------------->

# SOURCES

CORE	:=	cipher_core.c
CORE	:=	$(addprefix core/, $(CICORE))

SRC		:=	$(CICORE)	\
			ft_cipher.c

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

# RULES

$(NAME):	$(OBJ)
	@printf $(EMPTY)
	@$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

$(OBJD)/%.o:	$(SRCD)/%.c
	@if [[ $(CMPT) -eq 0 ]]; then printf "";\
	else printf "$(CURUP)"; fi
	$(eval FCNT	= $(words $(SRC)))
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	$(eval PRC = $(shell echo "$(CMPT) / $(FCNT) * 100" | bc -l | sed 's/^\./0./'))
	@printf $(LINE) $(shell echo $(PRC) | sed -E "s:\.[0-9]{20}::") $(notdir $<) $(notdir $@)
	@printf "\e[0m"
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJD)

fclean:
	@$(RM) $(OBJD)
	@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
