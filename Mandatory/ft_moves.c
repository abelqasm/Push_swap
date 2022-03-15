/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_moves.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 22:28:21 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:21 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_do_moves_reverse(t_list **list_a, t_list **list_b, char *moves)
{
	if (moves[0] == 'r' && moves[1] == 'r' && moves[2] == 'a')
		ft_rra(list_a);
	if (moves[0] == 'r' && moves[1] == 'r' && moves[2] == 'b')
		ft_rrb(list_b);
	if (moves[0] == 'r' && moves[1] == 'r' && moves[2] == 'r')
		ft_rrr(list_a, list_b);
}

void	ft_do_moves(t_list **list_a, t_list **list_b, char *moves)
{
	if (moves[0] == 'p' && moves[1] == 'a')
		ft_pa(list_a, list_b);
	if (moves[0] == 'p' && moves[1] == 'b')
		ft_pb(list_a, list_b);
	if (moves[0] == 's' && moves[1] == 'a')
		ft_sa(list_a);
	if (moves[0] == 's' && moves[1] == 'b')
		ft_sb(list_b);
	if (moves[0] == 's' && moves[1] == 's')
		ft_ss(list_a, list_b);
	if (moves[0] == 'r' && moves[1] == 'a')
		ft_ra(list_a);
	if (moves[0] == 'r' && moves[1] == 'b')
		ft_rb(list_b);
	if (moves[0] == 'r' && moves[1] == 'r')
		ft_rr(list_a, list_b);
}

void	ft_moves(t_list **list_a, t_list **list_b, char *moves)
{
	if (ft_strlen_moves(moves) == 3)
		ft_do_moves(list_a, list_b, moves);
	else
		ft_do_moves_reverse(list_a, list_b, moves);
}
