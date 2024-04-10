/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 23:01:02 by qdo               #+#    #+#             */
/*   Updated: 2024/04/06 21:04:25 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	rra(int *a, int check)
{
	int	i;
	int	temp;

	check = 1;
	if (*a <= 1)
		return ;
	i = *a;
	temp = a[i];
	while (i >= 2)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[1] = temp;
	return ;
}

void	rrb(int *b, int check)
{
	int	i;
	int	temp;

	check = 1;
	if (b[0] <= 1)
		return ;
	i = b[0];
	temp = b[i];
	while (i >= 2)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[1] = temp;
	return ;
}

void	rrr(int *a, int *b)
{
	rra(a, 0);
	rrb(b, 0);
}
