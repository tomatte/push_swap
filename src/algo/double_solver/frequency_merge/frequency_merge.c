/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frequency_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:04:16 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/03 09:41:37 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

void	frequency_merge(t_data *data)
{
	t_frequency	frequency;
	
	fill_frequency_struct(data, &frequency);

	replace_instructions(data, &frequency);

/* 	replace_instructions(&data->a_instructions, most_frequent);

	ft_printf("AFTER: \n");
	print_instructions_code(data->a_instructions); */
	exit(0);
}

/* 
	comparar as frequencias de A e B
	
	escolher a menor que seja maior
	ex:
		swaps_b == 8
		swaps_a == 10
		rotates_b == 12
		rotates_a == 7

		swaps_menor == 8
		rotates_menor == 7

		escolhida: swaps_menor
		
		trocar 8 SA e 8 SB por 8 SS
 */