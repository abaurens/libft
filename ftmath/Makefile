CC			:=	gcc
RM			:=	rm -rf
CP			:=	cp -rf
LINKER		:=	gcc -o
NAME		:=

SRCD		:=	srcs
OBJD		:=	objs

SRC			:=

OBJ			:=	$(addprefix $(OBJD)/,$(SRC:.c=.o))
SRC			:=	$(addprefix $(SRCD)/,$(SRC))

CFLAGS		:=	-I./includes -W -Wall -Wextra -Werror

$(NAME):	$(OBJ)
	$(LINKER) $(NAME) $(OBJ) $(LDFLAGS)

all:	$(NAME)

$(OBJD)/%.o:	$(SRCD)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

clean:
	$(RM) $(OBJD)

fclean:
	$(RM) $(OBJD)
	$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
