/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_to_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 23:58:25 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:25 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_push_to_b(t_list **list_a, t_list **list_b, t_sort *sort)
{
	t_list	*ptr;
	int		list_size;

	list_size = ft_lst_size(*list_a) - (sort->chunk * 2);
	sort->pos = sort->tab_size / 2 + (sort->chunk * sort->total) - 1;
	sort->neg = sort->tab_size / 2 - (sort->chunk * sort->total) - 1;
	if (sort->neg < 0)
		sort->neg = 0;
	if (sort->pos >= sort->tab_size)
		sort->pos = sort->tab_size - 1;
	ptr = *list_a;
	while (ft_lst_size(*list_a) > list_size && ft_lst_size(*list_a))
	{
		if (ptr->data >= sort->tab[sort->neg]
			&& ptr->data <= sort->tab[sort->pos])
		{
			pb(list_a, list_b);
			ptr = *list_b;
			if (ptr->data < sort->tab[sort->middle])
				rb(list_b);
		}
		else
			ra(list_a);
		ptr = *list_a;
	}
}
