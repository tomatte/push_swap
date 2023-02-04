/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 09:24:53 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/03 08:49:25 by dbrandao         ###   ########.fr       */
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
	double_solver(stack_a);
	lst_clear(stack_a);
	return (0);
}
