/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:00:23 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/15 15:52:48 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "ft_printf.h"
# include "libft.h"


typedef struct s_list
{
	int				data;
	int				min;
	int				max;
	struct s_list	*target_node;
	struct s_list	*median;
	struct s_list	*next;
	struct s_list	*prev;
} t_stack_list;


//check_error_free
void					free_matrix(char **argv);
void					free_stack(t_stack_list** stack);
void					check_error_free(t_stack_list** stack_a, t_stack_list** argv, bool flag_argc_2);
int						error_invalid_input(char *str_number);
int						error_duplicate_number(t_stack_list *a, int nbr);


//push_swap_util
static t_stack_list		*find_median(t_stack_list *head);
static t_stack_list		*find_max(t_stack_list *stack);
static t_stack_list		*find_min(t_stack_list *stack);
int						stack_len(t_stack_list *stack);
void					median_above_or_below(t_stack_list **stack_a, t_stack_list **stack_b,int median, int len, bool checker);


// stack_value_to_a.c
static long				ft_atol(const char *nptr);
int						check_duplicate_number(t_stack_list *a, int nbr);
void					stack_value_to_a(t_stack_list **a, char **argv, bool flag_argc_2);
t_stack_list			*append_node(t_stack_list **stack, int nbr);


// command
void					swap(t_stack_list** head);
void					sa(t_stack_list** stack_a, bool checker);
void					sb(t_stack_list** stack_b, bool checker);
void					ss(t_stack_list** stack_a, t_stack_list** stack_b, bool checker);
void					push(t_stack_list** dest, t_stack_list** src);
void					pa(t_stack_list** stack_a, t_stack_list** stack_b, bool checker);
void					pb(t_stack_list** stack_a, t_stack_list** stack_b, bool checker);
void					rotate(t_stack_list **stack);
void					ra(t_stack_list** stack_a, bool checker);
void					rb(t_stack_list** stack_b, bool checker);
void					rr(t_stack_list** stack_a, t_stack_list** stack_b, bool checker);
void					reverse_rotate(t_stack_list **stack);
void					rra(t_stack_list** stack_a, bool checker);
void					rrb(t_stack_list** stack_b, bool checker);
void					rrr(t_stack_list** stack_a, t_stack_list** stack_b, bool checker);

//set_value_structs
void					set_values_struct_a(t_stack_list *a);
void					set_values_struct_b(t_stack_list *b);
void					set_values_both(t_stack_list *a, t_stack_list *b);

//sorting_part
bool					check_stack_sorted(t_stack_list *stack);
void					sorting_process(t_stack_list **a, t_stack_list **b);
void					sort_three(t_stack_list **a);
void					sort_four(t_stack_list **a, t_stack_list **b);
void					sort_five(t_stack_list **a, t_stack_list **b);
void					temp_sort_solution(t_stack_list **a, t_stack_list **b);

//temp_sort_algorithm
void					power_of_trinity_sort(t_stack_list **a, t_stack_list **b);
t_stack_list			temp_sorted_prototype(t_stack_list **a);
void					temp_sort_algorithm(t_stack_list **a, t_stack_list **b);

#endif