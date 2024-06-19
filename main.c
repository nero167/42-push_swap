/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: namirtha <namirtha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 13:26:52 by namirtha          #+#    #+#             */
/*   Updated: 2024/06/19 15:04:57 by namirtha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack_node	*stack_a;
	t_stack_node	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		print_error_and_exit("Error!", EXIT_FAILURE);
;
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	// creating the stack	
	stack_init(&stack_a, argv + 1, 2 == argc);
	if (!stack_sorted(stack_a))
	{
		if (stack_len(stack_a) == 2)
			sa(&a, false);
		else if (stack_len(stack_a) == 3)
			tiny_sort(&stack_a);
		else
			push_swap(&stack_a, &stack_b);
	}
	free_stack(&stack_a);
}