/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mazilino <mazilino@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 14:13:44 by mazilino          #+#    #+#             */
/*   Updated: 2024/03/21 16:03:40 by mazilino         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	total_length(char **strs, char *sep, int size)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		if (i++ < size - 1)
			len += ft_strlen(sep);
	}
	return (len + 1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		k;
	char	*result;

	k = 0;
	len = total_length(strs, sep, size);
	result = malloc(len);
	if (!result)
		return (NULL);
	result[0] = '\0';
	while (k < size)
	{
		ft_strcat(result, strs[k]);
		if (k++ < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}

/* int main(void)
{
	char *strs[] = {"Dan", "Peter", "Samson", "Penny", "42", "Diego"};
	char *result = ft_strjoin(6, strs, " + ");
	printf("%s\n", result);
	free(result);
	return 0;
} */
