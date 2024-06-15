/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:14:53 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/12 17:58:32 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	swap(t_stack_list** head)
{	
	t_stack_list	*tmp_node;
	int				len;

	if (NULL == head || NULL == *head || 1 == len)
		return ;
	if ((*head)->next->data > (*head)->data)
	{
		tmp_node = (*head)->next;
		(*head)->next = tmp_node->next;
		tmp_node->next = *head;
		(*head) = tmp_node;
	}
}

void	sa(t_stack_list** stack_a, bool checker)
{
	swap(stack_a);
	if (!checker)
		ft_printf("sa");
}

void	sb(t_stack_list** stack_b, bool checker)
{
	swap(stack_b);
	if (!checker)
		ft_printf("sb");
}

void	ss(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
{
	swap_both(stack_a, stack_b);
	if (!checker)
		ft_printf("ss");
}