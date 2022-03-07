/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:28:03 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/07 01:23:34 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ft_check_sort(t_list **list)
{
	t_list	*ptr;

	ptr = *list;
	while (ptr)
	{
		if (ptr->next && ptr->data > ptr->next->data)
			return ;
		ptr = ptr->next;
	}
	exit(0);
}

void	ft_lst_init(int argc, char **argv, t_list **list)
{
	t_list	*node;
	int		i;

	i = 1;
	while (i < argc)
	{
		if (ft_check(list, ft_atoi(argv[i])) || ft_check_number(argv[i]))
		{
			write(1, "Error\n", 6);
			exit(0);
		}
		node = ft_lstnew(ft_atoi(argv[i]));
		ft_add_lst(list, node);
		i++;
	}
	ft_check_sort(list);
}
