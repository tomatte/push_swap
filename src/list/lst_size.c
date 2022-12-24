/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 12:02:14 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/24 12:30:23 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	get_first(t_lst **lst)
{
	t_lst	*first;

	first = *lst;
	while (first->prev)
		first = first->prev;
	*lst = first;
}

int	lst_size(t_lst *lst)
{
	int	i;

	if (!lst)
		return (0);
	get_first(&lst);
	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
