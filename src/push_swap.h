/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 13:22:27 by dbrandao          #+#    #+#             */
/*   Updated: 2023/01/07 15:05:53 by dbrandao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../libft/libftprintf.h"

typedef struct	s_lst
{
	int				num;
	int				position;
	struct s_lst	*next;
	struct s_lst	*prev;
}	t_lst;

//list
t_lst	*lst_new(int num);
int		lst_size(t_lst *lst);
t_lst	*lst_first(t_lst *lst);
void	lst_unshift(t_lst **lst, t_lst *node);
t_lst	*lst_last(t_lst *lst);
void	lst_push(t_lst **lst, t_lst *node);
t_lst	*lst_shift(t_lst **lst);
t_lst	*lst_pop(t_lst *lst);
void	lst_clear(t_lst *lst);
t_lst	*lst_find(t_lst *lst, int num);

//error
void	error_management(int argc, char **argv);
void	die(void);
void	check_numbers(int argc, char **argv);
void	check_duplicated_values(int argc, char **argv);
void	check_numbers_size(int argc, char **argv);


//utils
t_lst	*get_numbers(int argc, char **argv);
void	fill_lst_position(t_lst *lst);

//instructions
void	swap(t_lst *stack);
void	rotate(t_lst *stack);
void	ss(t_lst *a, t_lst *b);
void	rr(t_lst *stack1, t_lst *stack2);
void	rrotate(t_lst *stack);
void	rrr(t_lst *stack1, t_lst *stack2);
void	rra(t_lst *a);
void	rrb(t_lst *b);
void	ra(t_lst *a);
void	rb(t_lst *b);
void	sa(t_lst *a);
void	sb(t_lst *b);
void	pa(t_lst **b, t_lst **a);
void	pb(t_lst **a, t_lst **b);

//algo
void	sort(t_lst *a);
void	put_above(t_lst **a, t_lst **b, int pos);
void	two(t_lst *a);
void	three(t_lst *a);

//temp
void	print_lst(t_lst *lst);

#endif