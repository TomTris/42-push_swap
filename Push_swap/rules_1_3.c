/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_1_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 23:01:57 by qdo               #+#    #+#             */
/*   Updated: 2024/04/07 23:02:42 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	ra_1(int *a, int check)
{
	int	temp;
	int	i;

	if (check == 1)
		ft_printf("ra\n");
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

void	rb_1(int *b, int check)
{
	int	temp;
	int	i;

	if (check == 1)
		ft_printf("rb\n");
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

void	rr_1(int *a, int *b)
{
	ft_printf("rr\n");
	ra (a, 0);
	rb (b, 0);
}
