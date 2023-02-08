/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 18:08:36 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 11:12:28 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_lst *a)
{
	int		size;

	size = lst_size(a);
	if (size == 2)
		two_solver(a);
	else if (size == 3)
		three_solver(a);
	else
		push_rotate(a);
}
