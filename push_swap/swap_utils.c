/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:14:53 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/10 20:29:39 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	sa(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
{
	swap(stack_a);
	if (!checker)
		ft_printf("sa");
}

void	sb(t_stack_list** stack_a, t_stack_list** stack_b, bool checker)
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