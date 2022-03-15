/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:48:19 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:27 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_sort_two(t_list **list)
{
	t_list	*ptr;

	ptr = *list;
	if (ptr->data > ptr->next->data)
		sa(list);
	exit(0);
}

void	ft_sort_min(t_list **list_a, t_list **list_b, t_sort *sort)
{
	t_list	*ptr;
	int		size;

	ptr = *list_a;
	size = ft_lst_size(*list_a);
	if (sort->tab_size < 4)
		sort3_for_a(list_a);
	else
	{
		while (ft_lst_size(*list_a) > size - 3)
		{
			if (ptr->data < sort->tab[3])
				pb(list_a, list_b);
			else
				ra(list_a);
			ptr = *list_a;
		}
		if (ptr->next && ptr->data > ptr->next->data)
			sa(list_a);
		sort3_for_b(list_b);
		while (ft_lst_size(*list_b))
			pa(list_a, list_b);
	}
}

int	ft_get_chunks(int tab_size)
{
	if (tab_size > 150)
		return (18);
	if (tab_size > 10)
		return (8);
	if (tab_size > 5)
		return (5);
	return (1);
}

void	ft_push(t_list **list_a, t_list **list_b, t_sort *sort)
{
	sort->total = 1;
	sort->tab_size = ft_lst_size(*list_a);
	sort->middle = sort->tab_size / 2;
	sort->chunk = sort->tab_size / ft_get_chunks(sort->tab_size);
	if (sort->tab_size == 2)
		ft_sort_two(list_a);
	if (ft_get_chunks(sort->tab_size) != 1)
	{
		while (ft_lst_size(*list_a))
		{
			ft_push_to_b(list_a, list_b, sort);
			sort->total++;
		}
		ft_push_to_a(list_a, list_b, sort);
	}
	else
		ft_sort_min(list_a, list_b, sort);
}
