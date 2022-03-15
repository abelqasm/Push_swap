/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_lst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:09:26 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:12 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_add_lst(t_list **list, t_list *new)
{
	t_list	*ptr;

	if (*list == NULL)
		*list = new;
	else
	{
		ptr = ft_lstlast(*list);
		ptr->next = new;
	}
}
