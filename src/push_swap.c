/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 09:24:53 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/28 21:22:28 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_lst	*stack_a;

	error_management(argc, argv);
	stack_a = get_numbers(argc, argv);
	fill_lst_index(stack_a);
	sort_verification(stack_a);

	sort(stack_a);

	//print_lst(stack_a);
	lst_clear(stack_a);
	return (0);
}

/* 
RANDOM
101
11
1100
1111
1001
111
1010

1
2
3
4

STACK_A
11
101
111
1001
1010
1100
1111

RANDOM: 5 3 12  15 9 7 10

SORTED: 3 5 7 9 10 12 15


 */