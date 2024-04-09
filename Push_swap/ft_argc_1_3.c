/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argc_1_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 19:36:06 by qdo               #+#    #+#             */
/*   Updated: 2024/04/07 23:04:16 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

int	ft_case_of_a(int *a)
{
	if (a[0] == 0)
		return (0);
	if (a[0] == 1)
		return (4);
	if (a[0] == 2)
	{
		if (a[1] < a[2])
			return (4);
		else
			return (5);
	}
	if (a[a[0]] < a[1] && a[1] < a[2])
		return (1);
	if (a[a[0]] < a[2] && a[2] < a[1])
		return (2);
	if (a[1] < a[a[0]] && a[a[0]] < a[2])
		return (3);
	if (a[1] < a[2] && a[2] < a[a[0]])
		return (4);
	if (a[2] < a[1] && a[1] < a[a[0]])
		return (5);
	if (a[2] < a[a[0]] && a[a[0]] < a[1])
		return (6);
	return (100);
}

void	ft_argc_1_3_1(int *a)
{
	int	case_of_a;

	case_of_a = ft_case_of_a(a);
	if (case_of_a == 1)
		rra_1(a, 1);
	else if (case_of_a == 2)
	{
		sa_1(a, 1);
		rra_1(a, 1);
	}
	else if (case_of_a == 3)
	{
		rra_1(a, 1);
		sa_1(a, 1);
	}
	else if (case_of_a == 4)
		return ;
	else if (case_of_a == 5)
		sa_1(a, 1);
	else if (case_of_a == 6)
		ra_1(a, 1);
}

void	ft_argc_1_3(int *a)
{
	int	case_of_a;

	case_of_a = ft_case_of_a(a);
	if (case_of_a == 1)
		ft_rules(9, a, 0);
	else if (case_of_a == 2)
	{
		ft_rules(1, a, 0);
		ft_rules(9, a, 0);
	}
	else if (case_of_a == 3)
	{
		ft_rules(9, a, 0);
		ft_rules(1, a, 0);
	}
	else if (case_of_a == 4)
		return ;
	else if (case_of_a == 5)
		ft_rules(1, a, 0);
	else if (case_of_a == 6)
		ft_rules(9, a, 0);
}
