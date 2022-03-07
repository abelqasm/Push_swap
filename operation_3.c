/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 03:05:22 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/07 01:01:43 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lst_del_last(t_list **list)
{
	t_list	*ptr;
	t_list	*temp;

	ptr = *list;
	while (ptr->next->next != NULL)
		ptr = ptr->next;
	temp = ptr->next;
	ptr->next = NULL;
	free(temp);
}	

void	rra(t_list **list_a)
{
	t_list	*temp;
	t_list	*node;

	if (ft_lst_size(*list_a) == 1)
		return ;
	temp = ft_lstlast(*list_a);
	node = ft_lstnew(temp->data);
	ft_add_front_ls(list_a, node);
	ft_lst_del_last(list_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **list_b)
{
	t_list	*temp;
	t_list	*node;

	if (ft_lst_size(*list_b) == 1)
		return ;
	temp = ft_lstlast(*list_b);
	node = ft_lstnew(temp->data);
	ft_add_front_ls(list_b, node);
	ft_lst_del_last(list_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **list_a, t_list **list_b)
{
	rra(list_a);
	rrb(list_b);
	write(1, "rrr\n", 4);
}
