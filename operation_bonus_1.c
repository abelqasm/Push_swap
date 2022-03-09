/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_bonus_1.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 23:34:13 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/09 21:16:09 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_pa(t_list **list_a, t_list **list_b)
{
	t_list	*temp;
	t_list	*node;

	if (!ft_lst_size(*list_b))
		return ;
	temp = *list_b;
	node = ft_lstnew(temp->data);
	ft_add_front_ls(list_a, node);
	node = temp;
	temp = temp->next;
	free(node);
	*list_b = temp;
}

void	ft_pb(t_list **list_a, t_list **list_b)
{
	t_list	*temp;
	t_list	*node;

	if (!ft_lst_size(*list_a))
		return ;
	temp = *list_a;
	node = ft_lstnew(temp->data);
	ft_add_front_ls(list_b, node);
	node = temp;
	temp = temp->next;
	free(node);
	*list_a = temp;
}

void	ft_sa(t_list **list_a)
{
	t_list	*ptr;

	if (ft_lst_size(*list_a) < 2)
		return ;
	ptr = *list_a;
	ft_swap(&ptr->data, &ptr->next->data);
}

void	ft_sb(t_list **list_b)
{
	t_list	*ptr;

	if (ft_lst_size(*list_b) < 2)
		return ;
	ptr = *list_b;
	ft_swap(&ptr->data, &ptr->next->data);
}

void	ft_ss(t_list **list_a, t_list **list_b)
{
	ft_sa(list_a);
	ft_sb(list_b);
}
