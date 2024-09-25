/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazilino <mazilino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:42:07 by mazilino          #+#    #+#             */
/*   Updated: 2024/03/20 17:41:07 by mazilino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*copy;
	int	length;

	if (max <= min)
		return (0);
	length = max - min;
	copy = (int *)malloc(sizeof(int) * (length + 1));
	if (copy == NULL)
		return (NULL);
	length = 0;
	while (max > min)
	{
		copy[length] = min;
		min++;
		length++;
	}
	return (copy);
}

/* int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 5;
	max = 10;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}
 */
