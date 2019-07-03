CC			:=	make -C
RM			:=	rm -rf
CP			:=	cp -rf
LINKER		:=	gcc -o

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
			$(FTMATH)	\
			$(FTCIPHER)

SRCD	:=	srcs
OBJD	:=	objs

OBJ		:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC		:=	$(addprefix $(SRCD)/,$(SRC))

CFLAGS	:=	-I./includes -W -Wall -Wextra -Werror

#$(NAME):	$(OBJ)
#	$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(LIBS)


%.a:
	@sleep 1
	@if [[ $(CMPT) -ne 0 ]]; then printf "$(CURUP)$(CURUP)"; fi
	$(eval FCNT	= $(words $(LIBS)))
	$(eval CMPT = $(shell echo $(CMPT) + 1 | bc))
	@printf "$(CYA)[%d/%d] $(RED)%s$(NRM)\n" $(CMPT) $(FCNT) $(basename $(FTCIPHER))
	@$(CC) $(basename $(FTCIPHER))

#$(OBJD)/%.o:	$(SRCD)/%.c
#	@mkdir -p $(dir $@)
#	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@$(RM) $(OBJD)

fclean:
	@$(CC) $(basename $(FTCIPHER)) fclean

re:		fclean all

.PHONY: all clean fclean re
