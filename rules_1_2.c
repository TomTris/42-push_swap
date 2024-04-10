/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:01:45 by qdo               #+#    #+#             */
/*   Updated: 2024/04/07 23:02:47 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	sa_1(int *a, int check)
{
	int	tem;

	if (check == 1)
		ft_printf("sa\n");
	if (*a <= 1)
		return ;
	tem = a[1];
	a[1] = a[2];
	a[2] = tem;
	return ;
}

void	sb_1(int *b, int check)
{
	int	tem;

	if (check == 1)
		ft_printf("sb\n");
	if (*b <= 1)
		return ;
	tem = b[1];
	b[1] = b[2];
	b[2] = tem;
	return ;
}

void	ss_1(int *a, int *b)
{
	ft_printf("ss\n");
	sa(a, 0);
	sb(b, 0);
}

void	pa_1(int *a, int *b)
{
	int	i;

	ft_printf("pa\n");
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

void	pb_1(int *a, int *b)
{
	int	i;

	ft_printf("pb\n");
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
