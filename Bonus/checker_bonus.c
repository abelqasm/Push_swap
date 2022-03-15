/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:35:36 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:58 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/checker_bonus.h"

static void	ft_sort(t_list *list)
{
	if (ft_check_sort(list) == 1)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}

int	main(int argc, char **argv)
{
	t_list	*list_a;
	t_list	*list_b;
	char	*moves;
	int		check;

	if (argc < 2)
		return (0);
	list_b = NULL;
	check = ft_lst_init(argc, argv, &list_a);
	if (check == 0)
	{
		write(1, "OK\n", 3);
		return (0);
	}
	moves = get_next_line(0);
	while (moves)
	{
		ft_moves(&list_a, &list_b, moves);
		free(moves);
		moves = get_next_line(0);
	}
	ft_sort(list_a);
	return (0);
}
