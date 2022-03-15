/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_1.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:46:30 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:35 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	pa(t_list **list_a, t_list **list_b)
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
	write(1, "pa\n", 3);
}

void	pb(t_list **list_a, t_list **list_b)
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
	write(1, "pb\n", 3);
}

void	sa(t_list **list_a)
{
	t_list	*ptr;

	if (ft_lst_size(*list_a) < 2)
		return ;
	ptr = *list_a;
	ft_swap(&ptr->data, &ptr->next->data);
	write(1, "sa\n", 3);
}

void	sb(t_list **list_b)
{
	t_list	*ptr;

	if (ft_lst_size(*list_b) < 2)
		return ;
	ptr = *list_b;
	ft_swap(&ptr->data, &ptr->next->data);
	write(1, "sb\n", 3);
}

void	ss(t_list **list_a, t_list **list_b)
{
	sa(list_a);
	sb(list_b);
	write(1, "ss\n", 3);
}
