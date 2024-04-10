/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 11:02:25 by qdo               #+#    #+#             */
/*   Updated: 2024/04/06 07:23:54 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

void	*ft_calloc(size_t count)
{
	t_saved	*save;
	size_t	n;

	save = (t_saved *)malloc((count) * sizeof(t_saved));
	if (save == 0)
		return (NULL);
	save[0].paar = 0;
	n = -1;
	while (++n < count)
		(save[n]).paar = 0;
	return (save);
}

// int	main(void)
// {
// 		printf("%s\n",ft_calloc(10,0));
// 	return (0);
// }
