/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 18:28:03 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/15 22:53:08 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Includes/push_swap.h"

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static int	ft_check_sort(t_list **list)
{
	t_list	*ptr;

	ptr = *list;
	while (ptr)
	{
		if (ptr->next && ptr->data > ptr->next->data)
			return (1);
		ptr = ptr->next;
	}
	return (0);
}

int	ft_lst_init(int argc, char **argv, t_list **list)
{
	t_list	*node;
	int		i;
	int		j;
	char	**str;

	i = 1;
	while (i < argc)
	{
		j = 0;
		str = ft_split(argv[i], ' ');
		while (str[j])
		{
			if (ft_check(list, ft_atoi(str[j])) || ft_check_number(str[j]))
			{
				write(1, "Error\n", 6);
				exit(0);
			}
			node = ft_lstnew(ft_atoi(str[j]));
			ft_add_lst(list, node);
			j++;
		}
		ft_free(str);
		i++;
	}
	return (ft_check_sort(list));
}
