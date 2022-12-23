/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_management.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 12:21:26 by dbrandao          #+#    #+#             */
/*   Updated: 2022/12/23 12:42:01 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/* static void	check_number_size()
{

}
 */
void	error_management(int argc, char **argv)
{
	if (argc == 1)
		exit(1);
	check_numbers(argc, argv);
}