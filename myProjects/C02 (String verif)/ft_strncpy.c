#include <unistd.h>
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		
	}
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/* int	main(void)
{
	char str[] = "Bomboclat Verification";
	char dest[] = {};
	unsigned int n = 30;
	ft_strncpy(dest, str, n);
	printf("%s\n", dest);
	return(0);
}
 */
