/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_i_of_b.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:20:25 by qdo               #+#    #+#             */
/*   Updated: 2024/04/06 08:12:38 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

//find a[i] max
int	ft_a_i_of_b_b_max(int *a)
{
	int	i;
	int	find;

	i = 1;
	find = 1;
	while (++i <= a[0])
		if (a[i] > a[find])
			find = i;
	return (find);
}

int	ft_a_i_of_b_b_min(int *a)
{
	int	i;
	int	find;

	i = 1;
	find = 1;
	while (++i <= a[0])
		if (a[i] < a[find])
			find = i;
	if (find - 1 == 0)
		return (a[0]);
	return (find - 1);
}

int	ft_a_i_of_b_b_middle(int *a, int *b, int i_b)
{
	int	i;

	i = 0;
	while (++i < a[0])
		if (b[i_b] > a[i] && b[i_b] < a[i + 1])
			return (i);
	return (a[0]);
}

int	ft_a_i_of_b_i(int *a, int *b, int i_b)
{
	int	b_out_of_a;

	b_out_of_a = ft_b_out_of_a(a, b, i_b);
	if (b_out_of_a == 1)
		return (ft_a_i_of_b_b_min(a));
	if (b_out_of_a == 2)
		return (ft_a_i_of_b_b_max(a));
	return (ft_a_i_of_b_b_middle(a, b, i_b));
}
