/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sort_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:39:51 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:54:06 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/checker_bonus.h"

int	ft_check_sort(t_list *list)
{
	t_list	*ptr;

	ptr = list;
	while (ptr->next)
	{
		if (ptr->data > ptr->next->data)
			return (0);
		ptr = ptr->next;
	}
	return (1);
}
