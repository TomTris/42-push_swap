/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:18:40 by qdo               #+#    #+#             */
/*   Updated: 2024/04/07 14:11:28 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	ft_decide(int *a, int *b, t_saved *save)
{
	int	i;
	int	least_step;

	least_step = save[1].step;
	i = 1;
	while (++i <= save[0].paar)
		if (least_step > save[i].step)
			least_step = save[i].step;
	i = 0;
	while (++i <= save[0].paar)
	{
		if (least_step == save[i].step)
		{
			ft_do(a, b, save[i]);
			break ;
		}
	}
	save[0].paar = 0;
}

void	ft_sort_a(int *a)
{
	int	i;
	int	find;

	i = 1;
	find = 1;
	while (++i <= a[0])
		if (a[find] > a[i])
			find = i;
	if ((find - 1) < a[0] - find + 1)
	{
		i = find - 1;
		while (i-- > 0)
			ft_rules(6, a, 0);
	}
	else
	{
		i = a[0] - find + 1;
		while (i-- > 0)
			ft_rules(9, a, 0);
	}
}

int	ft_start(int *a, int *b)
{
	int		i_b;
	t_saved	*save;

	save = ft_calloc(a[0] + b[0] + 10);
	if (save == 0)
		return (0);
	i_b = 0;
	save[0].paar = 0;
	while (++i_b <= b[0])
	{
		save[i_b] = ft_step_n_paar(a, b, i_b, ft_a_i_of_b_i(a, b, i_b));
		(save[0].paar)++;
		if (i_b == b[0])
		{
			ft_decide(a, b, save);
			i_b = 0;
		}
	}
	free(save);
	ft_sort_a(a);
	return (1);
}
