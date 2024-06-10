/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:00:23 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/10 20:48:29 by gyeepach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include "ft_printf.h"
# include "libft.h"


typedef struct s_list
{
	int				data;
	int				median;
	int				min;
	int				max;
	struct s_list	*next;
	struct s_list	*prev;
} t_stack_list;

void	sa(int stack_a);
void	sb(int stack_b);
void	ss(int stack_a, int stack_b);
void	pa(int stack_a, int stack_b);
void	pb(int stack_a, int stack_b);
void	ra(int stack_a, int stack_b);
void	rb(int stack_a, int stack_b);
void	rr(int stack_a, int stack_b);
void	rra(int stack_a, int stack_b);
void	rrb(int stack_a, int stack_b);
void	rrr(int stack_a, int stack_b);


