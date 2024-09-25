#include <unistd.h>
#include <stdio.h>

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

/* int	main(void)
{
	char string1[] = "I dont even like";
	char string2[] = "you";
	char *returnvalue = ft_strcat(string1, string2);
	printf("Look: %s", returnvalue);
}
 */
