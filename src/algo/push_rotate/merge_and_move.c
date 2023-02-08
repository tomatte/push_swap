/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_and_move.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 12:36:59 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 13:44:36 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static void	show(t_lst *a, t_lst *b)
{
	ft_printf("\nList A\n");
	print_lst(a);
	ft_printf("\nList A\n");
	print_lst(b);
}

static int	mutual_rotates_moves(t_lst *a, t_lst *b, int b_index)
{
	int	a_index;
	int	a_rotates;
	int	b_rotates;
	
	a_index = get_top_index(a, b_index);
	a_rotates = get_position(a, a_index);
	b_rotates = get_position(b, b_index);
	return (ft_highest(a_rotates, b_rotates));
}

static int	mutual_reverses_moves(t_lst *a, t_lst *b, int b_index)
{
	int	a_index;
	int	a_reverses;
	int	b_reverses;

	a_index = get_top_index(a, b_index);
	a_reverses = lst_size(a) - get_position(a, a_index);
	b_reverses = lst_size(b) - get_position(b, b_index);
	return (ft_highest(a_reverses, b_reverses));
}

//get_best_strategy
void	merge_and_move(t_lst *a, t_lst *b)
{
	int	rotates;
	int	reverses;
	int	index;


	pa(&a, &b);
	pa(&a, &b);
	pa(&a, &b);
	pa(&a, &b);
	pa(&a, &b);
	pa(&a, &b);
	pa(&a, &b);
	show(a, b);

	index = 5;
	rotates = mutual_rotates_moves(a, b, index);
	reverses = mutual_reverses_moves(a, b, index);
		ft_printf("index: %d\trotates: %d\t reverses: %d\n", index, rotates, reverses);
	index = 9;
	rotates = mutual_rotates_moves(a, b, index);
	reverses = mutual_reverses_moves(a, b, index);
		ft_printf("index: %d\trotates: %d\treverses: %d\n", index, rotates, reverses);
	index = 16;
	rotates = mutual_rotates_moves(a, b, index);
	reverses = mutual_reverses_moves(a, b, index);
		ft_printf("index: %d\trotates: %d\treverses: %d\n", index, rotates, reverses);
	index = 8;
	rotates = mutual_rotates_moves(a, b, index);
	reverses = mutual_reverses_moves(a, b, index);
	ft_printf("index: %d\trotates: %d\treverses: %d\n", index, rotates, reverses);
	exit(0);
}

/* 

rr e ra
rr e rb

rrr e rra
rrr e rrb

ra e rrb

10
3
9
0

4
6
2
5
1
7

lowest(a_moves, b_moves) + abs(a_moves - b_moves)

a == 5
b == 7
5 + 2 == 7


a == 10
b == 5
5 + 5 == 10


 */