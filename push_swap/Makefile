# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/11 16:12:21 by gyeepach          #+#    #+#              #
#    Updated: 2024/06/15 15:49:14 by gyeepach         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

Name = push_swap
combine =push_swap.a
CC = cc
CFLAGS =-Wall -Werror -Wextra
LIB = ar -rcs

SRCS = main.c reverse_rotate_utils.c rotate_utils.c push_utils.c \
		push_swap_utils.c swap_utils.c stack_value_to_a.c sorting_part.c \
		check_error_free.c set_value_structs.c sorting_part.c temp_sort_algorithm.c \

OBJS = $(SRCS:.c=.o)

all : $(Name)

$(Name) : $(OBJS)
	$(CC) $(CFLAGS) -o $(Name) $(OBJS)
	
$(combine) : $(OBJS)
	$(LIB) $(combine) $^

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@


clean :
	rm -f $(OBJS) $(combine)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re