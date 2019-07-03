# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/07/03 22:26:40 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	ar rc
NAME	:=	ftio.a

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

STRCNV	:=	padded_lltoa.c		padded_ulltoa_hexa.c	\
			padded_ulltoa.c		padded_ulltoa_octal.c	\
			padded_ulltoa_bin.c	ft_ldtoa_scientific.c
STRCNV	:=	$(addprefix tostr_conv/, $(STRCNV))

IOCORE	:=	core.c		parse_args.c		\
			flags.c		ft_get_errno.c		\
			buffer.c	list_manager.c		\
			big_num.c	bankers_round.c		\
			unicode.c	floating_point.c	\
			arg_mgr.c	argument_getter.c	\
			ft_error.c	parser_functions.c	\
			preparse.c
IOCORE	:=	$(addprefix core/, $(IOCORE))

BFLOAT	:=	add.c	utils.c		\
			mul.c	string.c	\
			set.c	instance.c
BFLOAT	:=	$(addprefix bfloat/, $(BFLOAT))

DRAGON	:=	bint.c		bint_div.c	bint_sub.c		\
			bint_add.c	bint_mul.c	bint_shift.c	\
			bint_cmp.c	bint_pow.c	bint_utils.c
DRAGON	:=	$(addprefix bigint/,$(DRAGON))
DRAGON	:=	$(DRAGON) dragon_buffer.c	ft_ldtoa.c
DRAGON	:=	$(addprefix dragon4/,$(DRAGON))

IOCONV	:=	$(addprefix uhexa/,uhexa.c h_len.c h_exotic.c)			\
			$(addprefix integer/,integer.c len.c exotic.c)			\
			$(addprefix length/,length.c l_len.c l_exotic.c)		\
			$(addprefix uoctal/,uoctal.c o_len.c o_exotic.c)		\
			$(addprefix ubinary/,ubinary.c b_len.c b_exotic.c)		\
			$(addprefix uinteger/,uinteger.c u_len.c u_exotic.c)	\
			char.c			string.c		pointer.c				\
			percent.c		dbl_hex.c		npstring.c				\
			iso_date.c		strerror.c		dbl_scientific.c		\
			dbl_compact.c	dbl_floating.c
IOCONV	:=	$(addprefix convert/,$(IOCONV))

SRC		:=	$(IOCORE)				\
			$(IOCONV)	$(STRCNV)	\
			$(BFLOAT)	$(DRAGON)	\
			ft_printf.c		ft_dprintf.c	ft_sprintf.c	\
			ft_fprintf.c	ft_snprintf.c	ft_asprintf.c

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))

# RULES

$(NAME):	$(OBJ)
	@printf $(EMPTY)
	@$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

$(OBJD)/%.o:	%.c
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
