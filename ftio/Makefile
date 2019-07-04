# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/03 19:29:12 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 02:10:59 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../variables.mk

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	ar rc
NAME	:=	ftio.a

CFLAGS	:=	-I../includes -W -Wall -Wextra -Werror

OBJD	:=	objs

GCC_NO_NOTE	:=	':a;N;s/\n/&/1;Ta;/: note: .*ABI.*/!{P;D};:b;N;s/\n/&/3;Tb;d'

GCC_STR	:=
CLN_STR	:=	<---------------------- Cleaning  $(NAME)... ---------------------->
FCL_STR	:=	<---------------------- Fcleaning $(NAME)... ---------------------->
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
			gnl.c			cgnl.c				sgnl.c				\
			ft_atoi.c		ft_atol.c			ft_itoa.c			\
			ft_printf.c		ft_putnbr.c			ft_putstr.c			\
			ft_sprintf.c	ft_dprintf.c		ft_fprintf.c		\
			ft_putchar.c	ft_putendl.c		ft_snprintf.c		\
			ft_putnbr_fd.c	ft_putstr_fd.c		ft_asprintf.c		\
			ft_atol_base.c	ft_putchar_fd.c		ft_putendl_fd.c		\
			get_next_line.c	ft_putnbr_base.c	ft_putnbr_base_fd.c

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

# RULES
$(NAME):	$(OBJ)
	@$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

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
	@2>&1 $(CC) $(CFLAGS) -o $@ -c $< | sed $(GCC_NO_NOTE)

clean:
	@printf "$(GRN)$(CLN_STR)$(NRM)\n"
	@$(RM) $(OBJD)

fclean:
	@printf "$(GRN)$(FCL_STR)$(NRM)\n"
	@$(RM) $(OBJD)
	@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
