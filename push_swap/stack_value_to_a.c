/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_value_to_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:17:45 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/13 16:13:41 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"


static long	ft_atol(const char *nptr)
{
	int	check_plus_or_minus;
	int	res;
	int	i;

	i = 0;
	check_plus_or_minus = 1;
	res = 0;
	while (ft_isspace(nptr[i]))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			check_plus_or_minus *= -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res *= check_plus_or_minus);
}

int check_duplicate_number(t_stack_list *a, int nbr)
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

void	stack_value_to_a(t_stack_list **a, char **argv, bool flag_argc_2)
{
	long	nbr;
	int		i;
	
	i = 0;
	while(*argv)
	{
		if (error_invalid_input(argv[i]))
			error_free(a, argv, flag_argc_2);
		nbr = ft_atol(*argv);
		if (nbr > INT_MAX || nbr < INT_MIN)
			error_free(a, argv, flag_argc_2);
		if (check_duplicate_number(*a, (int)nbr))
			error_free(a, argv, flag_argc_2);
		// append
		++i;
	}
	if (flag_argc_2)
		free_matrix(argv);
}
t_stack_list *append_node(t_stack_list **stack, int nbr)
{
	t_stack_list *node;
	t_stack_list *last_node;

	if (stack == NULL)
		return ;
	node = malloc(sizeof(t_stack_list));
	if (node == NULL)
		return ;
	node->next = NULL;
	node->data = nbr;
	if (*stack == NULL)
	{
		*stack = node;
		node->prev =  NULL;
	}
	else
	{
		last_node = find_last_node(*stack);
		last_node->next = node;
		node->prev = last_node;
	}
}