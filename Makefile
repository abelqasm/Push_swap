SRCS =	push_swap.c \
		operation_1.c \
		operation_2.c \
		operation_3.c \
		ft_push.c \
		ft_sort3.c \
		ft_push_to_a.c \
		ft_push_to_b.c \
		ft_bubble_sort.c \
		ft_split.c \
		./srcs/ft_add_front_ls.c \
		./srcs/ft_add_lst.c \
		./srcs/ft_lst_check_index.c \
		./srcs/ft_lst_size.c \
		./srcs/ft_lstlast.c \
		./srcs/ft_lstnew.c \
		./srcs/ft_lst_init.c \
		./srcs/ft_print_ls.c \
		./srcs/ft_utils.c \
		./srcs/ft_utils_2.c

SRCS_B = ./get_next_line/get_next_line_utils.c \
		./get_next_line/get_next_line.c \
		checker_bonus.c \
		ft_moves_bonus.c \
		ft_split.c \
		./srcs/ft_add_front_ls.c \
		./srcs/ft_lstnew.c \
		./srcs/ft_add_lst.c \
		./srcs/ft_lst_init.c \
		./srcs/ft_lst_check_index.c \
		./srcs/ft_lstlast.c \
		./srcs/ft_utils.c \
		./srcs/ft_lst_size.c \
		operation_bonus_1.c \
		operation_bonus_2.c \
		operation_bonus_3.c \
		ft_check_sort_bonus.c

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

clean :
	rm -rf *.o
	rm -rf srcs/*.o
	rm -rf get_next_line/*.o

fclean : clean
	rm -f $(NAME) $(BONUS)

re : fclean all
