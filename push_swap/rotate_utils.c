/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:14:50 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/10 20:29:31 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	ra(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
{
	rotate(stack_a);
	if (!checker)
		ft_printf("ra");
}

void	rb(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
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