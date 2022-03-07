/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:35:36 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/07 01:28:32 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	char	*moves;

	if (argc < 3)
	{
		write(1, "OK\n", 3);
		return (0);
	}
	list_b = NULL;
	ft_lst_init(argc, argv, &list_a);
	moves = get_next_line(0);
	while (moves)
	{
		ft_moves(&list_a, &list_b, moves);
		free(moves);
		moves = get_next_line(0);
	}
	if (ft_check_sort(list_a) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
