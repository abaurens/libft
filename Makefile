CC			:=	make --no-print-dir -C
RM			:=	rm -rf
CP			:=	cp -rf
LINKER		:=	gcc -o

FTIO		:=	ftio.a
FTCIPHER	:=	ftcipher.a
FTMATH		:=	ftmath.a

GRN			:=	\e[1;92m
BLE			:=	\e[1;34m
CYA			:=	\e[1;96m
MAG			:=	\e[1;35m
RED			:=	\e[1;91m
NRM			:=	\e[0m
CURUP		:=	\e[1A
CMPT		:=	0

LIBS		:=	\
			$(FTIO)		\
			$(FTCIPHER)	\
			$(FTMATH)

SRCD	:=	srcs
OBJD	:=	objs

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

CFLAGS	:=	-I./includes -W -Wall -Wextra -Werror

#$(NAME):	$(OBJ)
#	$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(LIBS)


%.a:
	@#sleep 1
	@#if [[ $(CMPT) -ne 0 ]]; then printf "$(CURUP)$(CURUP)"; fi
	$(eval FCNT	= $(words $(LIBS)))
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	@#printf "$(CYA)[%d/%d] $(RED)%s$(NRM)\n" $(CMPT) $(FCNT) $(basename $@)
	@$(CC) $(basename $@) SUBID=$(CMPT) TOTAL_SIZE=$(FCNT)

#$(OBJD)/%.o:	$(SRCD)/%.c
#	@mkdir -p $(dir $@)
#	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) clean;)

fclean:
	@$(foreach CMD,$(basename $(LIBS)),$(CC) $(CMD) fclean;)

re:		fclean all

.PHONY: all clean fclean re
