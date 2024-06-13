/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gyeepach <gyeepach@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 22:00:23 by gyeepach          #+#    #+#             */
/*   Updated: 2024/06/13 15:48:42 by gyeepach         ###   ########.fr       */
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
	int				min;
	int				negative_above_median;
	int				max;
	int				positive_below_median;
	struct s_list	*median;
	struct s_list	*next;
	struct s_list	*prev;
} t_stack_list;




// command
void	sa(t_stack_list** stack_a, bool checker);
void	sb(t_stack_list** stack_b, bool checker);
void	ss(t_stack_list** stack_a, t_stack_list** stack_b, bool checker);
void	pa(t_stack_list** stack_a, t_stack_list** stack_b, bool checker);
void	pb(t_stack_list** stack_a, t_stack_list** stack_b, bool checker);
void	ra(t_stack_list** stack_a, bool checker);
void	rb(t_stack_list** stack_b, bool checker);
void	rr(t_stack_list** stack_a, t_stack_list** stack_b, bool checker);
void	rra(t_stack_list** stack_a, bool checker);
void	rrb(t_stack_list** stack_b, bool checker);
void	rrr(t_stack_list** stack_a, t_stack_list** stack_b, bool checker);


