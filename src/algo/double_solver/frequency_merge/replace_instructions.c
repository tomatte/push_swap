/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_instructions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:25:49 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/03 09:40:32 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

static void	replace_with_next_equal(char **instructions, char most_frequent)
{
	int	i;

	i = 0;
	while ((*instructions)[i])
	{
		if ((*instructions)[i] % 10 == most_frequent)
			(*instructions)[i] = most_frequent;
		i++;
	}
}

static void	replace_most_frequent()
{

}

static void	fill_big_and_small(t_data *data, char **big, char **small)
{
	int	size_a;
	int	size_b;

	size_a = ft_strlen(data->a_instructions);
	size_b = ft_strlen(data->b_instructions);
	if (size_a > size_b)
	{
		*big = data->a_instructions;
		*small = data->b_instructions;
	}
	else
	{
		*big = data->b_instructions;
		*small = data->a_instructions;
	}
}

void	replace_instructions(t_data *data, t_frequency *frequency)
{
	char	*big;
	char	*small;

	fill_big_and_small(data, &big, &small);
	print_instructions_code(big);
	print_instructions_code(small);
	exit(0);
}
