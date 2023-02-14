/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:56:55 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/13 19:48:11 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./checker.h"

static void	print_codes(char *codes)
{
	if (!codes)
		return ;
	while (*codes)
		ft_printf("%d ", *codes++);
	ft_printf("\n");
}

static void	verify_sort(t_lst *stack_a, t_lst *stack_b)
{
	if (stack_b != NULL)
		ft_printf("KO\n");
	else if (is_lst_sorted(stack_a))
		ft_printf("OK\n");
	else
		ft_printf("KO\n");
}

int	main(int argc, char *argv[])
{
	t_lst	*stack_a;
	t_lst	*stack_b;
	char	*instruction_codes;

	error_management(argc, argv);
	instruction_codes = read_instructions();
	stack_a = get_numbers(argc, argv);
	fill_lst_index(stack_a);
	execute_instructions(&stack_a, &stack_b, instruction_codes);
	verify_sort(stack_a, stack_b);
	lst_clear(stack_a);
	return (0);
}

/* 
	read line by line

	each line is an instruction

	store the instructions as numbers:
		SA 11
		SB 21
		SS 1
		RA 12
		RB 22
		RR 2
		RRA 13
		RRB 23
		RRR 3
		PA 14
		PB 24

	loop through the array executing the instructions

	verify if stack_a is sorted and stack_b is empty

	return OK or KO depending on results

 */