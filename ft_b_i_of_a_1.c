/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_b_i_of_a_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:20:25 by qdo               #+#    #+#             */
/*   Updated: 2024/04/07 23:00:47 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

int	ft_b_i_of_a_a_max_1(int *b)
{
	int	i;
	int	find;

	i = 1;
	find = 1;
	while (++i <= b[0])
		if (b[i] > b[find])
			find = i;
	if (find - 1 == 0)
		return (b[0]);
	return (find - 1);
}

int	ft_b_i_of_a_a_min_1(int *b)
{
	int	i;
	int	find;

	i = 1;
	find = 1;
	while (++i <= b[0])
		if (b[i] < b[find])
			find = i;
	return (find);
}

int	ft_b_i_of_a_a_middle_1(int *a, int *b, int i_a)
{
	int	i;

	i = 0;
	while (++i < b[0])
		if (a[i_a] < b[i] && a[i_a] > b[i + 1])
			return (i);
	return (b[0]);
}

int	ft_b_i_of_a_i_1(int *a, int *b, int i_a)
{
	int	a_out_of_b;

	a_out_of_b = ft_a_out_of_b_1(a, b, i_a);
	if (a_out_of_b == 1)
		return (ft_b_i_of_a_a_min_1(b));
	if (a_out_of_b == 2)
		return (ft_b_i_of_a_a_max_1(b));
	return (ft_b_i_of_a_a_middle_1(a, b, i_a));
}
