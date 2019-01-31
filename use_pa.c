/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   use_pa.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: floblanc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/31 10:52:23 by floblanc          #+#    #+#             */
/*   Updated: 2019/01/31 13:56:33 by floblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	use_pa(t_stock **a, t_stock **b)
{
	t_stock	*save;

	if (*b)
	{
		save = 0;
		if ((*b)->next)
			save = (*b)->next;
		(*b)->next = *a;
		*a = *b;
		*b = save;
	}
}
