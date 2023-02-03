/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_frequency_struct.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 10:05:27 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/03 09:18:41 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../../push_swap.h"

static void	fill_most_frequent(t_frequency *f, int swaps, int rotates, int reverses)
{
	if (swaps >= rotates && swaps >= reverses)
	{
		f->frequent = SS;
		f->times = swaps;
	}
	else if (rotates >= reverses && rotates >= swaps)
	{
		f->frequent = RR;
		f->times = rotates;
	}
	else
	{
		f->frequent = RRR;
		f->times = reverses;
	}
}

static void	add_frequency(t_frequency *frequency, char instruction)
{
	if (instruction == SA)
		frequency->swaps_a++;
	else if (instruction == RA)
		frequency->rotates_a++;
	else if (instruction == RRA)
		frequency->reverses_a++;
	else if (instruction == SB)
		frequency->swaps_b++;
	else if (instruction == RB)
		frequency->rotates_b++;
	else if (instruction == RRB)
		frequency->reverses_b++;
}

static void	sum_instructions(t_frequency *frequency, char *instructions)
{
	if (!instructions)
		return ;
	while (*instructions)
	{
		add_frequency(frequency, *instructions);
		instructions++;
	}
}

static void	add_most_frequent(t_frequency *f)
{
	int	swaps;
	int	rotates;
	int	reverses;

	swaps = f->swaps_b;
	rotates = f->rotates_b;
	reverses = f->reverses_b;
	if (f->swaps_a < f->swaps_b)
		swaps = f->swaps_a;
	if (f->rotates_a < f->rotates_b)
		rotates = f->rotates_a;
	if (f->reverses_a < f->reverses_b)
		reverses = f->reverses_b;
	fill_most_frequent(f, swaps, rotates, reverses);
}

void	fill_frequency_struct(t_data *data, t_frequency *frequency)
{
	ft_bzero(frequency, sizeof(t_frequency));
	sum_instructions(frequency, data->a_instructions);
	sum_instructions(frequency, data->b_instructions);
	add_most_frequent(frequency);
}

/* 	ft_printf("FREQUENT: %d (%d)\n", frequency->frequent, frequency->times);

	ft_printf("s: %d\tr: %d\trr: %d\n", frequency->swaps_a, frequency->rotates_a, frequency->reverses_a);
	ft_printf("s: %d\tr: %d\trr: %d\n", frequency->swaps_b, frequency->rotates_b, frequency->reverses_b);
	ft_printf("b size: %d\n", ft_strlen(data->b_instructions));
	ft_printf("a size: %d\n", ft_strlen(data->a_instructions));
	
	ft_printf("a and b \n");
	print_instructions_code(data->a_instructions);
	print_instructions_code(data->b_instructions); */