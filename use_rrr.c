/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_rrr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 18:29:18 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 11:35:04 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_rrr(t_stock **a, t_stock **b)
{
	use_rra(a, b);
	use_rrb(a, b);
}
