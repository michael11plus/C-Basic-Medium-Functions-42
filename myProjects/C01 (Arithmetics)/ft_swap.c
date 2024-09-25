/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazilino <mazilino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 17:22:00 by mazilino          #+#    #+#             */
/*   Updated: 2024/03/11 15:53:58 by mazilino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	var;

	var = *a;
	*a = *b;
	*b = var;
}

/*
int	main(void)
{
	int	a = 7;
	int	b = 9;

	printf("Before: %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("After: %d, %d\n", a, b);
	return (0);
}
*/
