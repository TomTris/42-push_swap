/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 11:18:40 by qdo               #+#    #+#             */
/*   Updated: 2024/04/07 13:34:12 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	ft_decide_1(int *a, int *b, t_saved *save)
{
	int	i;
	int	least_step;

	least_step = save[1].step;
	i = 1;
	while (++i <= save[0].paar)
	{
		if (least_step > save[i].step)
			least_step = save[i].step;
	}
	i = 0;
	while (++i <= save[0].paar)
	{
		if (least_step == save[i].step)
		{
			ft_do_1(a, b, save[i]);
			break ;
		}
	}
	save[0].paar = 0;
}

int	ft_start_1(int *a, int *b, int cnt_check)
{
	int		i_a;
	t_saved	*save;
	int		cnt;

	cnt = 0;
	save = ft_calloc(a[0] + b[0] + 10);
	if (save == 0)
		return (0);
	i_a = 0;
	save[0].paar = 0;
	while (++i_a <= a[0])
	{
		save[i_a] = ft_step_n_paar_1(a, b, i_a, ft_b_i_of_a_i_1(a, b, i_a));
		(save[0].paar)++;
		if (i_a == a[0])
		{
			cnt++;
			ft_decide_1(a, b, save);
			i_a = 0;
			if (cnt == cnt_check)
				break ;
		}
	}
	free(save);
	return (1);
}
