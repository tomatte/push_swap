/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:21:26 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/07 14:30:34 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	no_argument(int argc)
{
	if (argc == 1)
		exit(1);
}

static void	one_argument(int argc)
{
	if (argc == 2)
		exit(0);
}

void	error_management(int argc, char **argv)
{
	no_argument(argc);
	check_numbers(argc, argv);
	check_numbers_size(argc, argv);
	one_argument(argc);
	check_duplicated_values(argc, argv);
}
