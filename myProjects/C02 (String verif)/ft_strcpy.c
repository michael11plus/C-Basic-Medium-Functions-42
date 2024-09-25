#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*
int	main(void)
{
	char str[] = "Bomboclaaaat";
	char dest[] = {};
	ft_strcpy(dest, str);
	printf("%s\n", dest);
	return(0);
}
*/
