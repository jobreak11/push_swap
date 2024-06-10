/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_value_to_a.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 22:17:45 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/10 20:37:31 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"


static long	atol(const char *nptr)
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
		nbr = atol(*argv);
		if (nbr > INT_MAX || nbr < INT_MIN)
			error_free(a, argv, flag_argc_2);
		if (check_duplicate_number(*a, (int)nbr))
			error_free(a, argv, flag_argc_2);
		
		++i;
	}
	if (flag_argc_2)
		free_matrix(argv);
}