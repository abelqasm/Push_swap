/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:16:45 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/10 01:32:10 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct s_list
{
	int				data;
	struct s_list	*next;
}	t_list;
typedef struct s_sort
{
	int	*tab;
	int	middle;
	int	tab_size;
	int	chunk;
	int	total;
	int	neg;
	int	pos;
	int	max;
	int	moves;
}	t_sort;
t_list		*ft_lstnew(int data);
t_list		*ft_lstlast(t_list *list);
int			ft_lst_init(int argc, char **argv, t_list **list);
int			ft_atoi(const char *str);
int			ft_lst_index(t_list *list);
int			ft_lst_size(t_list *list);
int			ft_lst_chunk(t_list *list, int chunk);
void		ft_add_lst(t_list **list, t_list *new);
void		ft_print_ls(t_list *list);
void		ft_add_front_ls(t_list **list, t_list *node);
void		ft_swap(int *a, int *b);
void		pb(t_list **list_a, t_list **list_b);
void		sa(t_list **list_a);
void		sb(t_list **list_b);
void		ss(t_list **list_a, t_list **list_b);
void		ra(t_list **list_a);
void		pa(t_list **list_a, t_list **list_b);
void		ra(t_list **list_a);
void		rb(t_list **list_a);
void		rr(t_list **list_a, t_list **list_b);
void		rra(t_list **list_a);
void		rrb(t_list **list_b);
void		rrr(t_list **list_a, t_list **list_b);
int			*ft_bubble_sort(t_list *list, int i, int j);
void		ft_push(t_list **list_a, t_list **list_b, t_sort *sort);
void		ft_push_to_b(t_list **list_a, t_list **list_b, t_sort *sort);
void		ft_push_to_a(t_list **list_a, t_list **list_b, t_sort *sort);
int			ft_check(t_list **list, int index);
int			ft_check_number(char *number);
int			ft_printf(const char *str, ...);
void		ft_change_a_1(t_list **list);
void		ft_change_a_2(t_list **list);
void		ft_change_b_1(t_list **list);
void		ft_change_b_2(t_list **list);
int			ft_strlen_moves(char *str);
void		sort3_for_a(t_list **list);
void		sort3_for_b(t_list **list);
char		**ft_split(char const *s, char c);

#endif