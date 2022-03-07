/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 00:12:05 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/07 01:35:37 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	cases_for_a(int *b, t_list **list_a)
{
	if (b[0] > b[1] && b[0] < b[2] && b[1] < b[2])
	{
		sa(list_a);
		return ;
	}
	else if (b[0] > b[1] && b[0] > b[2] && b[1] > b[2])
	{
		sa(list_a);
		rra(list_a);
		return ;
	}
	else if (b[0] > b[1] && b[0] > b[2] && b[1] < b[2])
		ra(list_a);
	else if (b[0] < b[1] && b[0] < b[2] && b[1] > b[2])
	{
		sa(list_a);
		ra(list_a);
	}
	else if (b[0] < b[1] && b[0] > b[2] && b[1] > b[2])
		rra(list_a);
}

void	cases_for_b(int *b, t_list **list_b)
{
	if (b[0] < b[1] && b[0] > b[2] && b[1] > b[2])
	{
		sb(list_b);
		return ;
	}
	else if (b[0] < b[1] && b[0] < b[2] && b[1] < b[2])
	{
		sb(list_b);
		rrb(list_b);
		return ;
	}
	else if (b[0] < b[1] && b[0] < b[2] && b[1] > b[2])
		rb(list_b);
	else if (b[0] > b[1] && b[0] > b[2] && b[1] < b[2])
	{
		sb(list_b);
		rb(list_b);
	}
	else if (b[0] > b[1] && b[0] < b[2] && b[1] < b[2])
		rrb(list_b);
}

void	sort3_for_a(t_list **list)
{
	t_list	*ptr;
	int		*b;
	int		i;

	ptr = *list;
	i = 0;
	b = malloc(sizeof(int) * 3);
	while (i < 3)
	{
		b[i] = ptr->data;
		ptr = ptr->next;
		i++;
	}
	cases_for_a(b, list);
	free(b);
}

void	sort3_for_b(t_list **list)
{
	t_list	*ptr;
	int		*b;
	int		i;

	ptr = *list;
	i = 0;
	b = malloc(sizeof(int) * 3);
	while (i < 3)
	{
		b[i] = ptr->data;
		ptr = ptr->next;
		i++;
	}
	cases_for_b(b, list);
	free(b);
}
