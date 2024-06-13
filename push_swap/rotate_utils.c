/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:14:50 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/12 18:01:03 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	rotate(t_stack_list **stack)
{
	t_stack_list	*last_node;
	int				len;
	
	len = stack_len(*stack);
	if (NULL == stack || NULL == *stack || 1 == len)
		return ;
	last_node = find_last_node(*stack);
	last_node->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_node->next->prev = last_node;
	last_node->next->next =NULL;
}

void	ra(t_stack_list** stack_a, bool checker)
{
	rotate(stack_a);
	if (!checker)
		ft_printf("ra");
}

void	rb(t_stack_list** stack_b, bool checker)
{
	rotate(stack_b);
	if (!checker)
		ft_printf("ra");
}

void	rr(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
{
	both_rotate(stack_a, stack_b);
	if (!checker)
		ft_printf("rr");
}