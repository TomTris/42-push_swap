/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rule1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:59:16 by qdo               #+#    #+#             */
/*   Updated: 2024/04/07 11:45:06 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	sa(int *a, int check)
{
	int	tem;

	check = 1;
	if (*a <= 1)
		return ;
	tem = a[1];
	a[1] = a[2];
	a[2] = tem;
	return ;
}

void	sb(int *b, int check)
{
	int	tem;

	check = 1;
	if (*b <= 1)
		return ;
	tem = b[1];
	b[1] = b[2];
	b[2] = tem;
	return ;
}

void	ss(int *a, int *b)
{
	sa(a, 0);
	sb(b, 0);
}

void	pa(int *a, int *b)
{
	int	i;

	if (b[0] == 0)
		return ;
	(a[0])++;
	i = a[0];
	while (i >= 2)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[1] = b[1];
	i = 1;
	while (i < b[0])
	{
		b[i] = b[i + 1];
		i++;
	}
	(b[0])--;
	return ;
}

void	pb(int *a, int *b)
{
	int	i;

	if (a[0] == 0)
		return ;
	(b[0])++;
	i = b[0];
	while (i >= 2)
	{
		b[i] = b[i - 1];
		i--;
	}
	b[1] = a[1];
	i = 1;
	while (i < a[0])
	{
		a[i] = a[i + 1];
		i++;
	}
	a[0] = a[0] - 1;
	return ;
}
