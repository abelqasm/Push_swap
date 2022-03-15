/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_size.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:11:48 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:05 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

int	ft_lst_size(t_list *list)
{
	t_list	*ptr;
	int		i;

	ptr = list;
	i = 0;
	while (ptr != NULL)
	{
		i++;
		ptr = ptr->next ;
	}
	return (i);
}
