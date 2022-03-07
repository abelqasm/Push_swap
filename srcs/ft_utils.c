/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelqasm <abelqasm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 18:08:38 by abelqasm          #+#    #+#             */
/*   Updated: 2022/03/06 23:11:13 by abelqasm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static long	check(unsigned long nb, int signe)
{
	if (nb <= 9223372036854775807)
		return (nb * signe);
	if (signe > 0)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	unsigned long	nb;
	int				signe;
	int				i;

	nb = 0;
	signe = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\f') || (str[i] == '\v')
		|| (str[i] == '\t') || (str[i] == '\r') || (str[i] == '\n'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			signe = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	nb = check(nb, signe);
	return (nb);
}

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_check_number(char *number)
{
	int	i;

	i = 0;
	if (number[i] == '-')
		i++;
	if (!number[i])
		return (1);
	while (number[i])
	{
		if (number[i] > '9' || number[i] < '0')
			return (1);
		i++;
	}
	return (0);
}

int	ft_strlen_moves(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
