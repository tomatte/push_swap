# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 13:21:58 by dbrandao          #+#    #+#              #
#    Updated: 2023/02/13 22:38:04 by dbrandao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

	
COMMON_SRC	=	lst_new.c \
				lst_size.c \
				lst_first.c \
				lst_last.c \
				lst_push.c \
				lst_clear.c \
				lst_find_by_num.c \
				lst_find_by_index.c \
				lst_remove_first.c \
				lst_add_front.c \
				lst_remove_last.c \
				die.c \
				check_numbers.c \
				error_management.c \
				check_duplicated_values.c \
				check_numbers_size.c \
				get_numbers.c \
				swap.c \
				push.c \
				rotate.c \
				reverse_rotate.c \
				is_lst_sorted.c \
				fill_lst_index.c \
				print_lst.c \

#------------------------ PUSH_SWAP ----------------------------
SRC			=	push_swap.c \
				get_position.c \
				sort.c \
				two_solver.c \
				three_solver.c \
				sort_verification.c \
				radix.c \
				move_to_top_b.c \
				move_to_top_a.c \
				push_rotate.c \
				get_top_index.c \
				fill_updown_strategy.c \
				fill_strategy.c \
				first_ab.c \
				fill_rotate_strategy.c \
				fill_reverse_strategy.c \
				execute_strategy.c \
				push_rotate_algorithm.c \
				add_instruction.c \


OBJS				=	$(patsubst %.c,objects/%.o, $(SRC) $(COMMON_SRC))

NAME		=	push_swap
#------------------------------------------------------------#


#------------------------ CHECKER ----------------------------#
BONUS_SRC	=	checker.c \
				read_instructions.c \
				is_str_equal.c \
				execute_instructions.c \

BONUS_OBJS	=	$(patsubst %.c,objects/%.o, $(BONUS_SRC) $(COMMON_SRC))

BONUS_NAME	=	checker
#------------------------------------------------------------#

OBJS_DIR	=	objects

LIBFT		=	./libft/libftprintf.a

CFLAGS		=	-g -I./ -Wall -Wextra

VPATH		=	./src \
				./src/error \
				./src/list \
				./src/utils \
				./src/instructions \
				./src/algo \
				./src/algo/util \
				./src/algo/push_rotate \
				./bonus_src \
				./bonus_src/others \
				./bonus_src/utils \


CC					=	cc

$(OBJS_DIR)/%.o:	%.c
							$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

bonus:	$(BONUS_NAME)

$(OBJS_DIR):
						mkdir -p $@

$(NAME): $(OBJS_DIR) $(OBJS) $(LIBFT)
	$(CC) ${OBJS} ${CFLAGS} ${LIBFT} -o $@

$(BONUS_NAME): $(OBJS_DIR) $(BONUS_OBJS) $(LIBFT)
	$(CC) ${BONUS_OBJS} ${CFLAGS} ${LIBFT} -o $@
	

$(LIBFT):
	make -C ./libft bonus

clean:
	rm -rf ${OBJS_DIR}
	make -C ./libft clean

fclean:	clean
	rm -f ${NAME}
	rm -f ${BONUS_NAME}
	make -C ./libft fclean

re: fclean all

.PHONY:	all clean fclean re test