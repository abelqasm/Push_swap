/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ls.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:11:03 by abelqasm          #+#    #+#             */
/*   Updated: 2022/02/27 18:11:10 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_print_ls(t_list *list)
{
	t_list	*ptr;

	ptr = list;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->data);
		ptr = ptr->next ;
	}
}
