/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   three_solver.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 08:35:10 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/04 09:21:27 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	three_solver(t_lst *a)
{
	a = lst_first(a);
	if (a->index == 2)
		ra(&a);
	else if (a->next->index == 2)
		rra(&a);
	if (!is_lst_sorted(a))
		sa(&a);
}
