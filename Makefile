# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dbrandao <dbrandao@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/23 13:21:58 by dbrandao          #+#    #+#              #
#    Updated: 2022/12/24 13:18:04 by dbrandao         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			=	push_swap.c \
				die.c \
				check_numbers.c \
				error_management.c \
				check_duplicated_values.c \
				check_numbers_size.c \
				lst_new.c \
				lst_size.c \
				lst_first.c \
				lst_unshift.c \
				lst_last.c \
				

OBJS_DIR			=	objects

OBJS				=	$(patsubst %.c,objects/%.o, $(SRC))

NAME		=	push_swap

LIBFT		=	./libft/libftprintf.a

CFLAGS		=	-I./ -Wall -Werror -Wextra

VPATH				=	./src \
						./src/error \
						./src/list \


CC					=	cc

$(OBJS_DIR)/%.o:	%.c
							$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(OBJS_DIR):
						mkdir -p $@

$(NAME): $(OBJS_DIR) $(OBJS) $(LIBFT)
	$(CC) ${OBJS} ${CFLAGS} ${LIBFT} -o $@
	

$(LIBFT):
	make -C ./libft bonus

clean:
	rm -rf ${OBJS_DIR}
	make -C ./libft clean

fclean:	clean
	rm -f ${NAME}
	make -C ./libft fclean

re: fclean all

.PHONY:	all clean fclean re