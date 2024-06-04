/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:00:51 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/04 22:10:40 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "push_swap.h"

int main(int argc, char *argv[])
{
	t_list	*list;
	int		i;

	list = NULL;
	i = 1;
	while (i < argc)
	{
		int number = atoi(argv[i]);

		t_list *n = malloc(sizeof(t_list));
		if (n == NULL)
		{
			return 1;
		}
		n->data = number;
		n->next = list;
		list = n;
		i++;
	}

	t_list *ptr = list;
	while (ptr != NULL)
	{
		printf("%i\n", ptr->data);
		ptr = ptr->next;
	}
}
