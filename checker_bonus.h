/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 21:34:34 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/09 23:03:39 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_BONUS_H
# define CHECKER_BONUS_H

# include "push_swap.h"

char		*get_next_line(int fd);
int			ft_check_sort(t_list *list);
void		ft_moves(t_list **list_a, t_list **list_b, char *moves);
void		ft_pb(t_list **list_a, t_list **list_b);
void		ft_sa(t_list **list_a);
void		ft_sb(t_list **list_b);
void		ft_ss(t_list **list_a, t_list **list_b);
void		ft_ra(t_list **list_a);
void		ft_pa(t_list **list_a, t_list **list_b);
void		ft_ra(t_list **list_a);
void		ft_rb(t_list **list_a);
void		ft_rr(t_list **list_a, t_list **list_b);
void		ft_rra(t_list **list_a);
void		ft_rrb(t_list **list_b);
void		ft_rrr(t_list **list_a, t_list **list_b);

#endif