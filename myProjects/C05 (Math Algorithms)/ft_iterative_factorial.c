/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazilino <mazilino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 19:53:18 by mazilino          #+#    #+#             */
/*   Updated: 2024/03/18 20:09:52 by mazilino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	number;
	int	i;

	number = 1;
	i = 1;
	if ((nb < 0) || (nb > 12))
		return (0);
	if ((nb == 1) || (nb == 0))
		return (i);
	while (i <= nb)
	{
		number = i * number;
		i++;
	}
	return (number);
}

/* int	main(void)
{
	printf("%d \n", ft_iterative_factorial(0));
}
 */
