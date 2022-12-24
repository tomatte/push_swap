/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_unshift.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:39:59 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/24 12:59:49 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

//add element to beginning of list
void	lst_unshift(t_lst *lst, t_lst *node)
{
	if (!lst || !node)
		return ;
	lst = lst_first(lst);
	lst->prev = node;
	node->next = lst;
}
