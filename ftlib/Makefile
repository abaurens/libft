# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abaurens <abaurens@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/06 16:08:06 by abaurens          #+#    #+#              #
#    Updated: 2019/07/04 14:08:24 by abaurens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

include ../variables.mk

CC		:=	gcc
RM		:=	rm -rf
CP		:=	cp -rf
LINKER	:=	ar rc
NAME	:=	ftlib.a

IOD		:=	ftio
IOC		:=	0

CFLAGS	:=	-I../includes -W -Wall -Wextra -ansi -Werror

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

IO		:=	$(IOCORE)				\
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
IO		:=	$(addprefix $(IOD)/,$(IO))

IOCT	:=	$(words $(IO))
SRC		:=	\
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
			ft_striteri.c			\
			ft_strsplit.c			\
			ft_contains.c			\
			ft_memalloc.c			\
			ft_strupcase.c			\
			ft_count_words.c		\
			ft_unsignedlen.c		\
			ft_unsignedlen_base.c

FCNT	:=	$(words $(SRC))
SRC		:=	$(IO) $(SRC)

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

# RULES

$(NAME):	$(OBJ)
	@$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

$(OBJD)/$(IOD)/%.o:	$(IOD)/%.c
	@if [[ $(IOC) -ne 0 ]]; then printf "$(CURUP)"; fi
	$(eval IOC = $(shell echo $(IOC) + 1 | bc))
	$(eval PRC = $(shell echo "$(IOC)/$(IOCT)*100"|bc -l|sed 's/^\./0./'))
	@printf $(LINE) 0 $(TOTAL_SIZE) 'ftio' $(shell echo $(PRC)|sed -E \
	"s:\.[0-9]{20}::") $(notdir $<) $(notdir $@)
	@printf "\e[0m"
	@mkdir -p $(dir $@)
	@$(CC) $(shell echo $(CFLAGS) | sed -E 's/ *-(ansi|pedantic) */ /g') -o $@ -c $<

all:	$(NAME)

clean:
	$(call pinfo,Cleaning $(NAME))
	@$(RM) $(OBJD)

fclean:
	$(call pinfo,Fcleaning $(NAME))
	@$(RM) $(OBJD)
	@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
