/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 22:58:11 by qdo               #+#    #+#             */
/*   Updated: 2024/04/09 09:01:16 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

int	check_sorted_a(int *a)
{
	int	i;

	i = 0;
	while (++i < a[0])
		if (a[i] >= a[i + 1])
			return (0);
	return (1);
}

void	ft_do_print(int *a, int *b, t_to_return ret)
{
	int	i;

	i = 0;
	while (++i <= ret.steps[0])
		ft_write_rules_1(ret.steps[i], a, b);
}

int	ft_only_start(int *a_ori, int *b_ori)
{
	int	*a;
	int	*b;

	a = ft_dup(a_ori, a_ori[0] + 1);
	if (a == 0)
		return (0);
	b = ft_dup(b_ori, a_ori[0] + 1);
	if (b == 0)
		return (free(a), 0);
	while (a[0] > 3)
		ft_rules(5, a, b);
	ft_argc_1_3(a);
	if (ft_start(a, b) == 0)
		return (free(a), free(b), 0);
	return (free(a), free(b), 1);
}
