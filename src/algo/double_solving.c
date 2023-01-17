/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   double_solving.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 14:03:21 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/09 10:23:19 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	ra_move(t_lst *stack, int index)
{
	while (lst_first(stack)->index != index)
	{
		ra(&stack);
	}
}

static void	rra_move(t_lst *stack, int index)
{
	while (lst_first(stack)->index != index)
	{
		rra(&stack);
	}
}

static void	move_to_top(t_lst *stack, int index)
{
	int	pos;
	int	size;

	size = lst_size(stack);
	pos = get_position(stack, index);
	if (pos > size - pos)
		rra_move(stack, index);
	else
		ra_move(stack, index);
}

static void	twister_move(t_lst **s)
{
	int		index;
	t_lst	*stack;
	
	stack = *s;
	stack = lst_first(stack);
	index = stack->index;
	while (index + 1 != lst_first(stack)->next->index)
	{
		sa(&stack);
		ra(&stack);
		//print_lst(stack);
	}
}

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

void	double_solving(t_lst **a, t_lst **b)
{
	(void) b;
	swap_and_move(*a);
}

/*


3
5
2
1
4


 */