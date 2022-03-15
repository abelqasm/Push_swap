/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:09:58 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:02 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

t_list	*ft_lstlast(t_list *list)
{
	t_list	*ptr;

	ptr = list;
	if (!ptr)
		return (NULL);
	while (ptr->next)
		ptr = ptr->next;
	return (ptr);
}
