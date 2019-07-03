CC			:=	gcc
RM			:=	rm -rf
CP			:=	cp -rf
LINKER		:=	ar rc
NAME		:=	ftmath.a

SRCD		:=	srcs
OBJD		:=	objs

SRC			:=

OBJ			:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC			:=	$(addprefix $(SRCD)/,$(SRC))

CFLAGS		:=	-I./includes -W -Wall -Wextra -Werror

$(NAME):	$(OBJ)
	@touch $(NAME)
	@#$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

$(OBJD)/%.o:	$(SRCD)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	@printf "clean ftmath\n"
	@$(RM) $(OBJD)

fclean:
	@printf "fclean ftmath\n"
	@$(RM) $(OBJD)
	@$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
