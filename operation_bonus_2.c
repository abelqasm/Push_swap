/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation_bonus_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 23:34:21 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/09 21:16:13 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	ft_ra(t_list **list_a)
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
}

void	ft_rb(t_list **list_b)
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
}

void	ft_rr(t_list **list_a, t_list **list_b)
{
	ft_ra(list_a);
	ft_rb(list_b);
}
