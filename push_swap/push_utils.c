/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:14:45 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/10 20:29:29 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

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
