/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_utils.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:14:48 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/10 20:29:23 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	rra(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
{
	reverse_rotate(stack_a);
	if (!checker)
		ft_printf("rra");
}

void	rrb(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
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