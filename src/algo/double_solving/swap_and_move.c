/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_and_move.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 18:46:02 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/17 18:46:08 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	swap_and_move(t_lst *stack)
{
	int	index;
	int	size;

	size = lst_size(stack);
	index = size - 2;
	stack = find_by_index(stack, index);
	move_to_top(stack, index);
	twister_move(&stack);

	index--;
	move_to_top(stack, index);
	twister_move(&stack);
	ft_printf("vrauuu\n");
	print_lst(stack);
	lst_first(stack);
	ft_printf("vrauuu\n");
}
