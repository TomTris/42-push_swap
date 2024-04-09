/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_a_out_of_b.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 12:19:25 by qdo               #+#    #+#             */
/*   Updated: 2024/04/06 07:14:09 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

int	ft_is_b_out_of_a_b_max(int *a, int *b, int i_b)
{
	int	i;

	i = 0;
	while (++i <= a[0])
		if (b[i_b] < a[i])
			return (0);
	return (1);
}

int	ft_is_b_out_of_a_b_min(int *a, int *b, int i_b)
{
	int	i;

	i = 0;
	while (++i <= a[0])
		if (b[i_b] > a[i])
			return (0);
	return (1);
}

int	ft_b_out_of_a(int *a, int *b, int i_b)
{
	if (ft_is_b_out_of_a_b_max(a, b, i_b) == 1)
		return (2);
	return (ft_is_b_out_of_a_b_min(a, b, i_b));
}
