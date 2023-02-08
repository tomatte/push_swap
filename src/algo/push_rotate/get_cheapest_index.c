/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:27:48 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 10:47:50 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	smaller(int x, int y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

static int	get_moves(t_lst *stack, int index)
{
	int	size;
	int	position;
	int	rotates;
	int	reverses;

	size = lst_size(stack);
	position = get_position(stack, index);
	if (position < 0)
		return (-1);
	rotates = position;
	reverses = size - position;
	return (smaller(rotates, reverses));
}

static void	show(t_lst *a, t_lst *b)
{
	ft_printf("List B\n");
	print_lst(b);
	ft_printf("\nList A\n");
	print_lst(a);
}

static int	get_total_moves(t_lst *a, t_lst *b, int b_index)
{
	int	moves_a;
	int	moves_b;

	moves_b = get_moves(b, b_index);
	moves_a = get_moves(a, get_top_index(a, b_index));
	if (moves_a < 0 || moves_b < 0)
		return (-1);
	return (moves_a + moves_b);
}

//verificar custo de todos os index em b e retornar o menor
int	get_cheapest_index(t_lst *a, t_lst *b)
{
	int	cheapest_index;
	int	cheapest_moves;
	int	moves;

	cheapest_index = b->index;
	cheapest_moves = get_total_moves(a, b, b->index);
	while (b->next)
	{
		b = b->next;
		moves = get_total_moves(a, b, b->index);
		if (moves < cheapest_moves)
		{
			cheapest_moves = moves;
			cheapest_index = b->index;
		}
	}
	return (cheapest_index);
}

/* 
1
2
5
11
15
19
20

size - position == rra_moves

position == ra_moves

13
rra_moves == 7 - 3 == 4
ra_moves == 3

12
rra_moves == 

12
6
18
13*
16
3
9
 */