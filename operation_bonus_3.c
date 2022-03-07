/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_bonus_3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 23:34:29 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/07 01:02:23 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

void	ft_rra(t_list **list_a)
{
	t_list	*temp;
	t_list	*node;

	if (ft_lst_size(*list_a) == 1)
		return ;
	temp = ft_lstlast(*list_a);
	node = ft_lstnew(temp->data);
	ft_add_front_ls(list_a, node);
	ft_lst_del_last(list_a);
}

void	ft_rrb(t_list **list_b)
{
	t_list	*temp;
	t_list	*node;

	if (ft_lst_size(*list_b) == 1)
		return ;
	temp = ft_lstlast(*list_b);
	node = ft_lstnew(temp->data);
	ft_add_front_ls(list_b, node);
	ft_lst_del_last(list_b);
}

void	ft_rrr(t_list **list_a, t_list **list_b)
{
	ft_rra(list_a);
	ft_rrb(list_b);
}
