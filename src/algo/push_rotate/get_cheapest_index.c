/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cheapest_index.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 16:27:48 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/08 09:58:55 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

static int	smaller(int	x, int y)
{
	if (x < y)
		return (x);
	else
		return (y);
}

static int	get_b_moves(t_lst *b, int index)
{
	int	size;
	int	position;
	int	ra_moves;
	int	rra_moves;

	size = lst_size(b);
	position = get_position(b, index);
	if (position < 0)
		return (-1);
	ra_moves = position;
	rra_moves = size - position;
	return (smaller(ra_moves, rra_moves));
}

static int	get_a_moves(t_lst *a, int index)
{
	//quantidade de movimentos pra colocar o maior relativo a index no topo
}

static void	show(t_lst *a, t_lst *b)
{
	ft_printf("List B\n");
	print_lst(b);
	ft_printf("\nList A\n");
	print_lst(a);
}

int	get_cheapest_index(t_lst *a, t_lst *b)
{
	//verificar custo de todos os index em b e retornar o menor
	int	index;
	int result;

	show(a, b);

	result = get_b_moves(b, index);
	ft_printf("index %d: (%d)\n", index, result);

	exit(0);
	return (0);
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