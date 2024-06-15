/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_part.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:01:21 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/15 15:52:06 by gyeepach         ###   ########.fr       */
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
		temp_sort_solution(a, b);
}

void	sort_three(t_stack_list **a)
{
	power_of_trinity_sort(a, NULL);
}
void	sort_four(t_stack_list **a, t_stack_list **b)
{
	t_stack_list	*highest;
	
	highest = find_max(*a);
	while (stack_len(*a) > 3)
	{
		if ((*a) != highest)
			ra(a, false);
		else
		{
			pb(a, b, false);
			break ;
		}
	}
	power_of_trinity_sort(a, NULL);
	pa(a, b, false);
	ra(a, false);

}
void	sort_five(t_stack_list **a, t_stack_list **b)
{
	t_stack_list	*highest;
	t_stack_list	*lowest;

	highest = find_max(*a);
	lowest = find_min(*a);
	while (stack_len(*a) > 3)
	{
		if ((*a) != highest || lowest)
			ra(a, false);
		if ((*a) == highest || lowest)
			pb(a, b, false);
	}
	power_of_trinity_sort(a, NULL);
	if ((*b)->data > (*b)->next->data)
		sb(b, false);
	pa(a, b, false);
	pa(a, b, false);
	ra(a, false);
}

void	temp_sort_algorithm(t_stack_list **a, t_stack_list **b)
{
	large_data_solution(a, b);
}

