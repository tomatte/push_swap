/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/27 09:45:17 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/27 10:38:23 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_lst **src, t_lst **dst)
{
	t_lst	*node;

	node = lst_shift(src);
	lst_unshift(dst, node);
}
