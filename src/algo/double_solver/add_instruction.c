/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_instruction.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 14:15:44 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/30 14:38:41 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	add_instruction(char **array, char instruction)
{
	ft_str_push_char(array, instruction);
}

void	print_instructions(char *arr)
{
	while (*arr)
		ft_printf("%d ", *arr++);
}
