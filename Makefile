# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 16:08:06 by abaurens          #+#    #+#              #
#    Updated: 2019/07/03 22:02:32 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CP		:=		cp
CC		:=		gcc
RM		:=		rm -rf
LINKER	:=		ar rc

NAME	:=		libft.a

GRN		:=		\e[1;92m
BLE		:=		\e[1;34m
CYA		:=		\e[1;96m
MAG		:=		\e[1;35m
RED		:=		\e[1;91m
NRM		:=		\e[0m
CURUP	:=		\e[1A

CMPT	:=		0
LINE	:=		" $(CYA)[%3d%%]\t$(BLE)%-24s $(MAG)=>$(BLE)\t%-24s$(NRM)\n"

GCC_NO_NOTE	:=	':a;N;s/\n/&/1;Ta;/: note: .*ABI.*/!{P;D};:b;N;s/\n/&/3;Tb;d'

GCC_STR	:=	<---------------------- Compiling sources... ---------------------->
CLN_STR	:=	<---------------------- Cleaning  sources... ---------------------->
FCL_STR	:=	<---------------------- Cleaning  $(NAME)... ---------------------->
LNK_STR	:=	<----------------------- Linking $(NAME)... ----------------------->
DNE_STR	:=	<----------------------------- DONE ! ----------------------------->

SRCD	:=	srcs
OBJD	:=	objs

### ftcipher

CICORE	:=	cipher_core.c
CICORE	:=	$(addprefix cipher_core/, $(CICORE))

CIPHER	:=	$(CICORE)	\
			ft_cipher.c
CIPHER	:=	$(addprefix ftcipher/, $(CIPHER))

###	ftio

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

FTIO	:=	$(IOCORE)					\
			$(IOCONV)		$(STRCNV)	\
			$(BFLOAT)	$(DRAGON)	\
			ft_printf.c		ft_dprintf.c	ft_sprintf.c	\
			ft_fprintf.c	ft_snprintf.c	ft_asprintf.c
FTIO	:=	$(addprefix ftio/,$(FTIO))

###	ftlib

FTLIB	:=	\
			gnl.c					\
			ft_rad.c				\
			ft_abs.c				\
			ft_max.c				\
			ft_min.c				\
			ft_nan.c				\
			ft_itoa.c				\
			ft_atoi.c				\
			ft_atol.c				\
			ft_match.c				\
			ft_idxof.c				\
			ft_bzero.c				\
			ft_split.c				\
			ft_strequ.c				\
			ft_strlen.c				\
			ft_strmap.c				\
			ft_strnew.c				\
			ft_isbase.c				\
			ft_memchr.c				\
			ft_memcmp.c				\
			ft_memcpy.c				\
			ft_memdel.c				\
			ft_memset.c				\
			ft_numlen.c				\
			ft_putnbr.c				\
			ft_putstr.c				\
			ft_strcat.c				\
			ft_strchr.c				\
			ft_strclr.c				\
			ft_strcmp.c				\
			ft_strcpy.c				\
			ft_strdel.c				\
			ft_strdup.c				\
			ft_strstr.c				\
			ft_strsub.c				\
			ft_strncat.c			\
			ft_isupper.c			\
			ft_strncmp.c			\
			ft_freturn.c			\
			ft_strnstr.c			\
			ft_strrchr.c			\
			ft_strmapi.c			\
			ft_strmcat.c			\
			ft_memmove.c			\
			ft_strncpy.c			\
			ft_strnequ.c			\
			ft_striter.c			\
			ft_strjoin.c			\
			ft_strlcat.c			\
			ft_strtrim.c			\
			ft_tolower.c			\
			ft_toupper.c			\
			ft_isdigit.c			\
			ft_islower.c			\
			ft_isprint.c			\
			ft_isalnum.c			\
			ft_isalpha.c			\
			ft_isascii.c			\
			ft_memccpy.c			\
			ft_putchar.c			\
			ft_putendl.c			\
			ft_striteri.c			\
			ft_strsplit.c			\
			ft_contains.c			\
			ft_memalloc.c			\
			ft_putnbr_fd.c			\
			ft_putstr_fd.c			\
			ft_strupcase.c			\
			ft_atol_base.c			\
			get_next_line.c			\
			ft_putchar_fd.c			\
			ft_putendl_fd.c			\
			ft_count_words.c		\
			ft_putnbr_base.c		\
			ft_unsignedlen.c		\
			ft_putnbr_base_fd.c		\
			ft_unsignedlen_base.c

FTLIB	:=	$(addprefix ftlib/,$(FTLIB))

SRC		:=	$(FTLIB) $(FTIO) $(CIPHER)

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

INCLUDE	:=	-I./includes

CFLAGS	:=	$(INCLUDE) -W -Wall -Wextra -Werror

$(NAME):	$(OBJ)
	@printf "$(GRN)$(LNK_STR)$(NRM)\n"
	@$(LINKER) $(NAME) $(OBJ)
	@printf "$(MAG)ranlib $(RED)$(NAME)$(NRM)\n"
	@ranlib $(NAME)
	@printf "$(GRN)$(DNE_STR)$(NRM)\n"

$(OBJD)/%.o: $(SRCD)/%.c
	@if [[ $(CMPT) -eq 0 ]]; then printf "$(GRN)$(GCC_STR)$(NRM)\n";\
	else printf "$(CURUP)"; fi
	$(eval FCNT	= $(words $(SRC)))
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	$(eval PRC = $(shell echo "$(CMPT) / $(FCNT) * 100" | bc -l | sed 's/^\./0./'))
	@printf $(LINE) $(shell echo $(PRC) | sed -E "s:\.[0-9]{20}::") $(notdir $<) $(notdir $@)
	@printf "\e[0m"
	@mkdir -p $(dir $@)
	@2>&1 $(CC) $(CFLAGS) -o $@ -c $< | sed $(GCC_NO_NOTE)

all: $(NAME)

clean:
	@printf "$(GRN)$(CLN_STR)$(NRM)\n"
	@$(RM) $(OBJD)

fclean:	clean
	@printf "$(GRN)$(FCL_STR)$(NRM)\n"
	@$(RM) $(NAME)

space:
	@echo

re:	fclean space all

.PHONY: all clean fclean space re
