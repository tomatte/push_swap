/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 09:45:17 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/07 10:34:39 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	pa(void)
{
	ft_printf("pa\n");
}

void	pb(void)
{
	ft_printf("pb\n");
}

void	push(t_lst **src, t_lst **dst)
{
	t_lst	*node;

	node = lst_shift(src);
	lst_unshift(dst, node);
}
