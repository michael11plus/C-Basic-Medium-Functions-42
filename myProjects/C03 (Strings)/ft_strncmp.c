/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazilino <mazilino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 20:26:05 by mazilino          #+#    #+#             */
/*   Updated: 2024/03/13 13:30:00 by mazilino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s2[i] != '\0' || s1[i] != '\0') && i < n)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

/* int	main(void)
{
	char string1[] = "I dont even like";
	char string2[] = "I dont exven likezsiknfav";
	unsigned int n = 9;
	char returnvalue = ft_strncmp(string1, string2, n);
	printf("Look: %d", returnvalue);
}
 */
