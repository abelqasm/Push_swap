SRCS =	./Mandatory/push_swap.c \
		./Mandatory/operation_1.c \
		./Mandatory/operation_2.c \
		./Mandatory/operation_3.c \
		./Mandatory/ft_push.c \
		./Mandatory/ft_sort3.c \
		./Mandatory/ft_push_to_a.c \
		./Mandatory/ft_push_to_b.c \
		./Mandatory/ft_bubble_sort.c \
		./utils/ft_split.c \
		./utils/ft_add_front_ls.c \
		./utils/ft_add_lst.c \
		./utils/ft_lst_check_index.c \
		./utils/ft_lst_size.c \
		./utils/ft_lstlast.c \
		./utils/ft_lstnew.c \
		./utils/ft_lst_init.c \
		./utils/ft_print_ls.c \
		./utils/ft_utils.c \
		./utils/ft_utils_2.c

SRCS_B = ./get_next_line/get_next_line_utils.c \
		./get_next_line/get_next_line.c \
		./Bonus/checker_bonus.c \
		./Bonus/ft_moves_bonus.c \
		./utils/ft_split.c \
		./utils/ft_add_front_ls.c \
		./utils/ft_lstnew.c \
		./utils/ft_add_lst.c \
		./utils/ft_lst_init.c \
		./utils/ft_lst_check_index.c \
		./utils/ft_lstlast.c \
		./utils/ft_utils.c \
		./utils/ft_lst_size.c \
		./Bonus/operation_bonus_1.c \
		./Bonus/operation_bonus_2.c \
		./Bonus/operation_bonus_3.c \
		./Bonus/ft_check_sort_bonus.c

CC = cc 

CFLAGS = -Wall -Werror -Wextra

OBJS = $(SRCS:.c=.o)

OBJS_B = $(SRCS_B:.c=.o)

NAME = push_swap

BONUS = checker

all : $(NAME)

bonus : $(BONUS)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

$(BONUS) : $(OBJS_B)
	$(CC) $(CFLAGS) $(OBJS_B) -o $(BONUS)
	make clean

clean :
	rm -rf Bonus/*.o Mandatory/*.o
	rm -rf utils/*.o
	rm -rf get_next_line/*.o

fclean : clean
	rm -f $(NAME) $(BONUS)

re : fclean all bonus
