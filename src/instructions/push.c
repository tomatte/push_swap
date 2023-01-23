/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:10:18 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/23 20:47:25 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_lst **dest, t_lst **src)
{
	t_lst	*node;

	if (src == NULL || *src == NULL)
		return ;
	if (dest == NULL)
		return ;
	node = lst_remove_first(src);
	lst_add_front(dest, node);
}
