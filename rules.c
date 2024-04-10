/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 18:39:44 by qdo               #+#    #+#             */
/*   Updated: 2024/04/08 12:06:26 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	ft_write_rules(int check, int *a, int *b)
{
	if (check == 1)
		sa(a, 1);
	else if (check == 2)
		sb(b, 1);
	else if (check == 3)
		ss(a, b);
	else if (check == 4)
		pa(a, b);
	else if (check == 5)
		pb(a, b);
	else if (check == 6)
		ra(a, 1);
	else if (check == 7)
		rb(b, 1);
	else if (check == 8)
		rr(a, b);
	else if (check == 9)
		rra(a, 1);
	else if (check == 10)
		rrb(b, 1);
	else if (check == 11)
		rrr(a, b);
}

t_to_return	ft_rules(int check, int *a, int *b)
{
	static t_to_return	save;

	if (check == 0)
	{
		save.id = 0;
		save.steps = (int *)malloc(a[0] * a[0] * sizeof(int));
		if (save.steps == 0)
		{
			save.id = -1;
			return (save);
		}
		save.steps[0] = 0;
	}
	if (1 <= check && check <= 11)
	{
		(save.steps[0])++;
		(save.steps)[(save.steps)[0]] = check;
		ft_write_rules(check, a, b);
	}
	return (save);
}
