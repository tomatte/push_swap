/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 20:56:55 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/13 10:37:51 by dbrandao         ###   ########.fr       */
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

int	main(int argc, char *argv[])
{
	char	*codes;

	codes = read_instructions();
	print_codes(codes);
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