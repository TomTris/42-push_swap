/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: qdo <qdo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:13:47 by qdo               #+#    #+#             */
/*   Updated: 2024/04/08 17:57:02 by qdo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SWAP_H
# define FT_SWAP_H

# include "ft_printf_file/ft_printf.h"

typedef struct s_saved
{
	int	step;
	int	paar;
	int	a_do;
	int	b_do;
}	t_saved;

typedef struct s_to_return
{
	int	id;
	int	*steps;
}	t_to_return;

void		sa(int *a, int check);
void		sb(int *b, int check);
void		ss(int *a, int *b);
void		pa(int *a, int *b);
void		pb(int *a, int *b);
void		ra(int *a, int check);
void		rb(int *b, int check);
void		rr(int *a, int *b);
void		rra(int *a, int check);
void		rrb(int *b, int check);
void		rrr(int *a, int *b);

void		sa_1(int *a, int check);
void		sb_1(int *b, int check);
void		ss_1(int *a, int *b);
void		pa_1(int *a, int *b);
void		pb_1(int *a, int *b);
void		ra_1(int *a, int check);
void		rb_1(int *b, int check);
void		rr_1(int *a, int *b);
void		rra_1(int *a, int check);
void		rrb_1(int *b, int check);
void		rrr_1(int *a, int *b);

int			check_sorted_a(int *a);
void		ft_write_rules_1(int check, int *a, int *b);
t_to_return	ft_rules(int check, int *a, int *b);
int			ft_b_out_of_a(int *a, int *b, int i_a);
int			ft_start(int *a, int *b);
void		ft_do(int *a, int *b, t_saved save_i);
void		*ft_calloc(size_t count);
t_saved		ft_step_n_paar(int *a, int *b, int a_i, int b_i_of_a_i);
int			ft_a_i_of_b_i(int *a, int *b, int i_a);
int			*ft_make_a(int argc, const char **argv, int a_0);
void		ft_argc_1_3(int *a);
void		ft_argc_1_3_1(int *a);

int			*ft_dup(int *to_dup, int size);
void		ft_do_print(int *a, int *b, t_to_return ret);
int			check_dup(int *a);
int			ft_only_start(int *a, int *b);
void		ft_write_rules(int check, int *a, int *b);
t_to_return	ft_rules_1(int i, int *a, int *b);
int			ft_a_out_of_b_1(int *a, int *b, int i_a);
int			ft_start_1(int *a, int *b, int cnt_check);
void		ft_do_1(int *a, int *b, t_saved save_i);
t_saved		ft_step_n_paar_1(int *a, int *b, int a_i, int b_i_of_a_i);
int			ft_b_i_of_a_i_1(int *a, int *b, int i_a);

#endif