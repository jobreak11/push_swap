/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:00:51 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/13 15:35:39 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc, char *argv[])
{
	t_stack_list	*a;
	t_stack_list	*b;

	a = NULL;
	b = NULL;
	if (1 == argc || (2 == argc && argv[1][0]))
		return (1);
	else if (2 == argc)
		argv = ft_split(argv[1], ' ');
	stack_value_to_a(&a, argv + 1, 2 == argc);
	if (!check_stack_sorted(a))
		sort_process(&a, &b);
	free(a);
}
