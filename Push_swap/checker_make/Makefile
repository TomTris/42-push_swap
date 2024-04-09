CC = cc
CFLAGS = -Werror -Wextra -Werror 
SRC_GNL = get_next_line.c get_next_line_utils.c main.c
SRC_OTHER = ../ft_make_a1.c ../ft_make_a2.c ../rules.c ../rule1.c ../rule2.c ../rule3.c
NAME = checker

OBJS_GNL = $(SRC_GNL:.c=.o)
OBJS_OTHER = $(SRC_OTHER:.c=.o)

$(NAME): all

all: $(OBJS_GNL) $(OBJS_OTHER)
	cc -o $(NAME) $(OBJS_GNL) $(OBJS_OTHER) && make clean && make clean -C ../

clean:
	rm -f $(OBJS_GNL)

fclean:
	rm -f $(OBJS_GNL) $(NAME) && make fclean -C ../

re: fclean all