/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 21:19:00 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:37 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ra(t_list **list_a)
{
	t_list	*node;
	t_list	*temp;

	if (ft_lst_size(*list_a) == 1)
		return ;
	temp = *list_a;
	node = ft_lstnew(temp->data);
	ft_add_lst(list_a, node);
	node = temp;
	temp = temp->next;
	free(node);
	*list_a = temp;
	write(1, "ra\n", 3);
}

void	rb(t_list **list_b)
{
	t_list	*node;
	t_list	*temp;

	if (ft_lst_size(*list_b) == 1)
		return ;
	temp = *list_b;
	node = ft_lstnew(temp->data);
	ft_add_lst(list_b, node);
	node = temp;
	temp = temp->next;
	free(node);
	*list_b = temp;
	write(1, "rb\n", 3);
}

void	rr(t_list **list_a, t_list **list_b)
{
	ra(list_a);
	rb(list_b);
	write(1, "rr\n", 3);
}
