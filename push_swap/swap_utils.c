/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:14:53 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/04 22:48:03 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

void	sa(int stack_a)
{
	int		*i;
	int		temp;
	char	*stack_a_to_str;

	stack_a_to_str = ft_itoa(stack_a);
	i = ft_strlen(stack_a);
	if (stack_a[i - 1] > stack_a[i])
	{
		temp = stack_a[i - 1];
		stack_a[i - 1] = stack_a[i];
		stack_a[i] = temp;
	}
	ft_printf("sa");
}

void	sb(int stack_b)
{
	int		*i;
	int		temp;
	char	*stack_b_to_str;

	stack_b_to_str = ft_itoa(stack_b);
	i = ft_strlen(stack_b);
	if (stack_b[i - 1] > stack_b[i])
	{
		temp = stack_b[i - 1];
		stack_b[i - 1] = stack_b[i];
		stack_b[i] = temp;
	}
	ft_printf("sb");
}

void	ss(int stack_a, int stack_b)
{
	int		*i;
	int		*j;
	int		temp;
	char	*stack_a_to_str;
	char	*stack_b_to_str;

	stack_a_to_str = ft_itoa(stack_a);
	stack_b_to_str = ft_itoa(stack_b);
	i = ft_strlen(stack_a);
	j = ft_strlen(stack_b);
	if (stack_a[i - 1] > stack_a[i] && stack_b[j - 1] > stack_b[j])
	{
		temp = stack_a[i - 1];
		stack_a[i - 1] = stack_a[i];
		stack_a[i] = temp;
		temp = stack_b[i - 1];
		stack_b[i - 1] = stack_b[i];
		stack_b[i] = temp;
	}	
	ft_printf("ss");
}