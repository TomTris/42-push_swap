/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stepcnt_n_paar_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:39:20 by qdo               #+#    #+#             */
/*   Updated: 2024/04/07 23:03:50 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

t_saved	ft_saved_1(int paarxx, int a_dox, int b_dox)
{
	t_saved	ret;

	ret.paar = paarxx;
	ret.a_do = a_dox;
	ret.b_do = b_dox;
	ret.step = a_dox + b_dox;
	return (ret);
}

t_saved	ft_smallest_1(int ra_cnt, int rra_cnt, int rb_cnt, int rrb_cnt)
{
	int	paar13;
	int	paar14;
	int	paar23;
	int	paar24;

	if (ra_cnt < rb_cnt)
		paar13 = rb_cnt;
	else
		paar13 = ra_cnt;
	paar14 = ra_cnt + rrb_cnt;
	paar23 = rra_cnt + rb_cnt;
	if (rra_cnt < rrb_cnt)
		paar24 = rrb_cnt;
	else
		paar24 = rra_cnt;
	if (paar14 <= paar13 && paar14 <= paar23 && paar14 <= paar24)
		return (ft_saved_1(14, ra_cnt, rrb_cnt));
	if (paar13 <= paar14 && paar13 <= paar23 && paar13 <= paar24)
		return (ft_saved_1(13, ra_cnt, rb_cnt));
	if (paar23 <= paar13 && paar23 <= paar14 && paar23 <= paar24)
		return (ft_saved_1(23, rra_cnt, rb_cnt));
	return (ft_saved_1(24, rra_cnt, rrb_cnt));
}

t_saved	ft_step_n_paar_1(int *a, int *b, int a_i, int b_i_of_a_i)
{
	int		ra_cnt;
	int		rra_cnt;
	int		rb_cnt;
	int		rrb_cnt;

	ra_cnt = a_i - 1;
	rra_cnt = a[0] - a_i + 1;
	rb_cnt = b_i_of_a_i;
	rrb_cnt = b[0] - b_i_of_a_i;
	return (ft_smallest_1(ra_cnt, rra_cnt, rb_cnt, rrb_cnt));
}
