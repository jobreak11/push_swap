/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:14:45 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/12 17:53:17 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	push(t_stack_list** dest, t_stack_list** src)
{
	t_stack_list	*node_to_push;

	if (NULL == *src)
		return ;
	node_to_push = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	node_to_push->prev = NULL;
	if (NULL == *dest)
	{
		*dest = node_to_push;
		node_to_push->next = NULL;
	}
	else
	{
		node_to_push->next = *dest;
		node_to_push->next->prev = node_to_push;
		*dest = node_to_push;
	}
}

void	pa(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
{
	push(stack_a, stack_b);
	if (!checker)
		ft_printf("pa");
}

void	pb(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
{
	push(stack_b, stack_a);
	if (!checker)
		ft_printf("pb");
}
