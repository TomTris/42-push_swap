CC = cc
CFLAGS = -Werror -Wextra -Werror 
SRC = ft_a_i_of_b.c ft_argc_1_3.c ft_b_out_of_a.c ft_calloc.c ft_do.c\
		ft_make_a1.c ft_make_a2.c ft_stepcnt_n_paar.c main.c main2.c rule1.c rule2.c rule3.c rules.c start.c\
		ft_b_i_of_a_1.c ft_a_out_of_b_1.c ft_do_1.c\
		ft_stepcnt_n_paar_1.c start_1.c rules_1.c rules_1_2.c rules_1_3.c
SRC_BONUS = checker_make/get_next_line.c checker_make/get_next_line_utils.c checker_make/main.c\
		ft_make_a1.c ft_make_a2.c rules.c rule1.c rule2.c rule3.c
NAME = push_swap
NAME_BONUS = checker
OBJS = $(SRC:.c=.o)
OBJS_BONUS = $(SRC_BONUS:.c=.o)

$(NAME): all

all: $(OBJS) lib_make
	cc  -o $(NAME) $(OBJS) ft_printf_file/libftprintf.a && make clean 
lib_make:
	make -C ft_printf_file


clean:
	rm -f $(OBJS) $(OBJS_BONUS) && make lib_clean
lib_clean:
	make clean -C ft_printf_file

fclean:
	rm -f $(OBJS) $(OBJS_BONUS) $(NAME) $(NAME_BONUS) && make lib_fclean 
lib_fclean:
	make fclean -C ft_printf_file 

re: fclean all

bonus: $(OBJS_BONUS)
	cc -o checker $(OBJS_BONUS) && make clean