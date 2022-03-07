/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 17:15:22 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/07 01:41:11 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	t_sort	*sort;

	if (argc < 3)
		return (0);
	sort = malloc(sizeof(t_sort));
	if (!sort)
		return (0);
	list_b = NULL;
	ft_lst_init(argc, argv, &list_a);
	sort->tab = ft_bubble_sort(list_a, 0, 0);
	ft_push(&list_a, &list_b, sort);
	return (0);
}
