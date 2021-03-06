/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:14:17 by floblanc          #+#    #+#             */
/*   Updated: 2019/02/14 12:03:32 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct	s_stock
{
	int				data;
	struct s_stock	*next;
}				t_stock;

int				stock_arg(int ac, char **av, t_stock **begin, int *v);
int				stock_rules(t_stock **begin);
int				lst_is_sort(t_stock **a, int ac);
int				a_is_sort(t_stock **a);
int				b_is_sort(t_stock **b);
int				ft_lstlen(t_stock **begin);
int				best_way(t_stock **a, t_stock **b, int len, int c);
int				way_to_closest(t_stock **b, int value, int len, int c);
int				front_a(t_stock **a, int pos);
int				order_b(t_stock **b, int len, int c);
void			add_to_list(t_stock **begin, int data);
void			free_lst(t_stock **begin);
void			init_fct(void (*fct[11])(t_stock**, t_stock**, int));
void			use_sa(t_stock **a, t_stock **b, int w);
void			use_sb(t_stock **a, t_stock **b, int w);
void			use_ss(t_stock **a, t_stock **b, int w);
void			use_pa(t_stock **a, t_stock **b, int w);
void			use_pb(t_stock **a, t_stock **b, int w);
void			use_ra(t_stock **a, t_stock **b, int w);
void			use_rb(t_stock **a, t_stock **b, int w);
void			use_rr(t_stock **a, t_stock **b, int w);
void			use_rra(t_stock **a, t_stock **b, int w);
void			use_rrb(t_stock **a, t_stock **b, int w);
void			use_rrr(t_stock **a, t_stock **b, int w);
void			select_sort_basic(t_stock **a, t_stock **b, int ac);
void			select_sort_boosted(t_stock **a, t_stock **b);
void			sort_three(t_stock **begin, char c);
void			rotate_a(t_stock **a, int i);
void			r_rotate_a(t_stock **a, int i);
void			rotate_b(t_stock **b, int i);
void			r_rotate_b(t_stock **b, int i);
void			rotate_r(t_stock **a, t_stock **b, int i);
void			r_rotate_r(t_stock **a, t_stock **b, int i);
void			stock_best_way(t_stock **a, t_stock **b, int pos);
void			display(t_stock **a, t_stock **b);

#endif
