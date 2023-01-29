/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   four_solver.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 21:41:17 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/28 22:12:58 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	four_solver(t_lst *a)
{
	t_lst	*b;

	b = NULL;
	move_to_top(&a, 0);
	pb(&b, &a);
	fill_lst_index(a);
	three_solver(a);
	pa(&a, &b);
	fill_lst_index(a);
}
