#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ('a' <= str[i] && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
		{
			i++;
		}
	}
	return (str);
}

/* int	main(void)
{
	char str[] = "I dont even Like yoacfsmvsv.3";
	char *returnvalue = ft_strupcase(str);
	printf("Look: %s", returnvalue);
}
 */
