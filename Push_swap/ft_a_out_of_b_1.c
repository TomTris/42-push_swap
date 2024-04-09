/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_out_of_b_1.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:19:25 by qdo               #+#    #+#             */
/*   Updated: 2024/04/08 14:43:21 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

int	ft_is_a_out_of_b_a_max_1(int *a, int *b, int i_a)
{
	int	check;
	int	i;

	check = 1;
	i = 0;
	while (++i <= b[0])
	{
		if (a[i_a] < b[i])
		{
			check = 0;
			break ;
		}
	}
	return (check);
}

int	ft_is_a_out_of_b_a_min_1(int *a, int *b, int i_a)
{
	int	i;
	int	check;

	check = 1;
	i = 0;
	while (++i <= b[0])
	{
		if (a[i_a] > b[i])
		{
			check = 0;
			break ;
		}
	}
	return (check);
}

int	ft_a_out_of_b_1(int *a, int *b, int i_a)
{
	if (ft_is_a_out_of_b_a_max_1(a, b, i_a) == 1)
		return (2);
	if (ft_is_a_out_of_b_a_min_1(a, b, i_a) == 1)
		return (1);
	return (0);
}
