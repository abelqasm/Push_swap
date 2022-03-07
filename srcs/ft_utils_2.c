/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 18:38:18 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/06 18:59:48 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_change_a_1(t_list **list)
{
	ra(list);
	sa(list);
	rra(list);
}

void	ft_change_a_2(t_list **list)
{
	rra(list);
	sa(list);
	ra(list);
}

void	ft_change_b_1(t_list **list)
{
	rb(list);
	sb(list);
	rrb(list);
}

void	ft_change_b_2(t_list **list)
{
	rrb(list);
	sb(list);
	rb(list);
}
