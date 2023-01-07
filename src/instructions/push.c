/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 09:45:17 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/07 10:54:28 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push(t_lst **src, t_lst **dst)
{
	t_lst	*node;

	node = lst_shift(src);
	lst_unshift(dst, node);
}

void	pa(t_lst **b, t_lst **a)
{
	push(b, a);
	ft_printf("pa\n");
}

void	pb(t_lst **a, t_lst **b)
{
	push(a, b);
	ft_printf("pb\n");
}
