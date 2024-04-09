/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stepcnt_n_paar.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 13:39:20 by qdo               #+#    #+#             */
/*   Updated: 2024/04/06 15:15:49 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_swap.h"

t_saved	ft_saved(int paarxx, int a_dox, int b_dox)
{
	t_saved	ret;

	ret.paar = paarxx;
	ret.a_do = a_dox;
	ret.b_do = b_dox;
	ret.step = a_dox + b_dox;
	return (ret);
}

t_saved	ft_smallest(int ra_cnt, int rra_cnt, int rb_cnt, int rrb_cnt)
{
	int	paar13;
	int	paar14;
	int	paar23;
	int	paar24;

	paar13 = ra_cnt;
	if (ra_cnt < rb_cnt)
		paar13 = rb_cnt;
	paar14 = ra_cnt + rrb_cnt;
	paar23 = rra_cnt + rb_cnt;
	paar24 = rra_cnt;
	if (rra_cnt < rrb_cnt)
		paar24 = rrb_cnt;
	if (paar13 <= paar14 && paar13 <= paar23 && paar13 <= paar24)
		return (ft_saved(13, ra_cnt, rb_cnt));
	if (paar24 <= paar13 && paar24 <= paar14 && paar24 <= paar23)
		return (ft_saved(24, rra_cnt, rrb_cnt));
	if (paar14 <= paar13 && paar14 <= paar23 && paar14 <= paar24)
		return (ft_saved(14, ra_cnt, rrb_cnt));
	return (ft_saved(23, rra_cnt, rb_cnt));
}

t_saved	ft_step_n_paar(int *a, int *b, int b_i, int a_i_of_b_i)
{
	int		ra_cnt;
	int		rra_cnt;
	int		rb_cnt;
	int		rrb_cnt;

	ra_cnt = a_i_of_b_i;
	rra_cnt = a[0] - a_i_of_b_i;
	rb_cnt = b_i - 1;
	rrb_cnt = b[0] - b_i + 1;
	return (ft_smallest(ra_cnt, rra_cnt, rb_cnt, rrb_cnt));
}
