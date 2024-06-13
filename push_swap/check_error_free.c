/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 20:08:46 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/10 20:32:32 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdlib.h>
#include <stdio.h>

void	free_matrix(char **argv)
{
	int	i;

	i = -1;
	if (NULL == argv || NULL == *argv)
		return ;
	while (argv[i])
		free(argv[i++]);
	free(argv - 1);
}

void	free_stack(t_stack_list** stack)
{
	t_stack_list	*tmp;
	t_stack_list	*curr;

	if (NULL == stack)
		return ;
	curr = *stack;
	while (curr)
	{
		tmp = curr->next;
		free(tmp);
		curr = tmp;
	}
	*stack = NULL;
}

void	check_error_free(t_stack_list** stack_a, t_stack_list** argv, bool flag_argc_2)
{
	free(stack_a);
	if (flag_argc_2)
		free_matrix(argv);
	ft_printf("Error\n");
	exit(1);
}

int		error_invalid_input(char *str_number)
{
	if(!(*str_number == '+' 
				|| *str_number =='-'
				|| (*str_number >= '0' && *str_number <= '9')))
			return (1);
	if((*str_number == '+'
				|| *str_number == '-')
			&& !(str_number[1] >= '0' && str_number[1] <= '9'))
			return (1);
	while (*++str_number)
	{
		if (!(*str_number >= '0' && str_number <= '9'))
			return (1);
	}
	return (0);
}

int		error_duplicate_number(t_stack_list *a, int nbr)
{
	if (a == NULL)
		return (0);
	while (a)
	{
		if (a->data == nbr)
			return (1);
		a = a->next;
	}
	return (0);
}