/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:14:48 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/12 18:00:47 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	reverse_rotate(t_stack_list **stack)
{
	t_stack_list	*last_node;
	int				len;
	
	len = stack_len(*stack);
	if (NULL == stack || NULL == *stack || 1 == len)
		return ;
	last_node = find_last_node(*stack);
	last_node->prev->next = NULL;
	last_node->next = *stack;
	(*stack)->next = NULL;
	*stack = last_node;
	last_node->next->prev =last_node;
}

void	rra(t_stack_list** stack_a, bool checker)
{
	reverse_rotate(stack_a);
	if (!checker)
		ft_printf("rra");
}

void	rrb(t_stack_list** stack_b, bool checker)
{
	reverse_rotate(stack_b);
	if (!checker)
		ft_printf("rrb");
}

void	rrr(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
{
	both_reverse_rotate(stack_a, stack_b);
	if (!checker)
		ft_printf("rrr");
}