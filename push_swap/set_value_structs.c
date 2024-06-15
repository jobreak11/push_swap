/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   set_value_structs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 07:51:21 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/15 15:50:49 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_values_struct_a(t_stack_list *a)
{
	find_max(a);
	find_min(a);
	find_median(a);
}
void	set_values_struct_b(t_stack_list *b)
{
	find_max(b);
	find_min(b);
	find_median(b);
}

void	set_values_both(t_stack_list *a, t_stack_list *b)
{
	find_max(a);
	find_max(b);
	find_min(a);
	find_min(b);
	find_median(a);
	find_median(b);
}
