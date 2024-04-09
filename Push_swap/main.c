/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:41:00 by qdo               #+#    #+#             */
/*   Updated: 2024/04/08 19:10:25 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

int	*ft_dup(int *to_dup, int size)
{
	int	*ret;
	int	i;

	ret = (int *)malloc(size * sizeof(int));
	if (ret == 0)
		return (0);
	i = -1;
	while (++i < size)
		ret[i] = to_dup[i];
	return (ret);
}

int	ft_go_for_it(int *a_ori, int *b_ori, int cnt_check, int i)
{
	int	*a;
	int	*b;

	a = ft_dup(a_ori, a_ori[0] + 1);
	if (a == 0)
		return (0);
	b = ft_dup(b_ori, a_ori[0] + 1);
	if (b == 0)
		return (free(a), 0);
	if (ft_start_1(a, b, cnt_check) == 0)
		return (free(a), free(b), 0);
	while (a[0] > 0)
		ft_rules(5, a, b);
	if (cnt_check > a[0] + b[0] - cnt_check)
		while (++i <= a[0] + b[0] - cnt_check)
			ft_rules(7, a, b);
	else
		while (++i <= cnt_check)
			ft_rules(11, a, b);
	i = 0;
	while (++i <= cnt_check)
		ft_rules(4, a, b);
	if (ft_start(a, b) == 0)
		return (free(a), free(b), 0);
	return (free(a), free(b), 1);
}

int	main2(int *a, int *b, t_to_return *ret)
{
	int	cnt_check;

	cnt_check = 1;
	while (++cnt_check <= a[0])
	{
		ret[1] = ft_rules(0, a, 0);
		if (ret[1].id == -1)
			return (free(a), free(b), free(ret[0].steps), free(ret), 0);
		if (ft_go_for_it(a, b, cnt_check++, 0) == 0)
			return (free(a), free(b), free(ret[0].steps),
				free(ret[1].steps), free(ret), 0);
		ret[1] = ft_rules(-1, 0, 0);
		if (ret[0].steps[0] <= ret[1].steps[0])
			free(ret[1].steps);
		else
		{
			free(ret[0].steps);
			ret[0].steps = ret[1].steps;
		}
	}
	ft_do_print(a, b, ret[0]);
	return (free(a), free(b), free(ret[0].steps), free(ret), 1);
}

int	main1(int argc, const char *argv[])
{
	int			*a;
	int			*b;
	t_to_return	*ret;
	int			least_step;

	a = ft_make_a(argc, argv, 0);
	if (a == 0)
		return (0);
	if (check_sorted_a(a) != 0)
		return (free(a), 1);
	if (a[0] <= 3)
		return (ft_argc_1_3_1(a), free(a), 1);
	b = ft_make_a(argc, 0, a[0]);
	if (b == 0)
		return (free(a), 0);
	ret = (t_to_return *)malloc((2) * sizeof(t_to_return));
	ret[0] = ft_rules(0, a, 0);
	if (ret[0].id == -1)
		return (free(a), free(b), free(ret), 0);
	if (ft_only_start(a, b) == 0)
		return (free(a), free(b), free(ret[0].steps), free(ret), 0);
	ret[0] = ft_rules(-1, 0, 0);
	return (main2(a, b, ret));
}

int	main(int argc, const char *argv[])
{
	main1(argc, argv);
}
