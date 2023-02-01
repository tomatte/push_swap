/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   frequency_merge.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 09:04:16 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/01 10:13:42 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

void	frequency_merge(t_data *data)
{
	int		most_frequent;

	ft_printf("BEFORE: \n");
	print_instructions_code(data->a_instructions);
	
	most_frequent = get_frequent_instruction(data->b_instructions);

	ft_printf("most frequent: %d\n", most_frequent);

/* 	replace_instructions(&a, most_frequent);

	ft_printf("AFTER: \n");
	print_instructions_code(a); */
	exit(0);
}
