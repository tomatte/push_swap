#include "../../push_swap.h"

static void	ra_move(t_lst *stack, int index)
{
	while (lst_first(stack)->index != index)
	{
		ra(stack);
	}
}

static void	rra_move(t_lst *stack, int index)
{
	while (lst_first(stack)->index != index)
	{
		rra(stack);
	}
}

void	move_to_top(t_lst *stack, int index)
{
	int	pos;
	int	size;

	size = lst_size(stack);
	pos = get_position(stack, index);
	if (pos > size - pos)
		rra_move(stack, index);
	else
		ra_move(stack, index);
}