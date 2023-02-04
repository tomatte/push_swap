/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace_instructions.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 09:25:49 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/04 09:04:52 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

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

static void	replace_most_frequent(t_frequency *frequency, char **big)
{
	int	i;

	i = 0;
	while ((*big)[i] && i < frequency->times)
	{
		if ((*big)[i] % 10 == frequency->frequent)
			(*big)[i] = frequency->frequent;
		i++;
	}
}

void	replace_instructions(t_data *data, t_frequency *frequency)
{
	char	*big;
	char	*small;

	fill_big_and_small(data, &big, &small);
	replace_most_frequent(frequency, &big);
	print_instructions_code(big);
	exit(0);
}
