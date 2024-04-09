/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:12:31 by qdo               #+#    #+#             */
/*   Updated: 2024/04/06 16:52:48 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	ft_do_13_1(int *a, int *b, t_saved save_i)
{
	while ((save_i.a_do) != 0 && (save_i.b_do) != 0)
	{
		ft_rules(8, a, b);
		save_i.a_do--;
		save_i.b_do--;
	}
	while (save_i.a_do-- > 0)
		ft_rules(6, a, b);
	while (save_i.b_do-- > 0)
		ft_rules(7, a, b);
	ft_rules(5, a, b);
}

void	ft_do_14_1(int *a, int *b, t_saved save_i)
{
	while (save_i.a_do-- > 0)
		ft_rules(6, a, b);
	while (save_i.b_do-- > 0)
		ft_rules(10, a, b);
	ft_rules(5, a, b);
}

void	ft_do_23_1(int *a, int *b, t_saved save_i)
{
	while (save_i.a_do-- > 0)
		ft_rules(9, a, b);
	while (save_i.b_do-- > 0)
		ft_rules(7, a, b);
	ft_rules(5, a, b);
}

void	ft_do_24_1(int *a, int *b, t_saved save_i)
{
	while ((save_i.a_do) != 0 && (save_i.b_do) != 0)
	{
		ft_rules(11, a, b);
		save_i.a_do--;
		save_i.b_do--;
	}
	while (save_i.a_do-- > 0)
		ft_rules(9, a, b);
	while (save_i.b_do-- > 0)
		ft_rules(10, a, b);
	ft_rules(5, a, b);
}

void	ft_do_1(int *a, int *b, t_saved save_i)
{
	if (save_i.paar == 13)
		return (ft_do_13_1(a, b, save_i));
	if (save_i.paar == 14)
		return (ft_do_14_1(a, b, save_i));
	if (save_i.paar == 23)
		return (ft_do_23_1(a, b, save_i));
	return (ft_do_24_1(a, b, save_i));
}
