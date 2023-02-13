/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 21:07:56 by dbrandao          #+#    #+#             */
/*   Updated: 2023/02/13 14:01:56 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libftprintf.h"
# include "../src/push_swap.h"
# include <unistd.h>
# define SA 11
# define SB 21
# define SS 1
# define RA 12
# define RB 22
# define RR 2
# define RRA 13
# define RRB 23
# define RRR 3
# define PA 14
# define PB 24
# define CODES "\11\21\1\12\22\2\13\23\3\14\24"

void	checker(int argc, char *argv[]);
int		is_str_equal(char *s1, char *s2);
char	*read_instructions(void);
void	execute_instructions(t_lst **stack_a, t_lst **stack_b, char *codes);

#endif