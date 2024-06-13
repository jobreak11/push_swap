/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:59:10 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/13 21:20:36 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_stack_list *find_median(t_stack_list *head)
{
	t_stack_list	*median;
	t_stack_list	*fast;

	median = head;
	fast = head;
	while (fast != NULL && fast->next != NULL)
	{
		median = median->next;
		fast = fast->next->next;
	}
	return (median);
}
static t_stack_list *find_max_to_be_last_node(t_stack_list *stack)
{
	int				*heighest;
	t_stack_list	*heighest_node;
	
	if (stack == NULL)
		return (NULL);
	heighest = INT_MAX;
	while (stack)
		if (stack->data > heighest)
		{
			heighest = stack->data;
			heighest_node = stack;
		}
		stack = stack->next;
	return (stack->max);
}
static t_stack_list *find_min_to_be_first_node(t_stack_list *stack)
{
	int				*lowest;
	t_stack_list	*lowest_node;
	
	if (stack == NULL)
		return (NULL);
	lowest = INT_MIN;
	while (stack)
		if (stack->data < lowest)
		{
			lowest = stack->data;
			lowest_node = stack;
		}
		stack = stack->next;
	return (stack->min);
}



int stack_len(t_stack_list *stack)
{
	if(stack == NULL)
		return 0;
	return 1 + stack_len(stack->next);
}

void	median_above_or_below(t_stack_list **stack_a, t_stack_list **stack_b,int median, int len, bool checker)
{
	int i;
	int j;
	t_stack_list *tmp_head;

	tmp_head = *stack_a;
	while (i < len)
	{
		
		// if (tmp->data < median)
		// {
		// 	ra(stack_a, checker);
		// 	i++;
		// }
		// else
		// {
		// 	pb(stack_a, stack_b, checker);
		// 	j++;
		// }
	}
}