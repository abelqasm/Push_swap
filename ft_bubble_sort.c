/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bubble_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:05:32 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/07 01:41:01 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_bubble_sort(t_list *list, int i, int j)
{
	int		*tab;
	t_list	*ptr;

	tab = malloc(sizeof(int) * ft_lst_size(list));
	if (!tab)
		return (NULL);
	ptr = list;
	i = -1;
	j = -1;
	while (++j < ft_lst_size(list))
	{
		tab[j] = ptr->data;
		ptr = ptr->next;
	}
	while (++i < ft_lst_size(list))
	{
		j = -1;
		while (++j + 1 < ft_lst_size(list))
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
		}
	}
	return (tab);
}
