/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/29 16:14:17 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 14:42:14 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"
/////////
////////

#include <stdio.h>


/////////////
///////////
///////////



typedef	struct		s_stock
{
	int				data;
	struct	s_stock	*next;
}					t_stock;

int					stock_arg(int ac, char **av, t_stock **begin);
int					stock_rules(t_stock **begin);
int					lst_is_sort(t_stock **a, int ac);
void				add_to_list(t_stock **begin, int data);
void				free_lst(t_stock **begin);
void				init_fct(void (*fct[11])(t_stock**, t_stock**));
void				use_sa(t_stock **a, t_stock **b);
void				use_sb(t_stock **a, t_stock **b);
void				use_ss(t_stock **a, t_stock **b);
void				use_pa(t_stock **a, t_stock **b);
void				use_pb(t_stock **a, t_stock **b);
void				use_ra(t_stock **a, t_stock **b);
void				use_rb(t_stock **a, t_stock **b);
void				use_rr(t_stock **a, t_stock **b);
void				use_rra(t_stock **a, t_stock **b);
void				use_rrb(t_stock **a, t_stock **b);
void				use_rrr(t_stock **a, t_stock **b);

#endif
