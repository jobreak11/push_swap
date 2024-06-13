/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_value_structs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 07:51:21 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/13 16:13:57 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_values_struct_a(t_stack_list *a)
{
	find_max_to_be_last_node(a);
	find_min_to_be_first_node(a);
	find_median(a);
	median_above_or_below(a);
}
void	set_values_struct_b(t_stack_list *b)
{
	find_max_to_be_last_node(b);
	find_min_to_be_first_node(b);
	find_median(b);
	medain_above_or_below(b);
}

void	set_values_both(t_stack_list *a, t_stack_list *b)
{
	find_max_to_be_last_node(a);
	find_max_to_be_last_node(b);
	find_min_to_be_first_node(a);
	find_min_to_be_first_node(b);
	find_median(a);
	find_median(b);
	median_above_or_below(a);
	medain_above_or_below(b);
}
