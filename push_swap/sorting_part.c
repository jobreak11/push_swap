/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_part.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:01:21 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/13 21:47:05 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

bool	check_stack_sorted(t_stack_list *stack)
{
	while (stack->next)
	{
		if (stack->data > stack->next->data)
			return (false);
		stack = stack->next;
	}
	return (true);
}



void	sorting_process(t_stack_list **a, t_stack_list **b)
{
	int	count_a;
	int	count_b;

	count_a = stack_len(*a);
	count_b = stack_len(*b);
	*a = set_values_a(*a);
	if (count_a == 2)
		sa(a, false);
	else if (count_a == 3)
		sort_three(a);
	else if (count_a == 4)
		sort_four(a, b);
	else if (count_a == 5)
		sort_five(a, b);
	else
		sort_large(a, b);
	
}

void	sort_three(t_stack_list **a)
{
	while (check_stack_sorted(*a))
	{
		if ((*a)->data > (*a)->next->data)
			sa(a, false);
		else if((*a)->data > (*a)->next->next->data)
			ra(a, false);
		else if((*a)->data < (*a)->next->next->data)
			rra(a, false);
	}
}
void	sort_four(t_stack_list **a, t_stack_list **b)
{
	t_stack_list *tmp_highest;
	
	tmp_highest = find_max_to_be_last_node(*a);
	while (*a)
	{
		if ((*a)->data == tmp_highest->max)
		{
			pb(a, b, false);
			break ;
		}
	}
	while (*a)
	{
		if ((*a)->data < (*a)->next->data 
								&& (*a)->next->data < (*a)->next->next->data
								&& (*a)->data < (*a)->next->next->data)
			pa(a, b, false);
			break ;
		else
			sort_three(*a);
	}
	ra(a, false);
}
void	sort_five(t_stack_list **a, t_stack_list **b)
{
	
}

void	sort_large(t_stack_list **a, t_stack_list **b)
{
	
}

