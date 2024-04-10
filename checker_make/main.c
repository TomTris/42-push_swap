/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 11:22:49 by qdo               #+#    #+#             */
/*   Updated: 2024/04/08 13:22:10 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_cmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != 0)
	{
		if (str1[i] == str2[i])
			i++;
		else
			break ;
	}
	if (str1[i] == 0 && str2[i] == 0)
		return (1);
	return (0);
}

int	ft_str_to_cmp(int *a, int *b, char *str)
{
	if (ft_cmp(str, "sa\n") == 1)
		return (ft_write_rules(1, a, b), 1);
	else if (ft_cmp(str, "sb\n") == 1)
		return (ft_write_rules(2, a, b), 1);
	else if (ft_cmp(str, "ss\n") == 1)
		return (ft_write_rules(3, a, b), 1);
	else if (ft_cmp(str, "pa\n") == 1)
		return (ft_write_rules(4, a, b), 1);
	else if (ft_cmp(str, "pb\n") == 1)
		return (ft_write_rules(5, a, b), 1);
	else if (ft_cmp(str, "ra\n") == 1)
		return (ft_write_rules(6, a, b), 1);
	else if (ft_cmp(str, "rb\n") == 1)
		return (ft_write_rules(7, a, b), 1);
	else if (ft_cmp(str, "rr\n") == 1)
		return (ft_write_rules(8, a, b), 1);
	else if (ft_cmp(str, "rra\n") == 1)
		return (ft_write_rules(9, a, b), 1);
	else if (ft_cmp(str, "rrb\n") == 1)
		return (ft_write_rules(10, a, b), 1);
	else if (ft_cmp(str, "rrr\n") == 1)
		return (ft_write_rules(11, a, b), 1);
	return (0);
}

int	main2(char **buf_to_check, int *a, int *b)
{
	if (ft_str_to_cmp(a, b, *buf_to_check) == 0)
		return (free(a), free(b),
			free(*buf_to_check), write(1, "KO\n", 3), 1);
	else
	{
		free(*buf_to_check);
		*buf_to_check = get_next_line(0);
		return (2);
	}
}

int	main(int argc, const char **argv)
{
	int		*a;
	int		*b;
	int		i;
	char	*buf_to_check;

	a = ft_make_a(argc, argv, 0);
	if (a == 0)
		return (0);
	b = ft_make_a(argc, 0, a[0]);
	if (b == 0)
		return (free(a), 0);
	buf_to_check = get_next_line(0);
	while (buf_to_check != 0 && *buf_to_check != '\0')
		if (main2(&buf_to_check, a, b) != 2)
			return (1);
	if (b[0] != 0)
		return (free(a), free(b), free(buf_to_check), write(1, "KO\n", 3), 1);
	i = 0;
	while (++i < a[0])
		if (a[i] >= a[i + 1])
			return (free(a), free(b), write(1, "KO\n", 3), 1);
	return (free(a), free(b), write(1, "OK\n", 3), 1);
}
