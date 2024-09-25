/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazilino <mazilino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 16:11:22 by mazilino          #+#    #+#             */
/*   Updated: 2024/03/21 14:02:12 by mazilino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		length;
	int		i;
	char	*copy;

	length = 0;
	while (src[length] != '\0')
	{
		length++;
	}
	copy = (char *)malloc(sizeof(char) * (length + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}

/* int main(void)
{
    char    *str;
    char    *new_str;

    str = "Football Sucks";
    new_str = ft_strdup(str);
    printf("%s\n", new_str);
} */
