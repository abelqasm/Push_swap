/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_check_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:35:49 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/09 22:53:34 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	ft_check(t_list **list, int index)
{
	t_list	*ptr;
	int		i;

	i = 0;
	ptr = *list;
	while (ptr)
	{
		i++;
		if (ptr->data == index)
			return (i);
		ptr = ptr->next;
	}
	return (0);
}
