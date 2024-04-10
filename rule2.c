/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:06:41 by qdo               #+#    #+#             */
/*   Updated: 2024/04/06 21:04:04 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	ra(int *a, int check)
{
	int	temp;
	int	i;

	check = 1;
	i = 1;
	if (*a <= 1)
		return ;
	temp = a[1];
	while (i < *a)
	{
		a[i] = a [i + 1];
		i++;
	}
	a[i] = temp;
	return ;
}

void	rb(int *b, int check)
{
	int	temp;
	int	i;

	check = 1;
	i = 1;
	if (b[0] <= 1)
		return ;
	temp = b[1];
	while (i < b[0])
	{
		b[i] = b[i + 1];
		i++;
	}
	b[i] = temp;
	return ;
}

void	rr(int *a, int *b)
{
	ra (a, 0);
	rb (b, 0);
}
