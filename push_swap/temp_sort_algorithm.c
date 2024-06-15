/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   temp_sort_algorithm.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 07:46:03 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/15 15:56:48 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	power_of_trinity_sort(t_stack_list **a, t_stack_list **b)
{
	find_max(*a);
	find_min(*b);
	if((*a) == (*a)->max)
		ra(a, false);
	else if((*a)->next == (*a)->max)
		rra(a, false);
	if((*b)== (*b)->min)
		rb(b, false);
	else if((*b)->next == (*b)->min)
		rrb(b, false);
	if ((*a) == (*a)->max && (*b) == (*b)->min)
			rr(a, b, false);
	else if ((*a)->next == (*a)->max 
			&& (*b)->next == (*b)->min)
			rrr(a, b, false);
	if ((*a)->data > (*a)->next->data)
		sa(a, false);
	if ((*b)->data < (*b)->next->data)
		sb(b, false);
	if ((*a)->data > (*a)->next->data && (*b)->data < (*b)->next->data) 
		ss(a, b, false);
}

t_stack_list	temp_sorted_prototype(t_stack_list **a)
{
	t_stack_list	**tempa_sorted_list;
	t_stack_list	**tempb_sorted_list;
	t_stack_list	*sorted_list;
	
	tempa_sorted_list = a;
	tempb_sorted_list = NULL;
	sorted_list = NULL;
	while (tempa_sorted_list != NULL)
	{
		find_min(*tempa_sorted_list);
		if ((*tempa_sorted_list)->data == (*tempa_sorted_list)->min)
			push(tempb_sorted_list, tempa_sorted_list);
		tempa_sorted_list = (*tempa_sorted_list)->next;
	}
	while (tempb_sorted_list != NULL)
	{
		push(sorted_list, tempb_sorted_list);
		tempb_sorted_list = (*tempb_sorted_list)->next;
	}
	return (*sorted_list);
}

void	temp_sort_algorithm(t_stack_list **a, t_stack_list **b)
{
	t_stack_list	*tmp_sorted_list;
	int				index;
	
	index = 0;
	*tmp_sorted_list = temp_sorted_prototype(a);
	while (a != NULL)
	{
		if ((*a)->data != tmp_sorted_list->data)
			ra(a,false);
		tmp_sorted_list = tmp_sorted_list->next;
	}
	while (b != NULL)
		pa(a, b, false);
}
