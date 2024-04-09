/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_a1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 18:21:57 by qdo               #+#    #+#             */
/*   Updated: 2024/04/09 08:57:26 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

int	ft_check(int argc, const char **argv)
{
	int	i;
	int	k;
	int	check_char;
	int	check_nbr;

	k = 0;
	while (++k < argc)
	{
		if (argv[k] == 0 || argv[k][0] == 0)
			return (0);
		i = -1;
		check_nbr = 0;
		while (argv[k][++i] != 0)
		{
			if (!((argv[k][i] >= 9 && argv[k][i] <= 13) || (argv[k][i] == ' ')
			|| ('0' <= argv[k][i] && argv[k][i] <= '9')
				|| (argv[k][i] == '+') || (argv[k][i] == '-')))
				return (0);
			if ('0' <= argv[k][i] && argv[k][i] <= '9')
				check_nbr = 1;
		}
		if (check_nbr == 0)
			return (0);
	}
	return (1);
}

int	*ft_join(int *a, int b)
{
	int	i;
	int	*ret;

	ret = malloc((a[0] + 2) * sizeof(int));
	if (!ret)
		return (0);
	ret[0] = a[0] + 1;
	i = 1;
	while (i <= a[0])
	{
		ret[i] = a[i];
		i++;
	}
	ret[i] = b;
	return (free(a), ret);
}

static int	ft_cut(const char *str, int *size, int *check)
{
	int		sign;
	long	nbr;

	sign = 1;
	nbr = 0;
	if (str[*size] == '+' || str[*size] == '-')
	{
		if (str[*size] == '-')
			sign *= -1;
		(*size)++;
	}
	while (str[*size] >= '0' && str[*size] <= '9')
	{
		nbr = (str[*size] - '0') + (nbr * 10);
		if ((nbr > 2147483647 && sign == 1) || (nbr > 2147483648 && sign == -1))
		{
			*check = 0;
			return (0);
		}
		(*size)++;
		*check = 1;
	}
	while ((9 <= str[*size] && str[*size] <= 13) || (str[*size] == ' '))
		(*size)++;
	return ((int) sign * nbr);
}

int	*ft_make(int *ret, int argc, const char **argv)
{
	int	size;
	int	i;
	int	check;
	int	cut_nbr;

	i = 0;
	while (++i < argc)
	{
		size = 0;
		while ((9 <= argv[i][size] && argv[i][size] <= 13)
			|| (argv[i][size] == ' '))
			size++;
		while (argv[i][size] != 0)
		{
			check = 0;
			cut_nbr = ft_cut(argv[i], &size, &check);
			if (check == 0)
				return (NULL);
			ret = ft_join(ret, cut_nbr);
			if (ret == 0)
				return (0);
		}
	}
	i = -1;
	return (ret);
}

int	*ft_make_a(int argc, const char **argv, int a_0)
{
	int	check;
	int	*ret;

	if (a_0 != 0)
	{
		ret = (int *)malloc((a_0 + 1) * sizeof(int));
		if (ret == 0)
			return (0);
		ret[0] = 0;
		return (ret);
	}
	ret = (int *)malloc(1 * sizeof(int));
	if (ret == 0)
		return (0);
	ret[0] = 0;
	if (argc == 1)
		return (ret);
	if (ft_check(argc, argv) != 1)
		return (free(ret), write(2, "Error\n", 6), NULL);
	ret = ft_make(ret, argc, argv);
	if (ret == 0)
		return (free(ret), write(2, "Error\n", 6), NULL);
	if (check_dup(ret) == 0)
		return (free(ret), write(2, "Error\n", 6), NULL);
	return (ret);
}
