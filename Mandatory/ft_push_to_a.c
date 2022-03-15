/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 02:45:56 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:23 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_rotate(t_list **list_b, int index)
{
	t_list	*ptr;

	ptr = *list_b;
	if (ft_check(list_b, index) > ft_lst_size(*list_b) / 2)
	{
		while (ptr->data != index)
		{
			rrb(list_b);
			ptr = *list_b;
		}
	}
	else
	{
		while (ptr->data != index)
		{
			rb(list_b);
			ptr = *list_b;
		}
	}
}

void	ft_anex(t_list **list_a, t_list **list_b, t_sort *sort)
{
	pa(list_a, list_b);
	if (ft_lst_size(*list_a) > 1)
		ra(list_a);
	sort->moves++;
}

void	ft_moves(t_list **list_a, t_list **list_b, t_sort *sort)
{
	t_list	*ptr;
	int		temp;

	ptr = *list_b;
	while (ptr->data != sort->max)
	{
		temp = ptr->data;
		if (sort->moves != 0)
		{
			ptr = ft_lstlast(*list_a);
			if (temp > ptr->data)
			{
				pa(list_a, list_b);
				ra(list_a);
				sort->moves++;
			}
			else
				ft_rotate(list_b, sort->max);
		}
		else
			ft_anex(list_a, list_b, sort);
		ptr = *list_b;
	}
	if (ptr->data == sort->max)
		pa(list_a, list_b);
}

void	ft_push_to_a(t_list **list_a, t_list **list_b, t_sort *sort)
{
	int		i;

	i = sort->tab_size - 1;
	sort->moves = 0;
	while (ft_lst_size(*list_b) || sort->moves != 0)
	{
		sort->max = sort->tab[i];
		if (ft_check(list_b, sort->max))
			ft_moves(list_a, list_b, sort);
		else
		{
			rra(list_a);
			sort->moves--;
		}
		i--;
	}
}
