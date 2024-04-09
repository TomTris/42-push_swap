/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:59:18 by qdo               #+#    #+#             */
/*   Updated: 2024/04/08 12:06:35 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	ft_write_rules_1(int check, int *a, int *b)
{
	if (check == 1)
		sa_1(a, 1);
	else if (check == 2)
		sb_1(b, 1);
	else if (check == 3)
		ss_1(a, b);
	else if (check == 4)
		pa_1(a, b);
	else if (check == 5)
		pb_1(a, b);
	else if (check == 6)
		ra_1(a, 1);
	else if (check == 7)
		rb_1(b, 1);
	else if (check == 8)
		rr_1(a, b);
	else if (check == 9)
		rra_1(a, 1);
	else if (check == 10)
		rrb_1(b, 1);
	else if (check == 11)
		rrr_1(a, b);
}

void	rra_1(int *a, int check)
{
	int	i;
	int	temp;

	if (check == 1)
		ft_printf("rra\n");
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

void	rrb_1(int *b, int check)
{
	int	i;
	int	temp;

	if (check == 1)
		ft_printf("rrb\n");
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

void	rrr_1(int *a, int *b)
{
	ft_printf("rrr\n");
	rra(a, 0);
	rrb(b, 0);
}
